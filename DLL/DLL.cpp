// DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DLL.h"


// This is an example of an exported variable
DLL_API int nDLL=0;

// This is an example of an exported function.
DLL_API int fnDLL(void)
{
    return 42;
}

// This is an example of an exported function.
DLL_API int PYWINDLLCALL fnDLL2(void)
{
    return 420;
}

// This is an example of an exported function.
DLL_API int fnDLL3(void)
{
    return 4200;
}

// This is the constructor of a class that has been exported.
// see DLL.h for the class definition
CDLL::CDLL()
{
    return;
}
