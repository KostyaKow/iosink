#ifndef LIB_H_INCLUDE
#define LIB_H_INCLUDE

/* This is a small wrapper library for controlling keyboard
 * and mouse. This is mostly just a wrapper around X functions.
 * Maybe later on, I will add Windows and OS X support.
 */

typedef char byte;

void move_mose(int x, int y);

void mouse_press(byte key);
void mouse_release(byte key);

void key_press(unsigned key);
void key_release(unsigned key);

#ifndef AMSL_LINUX
#warning This program is tested only on Linux.
#endif

#endif //LIB_H_INCLUDE
