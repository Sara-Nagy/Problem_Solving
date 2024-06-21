#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* arr_result=(char *)malloc(candiesSize*sizeof(bool));
    bool res=true;
    int i,j,extra_num;
    for(i=0;i<candiesSize;i++)
    {
        extra_num=candies[i]+extraCandies;
        for(j=0;j<candiesSize;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                if(extra_num<candies[j])
                {
                    res=false;
                    break;
                }
            }
        }
        arr_result[i]=res;
        res=true;
    }
    return arr_result;



}

int main()
{
    int candies[5] ={4,2,1,1,2}, extraCandies = 1,i;
    bool*arr=kidsWithCandies(candies,5,extraCandies,NULL);
    for(i=0;i<5;i++)
    {
        printf("%i ",arr[i]);
    }
    return 0;
}
