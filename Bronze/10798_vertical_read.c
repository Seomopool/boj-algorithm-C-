#include <stdio.h>

int main(void)
{
    char a[5][16] = {0}; //최대 15글자 + '\0'

    for (int i=0; i<5; i++)
    {
        scanf("%15s",&a[i]);
    }


    for (int j=0; j<16; j++)
    {
        for (int i=0; i<5; i++)
        {
            if (a[i][j]!='\0') printf("%c",a[i][j]);
        }
    }
}