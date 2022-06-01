# Welcome to My Printf
***

## Task
The challege is to code a printf function, without using the built-in function printf

## Description
The key of the solution is the use of the syscall function write. With this syscall function you can use a string and print it on the console


## Installation
gcc -o my_printf my_printf.c
and then,
./my_printf "This is a %d" 1

Note: it works only with one integer

## Usage
I'm receiving 2 parameters, as in printf;

PARAM_1

	The first parameter is type char*, normally, "The next number is:"
	One can use this only parameter and print it on the console, however, if
	I want to add another value from a variable, then something else is required.

PARAM_2, ... , PARAM_N

	Printf with 2 or + parameters.
	One should specifie where to put that value and which type of variable it is.
		For example:

		printf("This is a number : %d", 5)

	On the previous example, one specifies the position of the value with the identifier % and one
	determines the type of the variable with a letter, in this case a d;

	The output would be:

		"This is a number : 5"

EXTRAS

	- One can use other types of variables representing with other letters:

		d, u, c, s, x, p

	- The % specifies the position of the value on the string.

		For example,

		printf("This is a number : %d", 5)  -->  This is a number : 5
		printf("%d is a number, 5") -->  5 is a number


On my_printf

I receive parameters as well,

	./my_printf "This is a : %d  "  5

I'm calling function the program my_printf and I'm receiving 2 parameters "This is a : %d  " and 5

PARAM_1
	
	I'm receiving a string "This is a : %d  " with an specifier %d as in the original printf()

PARAM_2
	
	I'm receiving an integer 5

OUTPUT

	This is a : 5

It is doing the same as in the original printf.
I can do the same with other types of variables

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar Silicon Valley</a></i></span>
<span><img alt='Qwasar Silicon Valley Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
