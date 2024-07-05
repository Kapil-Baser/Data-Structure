#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#define STACK_SIZE 100

typedef struct
{
    int contents[STACK_SIZE];
    int top;
}Stack;

/* Function prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif /* STACK_H */