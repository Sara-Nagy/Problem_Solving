#include <stdio.h>

#define ARRAY1_MAX_SIZE     100
#define ARRAY2_MAX_SIZE     100
#define SORTED_ARRAY_MAX_SIZE   200

void Merge_Sort(int *arr1,int arr1_size,int *arr2,int arr2_size,int *sorted_array);
int main()
{
    ///create arrays
    int arr1[ARRAY1_MAX_SIZE];
    int arr2[ARRAY2_MAX_SIZE];
    int sorted_arr[SORTED_ARRAY_MAX_SIZE];
    ///define counters
    int i;
    ///define array 1 and array 2 number of entered elements
    int arr1_size,arr2_size;
    ///scan the size and arrays from user
    //array1
    printf("please enter array1 size:");
    scanf("%i",&arr1_size);
    printf("please enter array1 elements:");
    for(i=0;i<arr1_size;i++)
    {
        scanf("%i",&arr1[i]);
    }
    //array2
    printf("please enter array2 size:");
    scanf("%i",&arr2_size);
    printf("please enter array2 elements:");
    for(i=0;i<arr2_size;i++)
    {
        scanf("%i",&arr2[i]);
    }
    ///call merge sort function
    Merge_Sort(arr1,arr1_size,arr2,arr2_size,sorted_arr);
    ///print the sorted array
    printf("the sorted array is:\n");
    for(i=0;i<(arr1_size+arr1_size);i++)
    {
        printf("%i\n",sorted_arr[i]);
    }
    return 0;
}
void Merge_Sort(int *arr1,int arr1_size,int *arr2,int arr2_size,int *sorted_array)

{
    int count1=0,count2=0,count3=0;
    while((count1<=arr1_size) &&(count2<=arr2_size))
    {
        if(arr1[count1]<arr2[count2])
        {
            sorted_array[count3++]=arr1[count1++];
        }
        else
        {
            sorted_array[count3++]=arr2[count2++];
        }
    }
    while(count1<=arr1_size)
    {
        sorted_array[count3++]=arr1[count1++];
    }
    while(count2<=arr2_size)
    {
       sorted_array[count3++]=arr2[count2++];
    }
}
