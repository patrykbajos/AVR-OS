import json
from build_utils import *

t = open('.vscode/tasks.json', 'rw')
c = open('.vscode/c_cpp_properties.json', 'rw')

tconf = json.read(t)
cconf = json.read(t)
bc = get_build_conf()


