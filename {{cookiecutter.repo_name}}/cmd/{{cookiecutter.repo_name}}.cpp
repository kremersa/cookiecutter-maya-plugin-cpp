#include "{{cookiecutter.plugin_name}}.h"



{{cookiecutter.plugin_name}}::{{cookiecutter.plugin_name}}()
{
}


{{cookiecutter.plugin_name}}::~{{cookiecutter.plugin_name}}()
{
}


void* {{cookiecutter.plugin_name}}::creator()
{
    return new {{cookiecutter.plugin_name}}();
}


MStatus {{cookiecutter.plugin_name}}::doIt( const MArgList& argList )
{
    MStatus status;

    MGlobal::displayInfo("Hello World!");

    return MS::kSuccess;
}
