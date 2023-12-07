#ifndef STACK_ARRAY_INT_H
#define STACK_ARRAY_INT_H

#include <stdbool.h>
const int INCR = 100;

typedef struct _stack {
   int* data;
   int top;
   int capacity;
} stack;

//Créer une nouvelle pile vide de capacité initiale <max>
stack stack_build(int max);
//Libérer le tableau, mettre la capacité à < -1
void stack_destroy(stack* s);
//Empiler un élement au sommet de la pile
void stack_push(stack* s,int val);
//Dépiler un élément du sommet de la pile
int stack_pop(stack* s);
//Tester si la pile est vide
bool stack_is_empty(stack s);
//Tester si la pile est pleine
bool stack_is_full(stack s);
//Consulter l'élément au sommet de la pile
int stack_peek(stack s);
//Compter le nombre d'éléments de la pile
int stack_count(stack s);

#endif