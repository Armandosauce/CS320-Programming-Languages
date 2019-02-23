Armando Perez, Assignment #4
armandoperez0001@gmail.com
CS320 Spring 2018

This project implements a StackMachine that was then used and tested on two algorithms, one that generated the first 100 numbers of the fibonacci sequence, and another that generated the first 100 prime numbers. The StackMachine implementation adhered to various rules outlined in the instructions for Assignment #2, but at its core was a stack. A stack is a LIFO (Last-in First-Out) data structure in which values can be 'pushed' onto it or 'popped' off of it. This Stack MAchine Implementation was ran and tested using the following command line:

	python3 prog4_3.py arg1

Where 'arg1' was the first command line argument after the Python commands. IT is the name of the file passed in from which to be read for StackMachine commands. This driver class, 'prog4_3.py', would then execute the input file commands, line by line.

The Stack Machine was executed only after Tokenizing and Parsing the input lines of the first command line argument. Once again, the Tokenizer and Parser class adhered to the set of rules 
outlined in Assignment #2, so refer to that instruction set for greater detail.

If the Tokenize() and Parse() functions are to be used in a python3 script or instance, as well as the StackMachine class, then all the aforementioned must be imported using the following import statements:

	from prog4_1 import *
	from prog4_2 import *

A new StackMachine can be instantiated using the following line of code:

	myMachine = StackMachine()
	
To Execute commands on an instance of a StackMachine, simply call the Execute(tokens) function, where tokens is a list of commands that has been properly tokenized and parsed using the respective functions from prog4_1.py.

Enjoy!
