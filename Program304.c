#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[30];
    char Char;
    char Arr[BUFFERSIZE] = {'\0'};

    int fd = 0, iRet = 0;
    int i = 0, iCount = 0;

    printf("Enter the name of the file that you want to open from the current directory\n");
    scanf("%s", FileName);

    printf("Enter the character to count occurrences: ");
    scanf(" %c", &Char);  

    fd = open(FileName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open %s file\n", FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n", FileName, fd);

        while ((iRet = read(fd, Arr, sizeof(Arr))) != 0)
        {
            for (i = 0; i < iRet; i++)
            {
                if (Arr[i] == Char)
                {
                    iCount++;
                }
            }
        }

        printf("Number of occurrences of '%c' in the file are: %d\n", Char, iCount);

        close(fd);
    }

    return 0;
}
