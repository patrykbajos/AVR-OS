import json
from build_utils import *
import os
import sys
import platform
import subprocess
import re

tf = open('./.vscode/tasks.json', 'r+')
cf = open('./.vscode/c_cpp_properties.json', 'r+')

tasks = json.load(tf)
c_cpp_props = json.load(cf)
build_conf = get_build_conf()

def get_dict_with_value(dict_, label, value):
    return [x for x in dict_ if x[label] == value]

def get_cmd_matches(args, pattern, stdin=None):
    proc = subprocess.run(args, 
    stdin=stdin, stdout=subprocess.PIPE, stderr=subprocess.STDOUT , text=True)
    
    if proc.returncode != 0:
        return None

    return re.findall(pattern, proc.stdout, re.M)

def get_gcc_defines(mcu, f_cpu):
    # avr-gcc -mmcu= -DF_CPU= -dM -E - 0</dev/null 
    args = ['avr-gcc', 
    '-mmcu={}'.format(mcu), '-DF_CPU={}'.format(f_cpu),
    '-dM', '-E', '-']
    pattern =  r'^ *#define +(.+?) +(.+?) *$'
    matches = get_cmd_matches(args, pattern, subprocess.DEVNULL)

    if not isinstance(matches, list):
        return []

    if not matches:
        return []

    defines = []
    for m in matches:
        # m is tuple of (defname, defvalue), change it to str defname=defvalue
        if isinstance(m, tuple):
            defines.append('{}={}'.format(m[0], m[1]))

    return defines

def get_gcc_includes():
    # avr-gcc -xc -E -### -
    args = ['avr-gcc', '-xc', '-E', '-###', '-']
    pattern = r'^ *LIBRARY_PATH *= *(.*?) *$'
    matches = get_cmd_matches(args, pattern)

    if not isinstance(matches, list):
        return []

    if not matches:
        return []

    # i is : separated string of includes
    i = str(matches[0])
    return i.split(':')

# Get system name and check
supported_sys_dict = {
    'Linux': 'Linux',
    'Darwin': 'Mac',
    'Windows': 'Win32'
}

sys = platform.system()

if not sys in supported_sys_dict:
    print('Unsupported platform system: {}'.format(sys))
    exit

# Get base conf equivalent to platform
base_conf_name = supported_sys_dict[sys]
configs = c_cpp_props['configurations']
base_conf = get_dict_with_value(configs, 'name', base_conf_name)

# Get avr-gcc defines and includes
f_cpu=1000000
defines = get_gcc_defines("atmega16", f_cpu)
includes = get_gcc_includes()

print(defines)
