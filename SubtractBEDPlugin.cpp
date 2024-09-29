#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SubtractBEDPlugin.h"

void SubtractBEDPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void SubtractBEDPlugin::run() {}

void SubtractBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "subtractBed -a";
myCommand += " ";
addRequiredParameterNoFlag("A");
addRequiredParameter("-b", "B");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<SubtractBEDPlugin> SubtractBEDPluginProxy = PluginProxy<SubtractBEDPlugin>("SubtractBED", PluginManager::getInstance());
