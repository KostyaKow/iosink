#include "control_wrapper.h"

#ifndef YAISP_XORG
void init_input_lib(void)        {}
void move_mose(int x, int y)     {}
void mouse_press(byte key)       {}
void mouse_release(byte key)     {}
void key_press(unsigned key)     {}
void key_release(unsigned key)   {}
#else

struct {
   Display *dpy;
   Window root_window;
} input_data;

void init_input_lib(void) {
   input_data.dpy = XOpenDisplay(0);
   input_data.root_window = XRootWindow(input_data.dpy, 0);
   XSelectInput(input_data.dpy, input_data.root_window, KeyReleaseMask);  
}

void move_mouse(int x, int y) {
   XWarpPointer(input_data.dpy, None, input_data.root_window, 0, 0, 0, 0, x, y);
   XFlush(dpy);
}

void mouse_press(byte key)       {}
void mouse_release(byte key)     {}
void key_press(unsigned key)     {}
void key_release(unsigned key)   {}

#endif

