/*  Linked list implementation of stack module  */
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node
{
    int data;
    struct node *next;
};

static struct node *top = NULL;

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    while (!is_empty())
    {
        pop();
    }
}

bool is_empty(void)
{
    return top == NULL;
}

bool is_full(void)
{
    return false;
}

void push(int i)
{
    struct node *new = malloc(sizeof(*new));
    if (new == NULL)
    {
        terminate("Error in push: stack is full.");
    }

    new->data = i;
    new->next = top;
    top = new;
}

int pop(void)
{
    struct node *old_top;
    int i;

    if (is_empty())
    {
        printf("Error in top: stack is empty.");
    }

    old_top = top;
    i = top->data;
    top = top->next;
    free(old_top);
    return i;
}