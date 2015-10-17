#include "{{cookiecutter.plugin_name}}.h"


MTypeId     {{cookiecutter.plugin_name}}::id( 0x0000000  );


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


MStatus {{cookiecutter.plugin_name}}::deform( MDataBlock& data, MItGeometry& itGeo,
                                              const MMatrix& localToWorldMatrix,
                                              unsigned int geomIndex )
{
    MStatus status;

    return MS::kSuccess;
}


MStatus {{cookiecutter.plugin_name}}::initialize()
{
    MStatus status;

    return MS::kSuccess;
}
