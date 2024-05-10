#include <stdio.h>
#define ARRAY_MAX_SIZE 1000

int main()
{
    int n,i,j,flag,temp;
    ///create the array
    int arr[ARRAY_MAX_SIZE];
    ///scan the size of the array
    printf("please enter the size of the array:");
    scanf("%i",&n);
    ///scan array elements
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    ///sort the array until first largest and second largest element
    for(i=n-1;i>n-3;i--) //just 2 iteration
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==1)
        {
            break;
        }

    }
    printf("the first largest:%i\n",arr[n-1]);
    printf("the second largest:%i",arr[n-2]);
    return 0;
}
