#ifndef {{cookiecutter.plugin_name|upper}}_H_
#define {{cookiecutter.plugin_name|upper}}_H_

#include <maya/MPxDeformerNode.h>


class {{cookiecutter.plugin_name}} : public MPxDeformerNode
{
  public:
                        {{cookiecutter.plugin_name}}();
    virtual             ~{{cookiecutter.plugin_name}}();

    static  void*       creator();
    static  MStatus     initialize();

    virtual MStatus     deform( MDataBlock& data,
                                MItGeometry& itGeo,
                                const MMatrix& localToWorldMatrix,
                                unsigned int geomIndex );

    static  MTypeId     id;
};

#endif //{{cookiecutter.plugin_name|upper}}_H_
