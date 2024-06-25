// Using ASCII Table check whether character is Captial Or Not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    // 65 and 90 ia a value in ASCII Table that indicate CAPITAL Letter A to Z
    if(cValue>= 65 && cValue <= 90)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);
    if(bRet == true)
    {
        printf("Its a capital letter\n");
    }
    else
    {
        printf("Its not a capital letter\n");
    }

    return 0;
}