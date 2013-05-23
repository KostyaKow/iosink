#include <stdio.h>
#include <stdlib.h>

#include "control_wrapper.h"

int main(void) {
   init_input_lib();
   move_mouse(100, 100);
 
   int x, y;

   for (;;) {
      scanf("%i%i", &x, &y);
      move_mouse(x, y);
   }
}
