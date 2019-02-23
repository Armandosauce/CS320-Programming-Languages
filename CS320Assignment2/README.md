Armando Perez, Assignment #2
armandoperez0001@gmail.com
CS320 Spring 2018

This project is a tokenizer and parser implementation in the C++ programming language and can be compiled using the following lines:

g++ prog2_1.cpp prog2_2.cpp -o Tokenizer

Which is for the Tokenizer portion of this project only. It can then be ran using the command line:

./Tokenizer

can also be ran using the following line:

g++ prog2_1.cpp prog2_3.cpp prog2_4.cpp -o Parser

which would include both the Tokenizer portion as well as the Parser portion of this project. It can be ran using the following command line

./Parser

The file prog2_1.cpp is a program which contains all the code for the Tokenizer class and adheres to the rules outlined in the Instructions page. The tokenizer can be effectively retrofit to apply to any set of keywords, but is designed to work with only the following:

push, pop, add, sub, mul, div,
mod, skip, save, get and any valid integer.

The file prog2_3.cpp is a program which contains all the code for the Parser class and, inaddition to first Tokenizing the input, also implements the rules set forth in the instructions page. A different set of rules can be applied to achieve variable output, but the ones for this assignment were:

1.) Have the tokens :

pop, add, sub, mul, div, mod, skip appear by themselves on a single line

&

2.) Have the tokens:

push, save, and get appear on a single line with an integer value



