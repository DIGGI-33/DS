/* Create an array of size 10 find the largest value from the array.
   Name: DIGVIJAYSINH SODHAPARMAR
   Enrollment No.: 92500527123
*/

#include<stdio.h>

void main()
{
    int a[10], i, Largest;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter the value %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    Largest = a[0];

    for(i = 0; i < 10; i++)
    {
        if(a[i] > Largest)
        {
            Largest = a[i];
        }
    }

    printf("\nLargest Element is : %d", Largest);
}