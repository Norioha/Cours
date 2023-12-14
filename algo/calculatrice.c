#include <stdbool.h>
#include <stdlib.h>
// un exemple

bool evaluate(char *postfix, double *val)
{ // init stack
    for (size_t i = 0; i < strlen(postfix); ++i)
    {
        if (is_operand(postfix[i]))
        {
            stack_push(&s, postfix[i]);
        }
        else if (is_operator(postfix[i]))
        {
            double rhs = stack_pop(&s);
            double lhs = stack_pop(&s);
            stack_push(&s, op(postfix[i], lhs, rhs));
        }
    }
    return stack_pop(&s);
}