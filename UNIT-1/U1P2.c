/* Create an array of size 10,input values and display sum and average of all elements in the array.
Name: DIGVIJAYSINH SODHAPARMAR
Enrollment no.:92500527123 */

#include<stdio.h>
void main()
{
    int a[20],i,n,sum=0;
    float avg;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value:",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("\n Entered values are as follows \n");
     for(i=0;i<n;i++)
     {
         printf("\n %d",a[i]);
     }

     printf("\nSum is %d",sum);
     printf("\nAvg is %.2f",avg);
}