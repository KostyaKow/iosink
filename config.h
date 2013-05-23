#ifndef CONFIG_H_INCLUDE
#define CONFIG_H_INCLUDE

//Yet Another Input Sinking Program

#define YAISP_UNIX
#define YAISP_XORG

#ifndef YAISP_UNIX
#error This program is made for Unix with X Windows Server (and tested on Linux).
#endif

#ifndef YAISP_XORG
#error This program needs X Server to run.
#endif

#ifdef YAISP_UNIX
#include <unistd.h>
#endif

#endif //CONFIG_H_INCLUDE
