#include "{{cookiecutter.plugin_name}}.h"
#include <maya/MFnPlugin.h>


MStatus initializePlugin( MObject obj )
{
    MStatus status;

    MFnPlugin fnPlugin(obj, "{{cookiecutter.author}}", "{{cookiecutter.version}}", "{{cookiecutter.requiredApiVersion}}");

    status = fnPlugin.registerNode("{{cookiecutter.plugin_name}}",
                                   {{cookiecutter.plugin_name}}::id,
                                   {{cookiecutter.plugin_name}}::creator,
                                   {{cookiecutter.plugin_name}}::initialize);
    CHECK_MSTATUS_AND_RETURN_IT(status);

    return MS::kSuccess;
}


MStatus uninitializePlugin( MObject obj)
{
    MStatus   status;
    MFnPlugin plugin( obj );

    status = plugin.deregisterNode( {{cookiecutter.plugin_name}}::id );
    CHECK_MSTATUS_AND_RETURN_IT(status);

    return MS::kSuccess;
}
