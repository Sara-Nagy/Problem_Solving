#include <stdio.h>

#define ARRAY_MAX_SIZE  1000
int main()
{
    ///counter to loop on array elements
    int i=0;
    ///the element to be sorted
    int num;
    ///position to put in
    int pos;
    ///create the array
    int arr[ARRAY_MAX_SIZE];
    ///define the number of elementd that wanted to put in array
    int n;
    ///scan array size
    printf("Please enter the size of the array:");
    scanf("%i",&n);
    ///scan array elements
    for(i=0; i<n; i++)
    {
        scanf("%i",(arr+i));
    }
    ///scan element to be sorted
    printf("please enter the inserted element:");
    scanf("%i",&num);

    ///scan position
    printf("please enter the position:");
    scanf("%i",&pos);
    ///check if the array is full
    if(n==ARRAY_MAX_SIZE)
    {
        printf("the array is full we can`t add new element");
    }
    else
    {
        ///check if the position is correct
        if((pos>=1)&&(pos<=n+1))
        {
            for(i=n; i>(pos-1); i--)
            {
                arr[i]=arr[i-1];
            }
            arr[pos-1]=num;
            ///print the array after insertion
            for(i=0; i<=n; i++)
            {
                printf("%i\n",*(arr+i));
            }

        }
        else
        {
            printf("Incorrect position");
        }
    }


    return 0;
}
