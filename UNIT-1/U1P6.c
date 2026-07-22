/* Insert an element into the array at user defined position.
   Name: DIGVIJAYSINH SODHAPARMAR
   Enrollment No.: 92500527123
*/

#include<stdio.h>

void main()
{
    int a[20], i, pos, val, n;

    printf("\nEnter limit : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter value %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter position at which you want to insert value : ");
    scanf("%d", &pos);

    pos = pos - 1;

    printf("\nEnter new value to be inserted : ");
    scanf("%d", &val);

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = val;

    printf("\nArray after insertion:\n");

    for(i = 0; i < n + 1; i++)
    {
        printf("%d\n", a[i]);
    }
}