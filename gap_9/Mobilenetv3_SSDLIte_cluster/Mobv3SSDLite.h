#ifndef __Mobv3SSDLite_H__
#define __Mobv3SSDLite_H__

#define __PREFIX(x) Mobv3SSDLite ## x
// Include basic GAP builtins defined in the Autotiler
#include "Gap.h"

#ifdef __EMUL__
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/param.h>
#include <string.h>
#endif

extern AT_DEFAULTFLASH_EXT_ADDR_TYPE Mobv3SSDLite_L3_Flash;
#endif