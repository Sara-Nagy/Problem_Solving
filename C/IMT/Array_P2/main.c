#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    long long int sum=1;
    ///scan the size of the array
    printf("please enter the size of the array:");
    scanf("%i",&n);
    ///create the array
    int *arr=(int*)malloc(n*sizeof(int));
    ///scan array elements
    for(i=0; i<n; i++)
    {
        scanf("%i",&arr[i]);//(arr+i)
        ///sum array elements
        sum+=arr[i];
    }
    ///print the sum of the array
    printf("sum of all elements in the array is :%lld",sum);
    return 0;
}
