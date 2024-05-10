#include <stdio.h>

#define ARRAY_MAX_SIZE  1000
int main()
{
    ///counter to loop on array elements
    int i=0;
    ///position to delete element from it
    int pos;
    ///create the array
    int arr[ARRAY_MAX_SIZE];
    ///define the number of elements that wanted to put in array
    int n;
    ///scan array size
    printf("Please enter the size of the array:");
    scanf("%i",&n);
    ///scan array elements
    for(i=0; i<n; i++)
    {
        scanf("%i",(arr+i));
    }
    ///scan position
    printf("please enter the position:");
    scanf("%i",&pos);
    ///check if the position is correct
    if((pos>=1)&&(pos<=n))
    {
        for(i=(pos-1);i<n-1; i++)
        {
            arr[i]=arr[i+1];
        }

        ///print the array after deletion
        for(i=0; i<n-1; i++)
        {
            printf("%i\n",*(arr+i));
        }

    }
    else
    {
        printf("Incorrect position");
    }



return 0;
}
