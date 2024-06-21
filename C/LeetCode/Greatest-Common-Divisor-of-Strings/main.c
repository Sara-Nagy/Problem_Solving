#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gcdOfStrings(char* str1, char* str2)
{
    int i=0,j,com_result=1,a,b,temp;
    char *str_12=(char *)malloc(strlen(str1)+strlen(str2)+1*sizeof(char));
    char *str_21=(char *)malloc(strlen(str1)+strlen(str2)+1*sizeof(char));

    for(j=0;j<strlen(str1);j++)
    {
        str_12[i++]=str1[j];
    }
    for(j=0;j<strlen(str2);j++)
    {
        str_12[i++]=str2[j];
    }
    str_12[i]='\0';
    i=0;
    for(j=0;j<strlen(str2);j++)
    {
        str_21[i++]=str2[j];
    }
    for(j=0;j<strlen(str1);j++)
    {
        str_21[i++]=str1[j];
    }
    str_21[i]='\0';
    i=0;

    while(str_12[i]!='\0')
    {
        if(str_12[i]!=str_21[i])
        {
          com_result=0;
        }
        i++;
    }
    if(com_result==0)
    {
        return "";
    }
    else
    {
        if(strlen(str1)>=strlen(str2))
        {
           a=strlen(str1) ;
           b=strlen(str2);
        }
        else
        {
           a=strlen(str2) ;
           b=strlen(str1) ;
        }

        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        char *res=(char*)malloc((a+1)*sizeof(char));
        for(j=0;j<a;j++)
        {
            res[j]=str1[j];//res[j]=str2[j]
        }
        res[j]='\0';

        return res;
    }


}

int main()
{
    printf("%s",gcdOfStrings("ABABABAB","ABAB"));
    return 0;
}
