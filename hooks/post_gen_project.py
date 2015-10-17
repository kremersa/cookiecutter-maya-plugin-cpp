#!/usr/bin/env python
# -*- coding: utf-8 -*-

import logging
logging.basicConfig(level=logging.DEBUG)
logger = logging.getLogger('post_gen_project')

import shutil
import os


choices = ['deformer', 'node', 'cmd']


def verify(input=None):
    if input not in choices:
        logger.info("Wrong input for plugin type, using Node as default.")
        return False

    return True


def move_plugin_of(choice=None):
    if not verify(choice):
        choice = 'node'

    logger.info("Moving files for %s." % choice)

    shutil.move(choice, 'src')
    choices.remove(choice)
    for folder in choices:
        shutil.rmtree(folder)

move_plugin_of("{{cookiecutter.plugin_type}}")
