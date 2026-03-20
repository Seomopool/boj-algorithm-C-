#include <stdio.h>

int main()
{
    char str[1000000];

    fgets(str,sizeof(str),stdin);

    int counts = 0;
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            if (i!=0 && str[i+1]!='\n') counts++;
        }
    }

    printf("%d",counts+1);
}
