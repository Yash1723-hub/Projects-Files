// Update small to Capital and Capital to small String

#include<stdio.h>

int strtoggleX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else
        {
            *str = *str + 32;
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

    strtoggleX(Arr);
    
    printf("Update string is : %s\n");
    
    return 0;
}