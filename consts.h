#ifndef CONSTS
#define CONSTS

#ifdef __cplusplus
extern "C" {
#endif

#include "consts_math.h"
#include "consts_phys_mks.h"

#include <stddef.h>

#ifdef MSVC_DLL
    #ifdef MSVC_DLL_EXPORT
        #define CONSTS_API __declspec(dllexport)
    #else
        #define CONSTS_API __declspec(dllimport)
    #endif
#else
    #define CONSTS_API
#endif


CONSTS_API unsigned short int consts_ver_major();
CONSTS_API unsigned short int consts_ver_minor();
CONSTS_API unsigned short int consts_ver_patch();


#ifdef __cplusplus
}
#endif

#endif