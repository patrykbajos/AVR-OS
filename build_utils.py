import json

def get_module_conf(module):
    return json.read(open('{}/module.json'.format(module)))

def get_build_conf():
    return json.read(open('build.json'))