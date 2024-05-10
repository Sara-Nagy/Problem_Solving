#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=0;
    ///scan the size of the array
    printf("please enter the size of the array:");
    scanf("%i",&n);
    ///create the array
    int *arr=(int*)malloc(n*sizeof(int));
    ///scan array elements
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);//(arr+i)
    }
    ///select negative elements and print them
    printf("All negative elements are:");
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)//*(arr+i)
        {
            printf("%i ",arr[i]);
        }
    }

   return 0;
}
