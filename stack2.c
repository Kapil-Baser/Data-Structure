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
    
}