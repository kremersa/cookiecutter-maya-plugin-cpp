#ifndef {{cookiecutter.plugin_name|upper}}_H_
#define {{cookiecutter.plugin_name|upper}}_H_

#include <maya/MArgList.h>
#include <maya/MObject.h>
#include <maya/MGlobal.h>
#include <maya/MPxCommand.h>


class {{cookiecutter.plugin_name}} : public MPxCommand
{
  public:
                        {{cookiecutter.plugin_name}}();
    virtual             ~{{cookiecutter.plugin_name}}();

    static  void*       creator();

    virtual MStatus     doIt( const MArgList& argList );
};

#endif //{{cookiecutter.plugin_name|upper}}_H_
