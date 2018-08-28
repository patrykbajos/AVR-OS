import json

def get_module_conf(module):
    return json.load(open('{}/module.json'.format(module)))

def get_build_conf():
    return json.load(open('build.json'))