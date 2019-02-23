#ifndef _prog1_2_h
#define _prog1_2_h

typedef struct stack{

    int* data;
    int size;
    int capacity;
} STACK;

STACK* MakeStack(int initialCapacity);
void Push(STACK *stackPtr, int data);
int Pop(STACK *stackPtr);
void Grow(STACK *stackPtr);

#endif
