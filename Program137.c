// Check Vowels of small and capital letter

#include<stdio.h>

int CheckVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CheckVowels(Arr);
    
    printf("Frequency of a Vowels is : %d\n",iRet);
    
    return 0;
}