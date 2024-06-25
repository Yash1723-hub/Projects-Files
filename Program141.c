// Update Capital string to Small String

#include<stdio.h>

int strlwrX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    strlwrX(Arr);
    
    printf("Update string is : %s\n");
    
    return 0;
}