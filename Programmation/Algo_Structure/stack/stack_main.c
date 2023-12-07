#include <stdio.h>
#include <stdlib.h>
#include"stack_array_int.h"

int main() {
   stack s;
   stack_init(&s);
   stack_push(&s,1);
   stack_push(&s,2);
   stack_push(&s,3);
   printf("%d\n",stack_peek(&s));
   int val = stack_pop(&s);
   val = stack_pop(&s);
   val = stack_pop(&s);
   val = stack_pop(&s);
   return 0;
}
