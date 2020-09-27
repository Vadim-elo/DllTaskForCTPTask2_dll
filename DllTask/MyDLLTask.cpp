#include "pch.h" 
#include <string>
#include "MyDllTask.h"


std::string gettingString(std::string str)
{
    return str = "You entered: " + str;
}
