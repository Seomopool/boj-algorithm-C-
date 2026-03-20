#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    for (int j=0; j<N; j++)
    {
        int continuity = 0;
        int result = 0;
        char str[100];
        scanf("%s",str);
        for (int i=0; str[i]!='\0'; i++)
        {
            if (str[i]=='O')
            {
                continuity++;
            }
            if (str[i]=='X' || str[i+1]=='\0')
            {
                result += continuity*(continuity+1)/2;
                continuity = 0;
            }
        }
        printf("%d\n",result);
    }
}
