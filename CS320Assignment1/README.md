Armando Perez
armandoperez0001@gmail.com

This project is a stack implementation in the C programming language and can be compiled using the following line:

gcc prog1_2.c prog1_3.c -o prog1_3

Which can then be ran using the command line:

./prog1_3

The file prog1_1 is a program which asks the user for his/her name, and prints a 'Hello' message with the user's name. The file can be compiled using the following line:

gcc prog1_1.c -o prog1_1

Which can then be ran using the command line:

./prog1_1

The stack implementation works by receiving input from the user, which must begin with the string 'push' or 'pop'. The 'push' command is followed by any integer number immediately following it on the same line. An example is:

    > push 8

The command 'push 8' will push the integer value of 8 onto the stack.

The 'pop' command consists only of the string 'pop', and will return the most recent integer pushed onto the stack, it will also remove this value from the stack. If the stack is currently empty at the time of calling a 'pop' command, -1 will be returned instead. An example of the 'pop' command is:

    > pop
    -1
    > push 5
    > pop
    5
    > pop
    -1

User input is noted as beginning with the token '> ', and program output is noted as any line not beginning with the input token.
