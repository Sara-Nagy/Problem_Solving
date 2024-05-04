#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct triangle
{
    int a;
    int b;
    int c;
} Triangle;
void Sort_Triangle(Triangle * tr,int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    Triangle * Tr=(Triangle *)malloc(n *sizeof(Triangle));
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&Tr[i].a,&Tr[i].b,&Tr[i].c);
    }
    Sort_Triangle(Tr,n);
    for(i=0; i<n; i++)
    {
        printf("%d %d %d\n",Tr[i].a,Tr[i].b,Tr[i].c);
    }
    free(Tr);
    return 0;
}
void Sort_Triangle(Triangle * tr,int n)
{
    int i,j,flag;
    float temp,p;
    Triangle temp_arr;
    float * areas_arr=( float *)malloc(n*sizeof( float));

    for(i=0; i<n; i++)
    {
        p=(tr[i].a +tr[i].b +tr[i].c)/2;
        areas_arr[i]=sqrt((p)*(p-(tr[i].a))*(p-(tr[i].b))*(p-(tr[i].c) ));

    }

    for(i=n-1; i>0; i--)
    {
        flag=0;
        for(j=0; j<i; j++)
        {
            if(areas_arr[j]>areas_arr[j+1])
            {
                flag=1;
                ///sorting array of areas
                temp=areas_arr[j];
                areas_arr[j]=areas_arr[j+1];
                areas_arr[j+1]=temp;
                ///sorting array of sides depend on array of areas
                temp_arr=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=temp_arr;

            }
        }
        if(flag==0)
        {
            break;
        }
    }
    free(areas_arr);
}
