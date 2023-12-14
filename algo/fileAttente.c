#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct _element
{
    int data;
    struct _element *next;
} element;

typedef struct _stack
{
    element *head;
    element *tail;
} stack;
bool queue_is_empty(stack s)
{
    return (s.head == NULL && s.head == NULL);
}
void stack_create(stack *s)
{
    s->head = NULL;
    s->tail = NULL;
}
void stack_destroy(stack *s)
{
    while (!stack_is_empty(*s))
    {
        element *temp = s->head;
        s->head = s->head->next;
        free(temp);
    }
}

void queue_enqueue(stack *s, int val)
{
    element *e = malloc(sizeof(element));
    e->data = val;

    if (queue_is_empty(*s))
    {

        e->next =NULL;
        s->head = e;
        s->tail = e;
    }
    else{
        e->next =  s;
        e->
    }
}
bool stack_pop(stack *s, int *val)
{
    if (stack_is_empty(*s))
    {
        return false;
    }
    else
    {
        *val = s->head->data;
        element *tmp = s->head;
        s->head = tmp->next;
        free(tmp);
        return true;
    }
}
bool stack_peek(stack s, int *val)
{
    if (stack_is_empty(s))
    {
        return false;
    }
    else
    {
        *val = s.head->data;
        return true;
    }
}

int main()
{
    stack s;
    stack_create(&s);
    stack_push(&s, 10);
    stack_push(&s, 22);
    stack_push(&s, 51);
    int val = 0;
    bool success = stack_peek(s, &val);
    printf("%d", s.head->data);
    printf("\n");
    printf("%d,%d\n", success, val);
    success = stack_pop(&s, &val);
}