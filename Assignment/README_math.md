Code Written By: Brandon Salamone
Date Submitted: 10/04/2017
Last Updated: 10/04/2017 


stdio Library for Math Function:
This library can be used on all processors and is added to this code to provide all of the functionality of the C programming language.
This includes operators, loops, and basic C syntax. Without this library the compiler is unable to compile any of the code in math.c

Dependencies:
This library does not depend on other libraries and can be used by itself to run math.c

Usage:
After including the math.h and math.c files in the same working directory as your project, 
you need to simple call the following function to perform the required operation:
Math(int1, int2, operator);

Valid Inputs
int1, int2
16-bit signed integers

operator
char which is valid for the following values [’+’, ‘-‘, ‘*’, ‘/’, ‘%’]. Math() will return Null if this input it invalid.

Functions
Add (Operator = ‘+’)
int1 will be added to int2 and function will return the sum as a signed integer.

Example (5 + 6)
Math( 5, 6, '+');
Subtract (char = ‘-‘)
int 2 will be subtracted from int 1 and function will return the difference as a signed integer.

Example (20 - 5)
Math( 20, 5, '-');
Multiply (char = ‘*’)
int 1 will be multiplied by int2 and function will return the difference as a signed integer.

Example (10 * 20)
Math( 10, 20, '*');
Divide (char = ‘/’)
int1 will be integer divided by int2. This will only return the quotient as an integer.

Example (10 / 2)
Math( 10, 2, '/');
Known Errors
Currently there is no method of returning whether or not the returned value is signed. This means that operations such as “3-5” could be interpreted as +2 or -2.





