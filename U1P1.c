/* Create an array of size 10,input values and print the array,and search an element in the array.
Name: DIGVIJAYSINH SODHAPARMAR
Enrollment no.:92500527123 */

#include<stdio.h>

void main()
{
    int a[10],i,n,search,flag=0;

    printf("Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value %d :",i+1);
        scanf("%d",&a[i]);
    }



         printf("Value to be searched:");
         scanf("%d",&search);



      for(i=0;i<n;i++)
      {
          if(a[i]==search)
          {
               flag = 1;
              printf("\n Value %d is found on : %d",search,i+1);
              break;
          }

      }

      if (flag==0)
      {
          printf("\n Value not found");
      }
}