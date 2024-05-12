#include <stdio.h>

#define ARRAY_MAX_SIZE  100

void Rotate_Right(int *arr,int arr_size,int num_of_rotate);
int main()
{
    ///define counter that loop on array elements
    int i=0;
    ///define the number of rotation
    int num_rotation;
    ///create the array
    int arr[ARRAY_MAX_SIZE];
    ///define number of elements
    int arr_size;
    ///scan number of elements from user
    printf("please enter number of elements of array:");
    scanf("%i",&arr_size);
    ///scan the array
    for(i=0;i<arr_size;i++)
    {
        scanf("%i",&arr[i]);
    }
    ///scan the number of rotation
    printf("please enter the number of rotation:");
    scanf("%i",&num_rotation);
    ///call the function
    Rotate_Right(arr,arr_size,num_rotation);
    ///print array after rotation
    for(i=0;i<arr_size;i++)
    {
        printf("%i ",arr[i]);
    }
    return 0;
}
void Rotate_Right_one(int *arr,int arr_size)
{
    int i=0,last=arr[arr_size-1];

    for(i=arr_size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
void Rotate_Right(int *arr,int arr_size,int num_of_rotate)
{
   int i;
   for(i=1;i<=num_of_rotate;i++)
   {
       Rotate_Right_one(arr,arr_size);
   }
}
