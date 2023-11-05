#ifndef STACK_H
#define STACK_H

// Header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the struct
typedef struct StackNode StackNode;

struct StackNode
{
    int data;
    StackNode *next;
};

// Prototypes of functions
StackNode* pop(StackNode*);
StackNode* push( StackNode*, int);
bool isEmpty(StackNode*);
int summit(StackNode*);
StackNode* creatStack(int);
void displayStack(StackNode*);
int getSize(char*);

#endif /* STACK_H */
