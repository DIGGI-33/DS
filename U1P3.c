/* Create arrays A,B and C of size 3, perform C=A+B.
Name: DIGVIJAYSINH SODHAPARMAR
Enrollment no.:92500527123 */

#include<stdio.h>

void main()
{
     int a[3],b[3],c[3],i;

     for(i=0;i<3;i++)
     {
         printf("\n Enter value for a %d :",i+1);
         scanf("%d",&a[i]);
     }

     for(i=0;i<3;i++)
     {
         printf("\n Enter value for b %d :",i+1);
         scanf("%d",&b[i]);
     }

     for(i=0;i<3;i++)
     {
         c[i] = a[i] + b[i];
     }

     printf("Array c (a+b) is : \n");

     for(i=0;i<3;i++)
     {
         printf("\n c[%d] = %d",i, c[i]);
     }
}