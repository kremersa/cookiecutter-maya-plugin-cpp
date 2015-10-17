==================================
Cookiecutter Maya Plugin Template
==================================

A cookiecutter template for creating Autodesk Maya plugin nodes using c++.

Getting started
---------------

Install cookiecutter and create the tempalte:

```no-highlight
$ pip install cookiecutter
$ cookiecutter https://github.com/kremersa/cookiecutter-maya-plugin-cpp
```

Cookiecutter prompts you for information regarding your plugin:

```no-highlight
plugin_name (default is "myPlugin"): myDeformer                       # used inside of maya
repo_name (default is "myplugin"):  mydeformer                        # used for directories and filenames
author (default is "Sascha Kremers"): Ben Kenobi                      # added vendor entry in maya plugin
plugin_type (default is "['deformer', 'node', 'cmd']"): deformer      # maya plugin type
maya_version (default is "2016"): 2016                                # maya version
version (default is "0.1"): 0.1.0                                     # internal code version
requiredApiVersion (default is "Any"): Any                            # maya api version
maya_typeId (default is "0x0000000"): 0x0000001                       # maya type id, handed out by adn
```

You are ready to go ahead an fill the plugin node with your computation code.

```no-highlight
myPlugin/
├── CMakeLists.txt
└── src
    ├── pluginMain.cpp
    ├── myplugin.cpp
    └── myplugin.h
```

Build instructions
------------------

The template contains a cmake that works with OSX/Linux/Windows. This gives you an easy start.

To build your maya plugin run the following lines:

    cmake -G "Unix Makefiles"    # Generates standard UNIX makefiles.
    cmake --build .

License
-------

Distributed under the terms of the [MIT license], Cookiecutter Maya Plugin is free and open source software
