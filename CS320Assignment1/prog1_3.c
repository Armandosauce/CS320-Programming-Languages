#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1_2.h"

int main(int argc, char *argv[]) {

  printf("Assignment #1-3, Armando Perez, armandoperez0001@gmail.com\n");

  if(argc != 2) {
    printf("\nThis program expects a single command line argument.\n");
    return 0;
  }

  int i = 0;
  
  /* atoi() converts the command line integer into data type 'int' */
  int N = atoi(argv[1]);
  char buff[256];
  char *command;
  char *data;
  char *input;
  
  /* Stack object is initiallized */
  STACK *s = MakeStack(5);

  while(i < N) {
    printf("> ");
    scanf(" %[^\t\n]", buff);

    /* Reads in the tokens from the scanf() call 
       Stores the number of tokens in 'elements'
    */
    int elements = 0;
    input = command = strtok(buff, " ");
    while (input != NULL) {
      input = strtok(NULL, " ");
      if (elements == 0) {
          data = input;
      }
      elements++;
    }
    /* 
      Checks the number of elements and the tokens passed in.
      If there are two tokens, and the first is 'push', then the value
      following the 'push' token will be pushed onto the stack.
      If there is only one token, and the token is 'pop', then the most
      recent value pushed onto the stack will be 'popped' off and
      returned by the function.
    */

    if(elements == 2 && strcmp(command,"push") == 0) {
        int dataInt = atoi(data);
        Push(s, dataInt);
        
    }
    else if(elements == 1 && strcmp(command,"pop") == 0) {
       int x = Pop(s);
       printf("%d\n", x);
    }

    /* increments the counter towards the command line integer argv[1]
    */    
    i++; 
  }

  return 0;
}

