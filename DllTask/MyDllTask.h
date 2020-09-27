#pragma once

#ifdef MyDllTask_EXPORTS
#define MyDllTask_API __declspec(dllexport)
#else
#define MyDllTask_API __declspec(dllimport)
#endif

#include <string>

extern "C" MyDllTask_API std::string gettingString(
    std::string str);