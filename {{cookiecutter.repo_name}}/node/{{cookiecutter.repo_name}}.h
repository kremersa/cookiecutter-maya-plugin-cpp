#ifndef {{cookiecutter.plugin_name|upper}}_H_
#define {{cookiecutter.plugin_name|upper}}_H_

#include <maya/MPxNode.h>


class {{cookiecutter.plugin_name}} : public MPxNode
{
  public:
                        {{cookiecutter.plugin_name}}();
    virtual             ~{{cookiecutter.plugin_name}}();

    static  void*       creator();
    static  MStatus     initialize();

    virtual MStatus     compute( const MPlug& plug,
                                 MDataBlock& data );

    static  MTypeId     id;
};

#endif //{{cookiecutter.plugin_name|upper}}_H_
