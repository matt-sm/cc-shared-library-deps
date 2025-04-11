#include <string>

#ifndef __HELLO_H__
#define __HELLO_H__

#ifdef _WIN32
#  define EXPORTED __declspec( dllexport )
#else
#  define EXPORTED
#endif

class EXPORTED Hello
{
public:
    std::string print();
};

#endif