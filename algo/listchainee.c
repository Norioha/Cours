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
    element *top;
} stack;
bool stack_is_empty(stack s)
{
    return s.top == NULL;
}
void stack_create(stack *s)
{
    s->top = NULL;
}
void stack_destroy(stack *s)
{
    while (!stack_is_empty(*s))
    {
        element *temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
}

void stack_push(stack *s, int val)
{
    element *e = malloc(sizeof(element));
    e->data = val;
    e->next = s->top;
    s->top = e;
}
bool stack_pop(stack *s, int *val)
{
    if (stack_is_empty(*s))
    {
        return false;
    }
    else
    {
        *val = s->top->data;
        element *tmp = s->top;
        s->top = tmp->next;
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
        *val = s.top->data;
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
    printf("%d", s.top->data);
    printf("\n");
    printf("%d,%d\n", success, val);
    success = stack_pop(&s, &val);
}