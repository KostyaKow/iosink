#include <stdio.h>
#include <stdlib.h>

#include "control_wrapper.h"

int main(void) {
   int x, y;

   for (;;) {
      scanf("input stuff: %i%i", x, y);
      move_mouse(x, y);
   }
}
