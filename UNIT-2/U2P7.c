/* Write a program to find the smallest common divisor of a given number.
Name: DIGVIJAYSINH SODHAPARMAR
Enrollment no.:92500527123 */

#include <stdio.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(int value);
int pop();

void main()
{
    int num,i,div;

    printf("Enter number:");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            push(i);
        }
    }

    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            div=pop();
        }
    }
    printf("The smallest common divisor is : %d",div);
}

void push(int value)
 {
    if (top == MAX - 1)
        {
        printf("\nStack overflow.\n");
    } else
     {
        top++;
        stack[top] = value;
    }
}

int pop()
 {
    if (top == -1)
        {
        printf("\nStack underflow.\n");
        return -1;
    }
    else
        {
        int v = stack[top];
        top--;
        return v;
    }
}