/* Write a program to find Minimum and Maximum numbers from the given array with recursion.
Name: DIGVIJAYSINH SODHAPARMAR
Enrollment no.:92500527123 */

#include<stdio.h>
void findMinMax(int arr[],int n,int index,int *min,int *max);
void main()
{
    int arr[100],n,i;
    int min,max;

    printf("Enter size of array :");
    scanf("%d",&n);

    printf("Enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=min=arr[0];

    findMinMax(arr,n,1,&min,&max);
    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
}

void findMinMax(int arr[],int n,int index,int *min,int *max)
{
    if(index==n)
    {
        return;
    }
    if(arr[index]<*min)
    {
        *min=arr[index];
    }
    if(arr[index]>*max)
    {
        *max=arr[index];
    }

    findMinMax(arr,n,index+1,min,max);
}