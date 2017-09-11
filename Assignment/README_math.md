Code Written By: Brandon Salamone
Date Submitted: 09/11/2017
Last Updated: 09/11/2017 
Library Dependencies: stdio.h

How the Code Works:
This program is designed to run in a manner similar to the way basic mathematical operations are done on a simple calculator.
A user types the first number, then the operator they wish to use, then the second number. Unlike a real calculator, however, 
the program does not utilize an 'equals' button. Rather, the operation is done immediately after the second number is entered.

Explanation of Major Functions:
The program contains only one major function called 'math'. It takes in three inputs: 2 integer numbers and a character 
representing the mathematical operator. The program is designed to only accept five characters as inputs for the operator:
+, -, *, /, and M for modulus. If any other character is entered either by mistake or intentionally, the program 
will output an error message. The program is also designed such that num1 and num2 must be integer values. Entering a character
such as those used in Operator would yield an answer of 0, and inserting decimal values causes the program to no longer work properly. 
