#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include"stack_array_int.h"

bool is_valid(stack s) {
   return (s.capacity > 0 && s.top >= -1 && s.data != NULL);
}

void resize(stack* s,int max) {
   assert(is_valid(*s));
   if (max > s->capacity) {
      s->capacity = max;
      s->data = realloc(s->data,max*sizeof(int));
   }
}

//Créer une nouvelle pile vide de capacité initiale <max>
stack stack_build(int max) {
   stack s;
   s.capacity = max;
   s.data = malloc(max*sizeof(int));
   s.top = -1;
   return s;
}

//Libérer le tableau, mettre la capacité à < -1
void stack_destroy(stack* s) {
   // à compléter
}

//Empiler un élement au sommet de la pile
void stack_push(stack* s,int val) {
   // à compléter
}

//Dépiler un élément du sommet de la pile
int stack_pop(stack* s) {
   // à compléter
   
   return 0;
}

//Tester si la pile est vide
bool stack_is_empty(stack s){
   // à compléter
   return true;
}


//Tester si la pile est pleine
bool stack_is_full(stack s) {
   // à compléter
   return true;
}


//Consulter l'élément au sommet de la pile
int stack_peek(stack s) {
   // à compléter
   return 0;
}

//Compter le nombre d'éléments de la pile
int stack_count(stack s)  {
   // à compléter
   return 0;  
}
