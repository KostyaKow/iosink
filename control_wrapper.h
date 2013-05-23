#ifndef LIB_H_INCLUDE
#define LIB_H_INCLUDE

/* This is a small wrapper library for controlling (and querying)
 * keyboard and mouse. This is mostly just a wrapper around X functions.
 * Maybe later on, I will add Windows and OS X support.
 */

#include "config.h"

typedef char byte;
typedef char bool;

#define true  1
#define false 0

void init_input_lib(void);

void move_mouse(int x, int y);

void mouse_press(byte key);
void mouse_release(byte key);

void key_press(unsigned key);
void key_release(unsigned key);

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef YAISP_XORG
#include <X11/Xlib.h>

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#endif

#endif //LIB_H_INCLUDE
