// replace 'a' to'_' from string (Editing String)

#include<stdio.h>

int Replace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = '_';
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    
    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    Replace(Arr);
    
    printf("Upeted string is : %s\n");
    
    return 0;
}