#ifndef SUBTRACTBEDPLUGIN_H
#define SUBTRACTBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SubtractBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SubtractBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
