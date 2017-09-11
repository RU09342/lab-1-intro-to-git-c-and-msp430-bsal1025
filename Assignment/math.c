/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int math(int num1, int num2,char Operator);

int main()
{
    int num1;
    int num2;
    char Operator;
    
    printf("Type the First Number: ");
    scanf ("%d", &num1);
    
    printf("Choose an Operator (+,-,*,/,M):");
    scanf(" %c",&Operator);
    
    printf("Type the Second Number: ");
    scanf("%d", &num2);
    
    printf("The Answer Is: %d", math(num1,num2,Operator));

    return 0;
}

int math(int num1, int num2,char Operator)
{
    if(Operator == '+')
    return num1 + num2;
    
    else if(Operator == '-')
    return num1-num2;
    
    else if(Operator == '*')
    return num1 * num2;
    
    else if(Operator == '/')
    return num1 / num2;
    
    else if(Operator == 'M')
    return num1 % num2;
    
    else 
    printf("Error! Invalid Command!");
    
}









