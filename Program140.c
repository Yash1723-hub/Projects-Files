// replace small And Capital 'Vowels' to'_' from string (Editing String)

#include<stdio.h>

int ReplaceVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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

    ReplaceVowels(Arr);
    
    printf("Upeted string is : %s\n");
    
    return 0;
}