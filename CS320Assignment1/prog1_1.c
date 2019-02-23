#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("Assignment #1-1, Armando Perez, armandoperez0001@gmail.com\nWhat is your name?\n");

   char buff[256];

   /* Reads from keyboard until the first carriage return is pressed */
   scanf("%[^\t\n]", buff);

   /*prints Hello <username>! */
   printf("Hello %s!\n", buff);


   return 0;
}
