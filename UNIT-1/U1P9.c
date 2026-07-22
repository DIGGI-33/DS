/* Sort the array into descending order.
   Name: DIGVIJAYSINH SODHAPARMAR
   Enrollment No.: 92500527123
*/

#include<stdio.h>

void main()
{
    int a[20], i, n, j, temp;

    printf("\nEnter limit : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter value %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted Elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}