#include <stdio.h>
#include <stdlib.h>
#include "prog1_2.h"

/*
   Initializes an empty Stack object by calling 'malloc()' and allocating 
   enough data point to suit the initial capacity value passed in. This
   is done by multiplying the size of the data type (int) in bytes by the
   value of initialCapacity. Returns the Stack that was created in memory.
   
*/

STACK* MakeStack(int initialCapacity) {

    STACK *s = (STACK*) malloc(sizeof(STACK));

    s->data = (int*)malloc(initialCapacity * sizeof(int));
    s->capacity = initialCapacity;
    s->size = 0;

    return s;

}

/*
   First, the Push() function check to make sure there is enough capacity
   in the stack to add the value being pushed. If there is not, Grow() is 
   called to ensure there will be enough capacity.
   Then, the value at the index of 'size' on the stack is set to the value
   passed into the Push() function, which in this case is 'data'. After 
   that, the value of 'size' is incremented by 1.

*/

void Push(STACK *stackPtr, int data) {
    if(stackPtr->size >= stackPtr->capacity) {
        Grow(stackPtr);
    }
    stackPtr->data[stackPtr->size] = data;
    stackPtr->size++;
    return;
}

/*
   First, the Pop() function check to see if the stack is currently empty.
   If it is empty, then the function returns -1. If it is NOT empty, then
   then the function returns the value that 'size-1' currently points to, 
   which is the most recent value pushed onto the stack. Then, the value 
   'size' is decremented by 1.
*/

int Pop(STACK *stackPtr) {
  int data;
  if (stackPtr->size <= 0) {
    data = -1;
  }
  else {
    data = (int)stackPtr->data[stackPtr->size -1];
    stackPtr->size--;  
  }
  return data;
}

/*
   The Grow() function will grow the stack that the stack pointer value 
   parameter is pointing to. This is done using the 'realloc()' function 
   in the C standard library (imported using '#include <stdlib.h>'). The
   realloc function willallocate more memory following a previous call to 
   'malloc()' which is used in our MakeStack() function. It follows then 
   that the Grow() function must be used only after a stack has been
   created in memory with the 'malloc() function.

*/
void Grow(STACK *stackPtr) {
  stackPtr->capacity = 2 * stackPtr->capacity;
  stackPtr->data = (int*) realloc(stackPtr->data, stackPtr->capacity*sizeof(int));
}
