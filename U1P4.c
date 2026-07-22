/* Create arrays A, B and C of size 6, merge A and B into C.
   Name: DIGVIJAYSINH SODHAPARMAR
   Enrollment No.: 92500527123
*/

#include<stdio.h>

void main()
{
    int a[3], b[3], c[6], i, j = 0;

    // Input elements of A
    for(i = 0; i < 3; i++)
    {
        printf("Enter value %d of A: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Input elements of B
    for(i = 0; i < 3; i++)
    {
        printf("Enter value %d of B: ", i + 1);
        scanf("%d", &b[i]);
    }

    // Copy A into C
    for(i = 0; i < 3; i++)
    {
        c[j] = a[i];
        j++;
    }

    // Copy B into C
    for(i = 0; i < 3; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("\nElements of Array C:\n");

    // Display C
    for(i = 0; i < 6; i++)
    {
        printf("Position %d = %d\n", i + 1, c[i]);
    }
}