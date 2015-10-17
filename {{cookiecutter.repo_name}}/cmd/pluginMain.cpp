#include "{{cookiecutter.plugin_name}}.h"
#include <maya/MFnPlugin.h>


MStatus initializePlugin(MObject obj)
{
    MFnPlugin fnPlugin(obj, "{{cookiecutter.author}}", "{{cookiecutter.version}}", "{{cookiecutter.requiredApiVersion}}");

    MStatus status = fnPlugin.registerCommand("{{cookiecutter.plugin_name}}", {{cookiecutter.plugin_name}}::creator);
    CHECK_MSTATUS_AND_RETURN_IT(status);

    return status;
}

MStatus uninitializePlugin(MObject obj)
{
    MFnPlugin fnPlugin(obj);

    MStatus status = fnPlugin.deregisterCommand("{{cookiecutter.plugin_name}}");
    CHECK_MSTATUS_AND_RETURN_IT(status);

    return status;
}

