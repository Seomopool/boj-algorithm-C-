#include <stdio.h>

int main()
{
    int N;
    int x, y;

    int canvas[100][100] = {0};

    scanf("%d",&N);

    for (int i=0; i<N; i++)
    {
        scanf("%d %d",&x, &y);

        for (int j=0; j<10; j++)
        {
            for (int k=0; k<10; k++)
            {
                canvas[x+j][y+k] = 1;
            }
        }
    }

    int area = 0;

    for (int i=0; i<100; i++)
    {
        for (int j=0; j<100; j++)
        {
            if (canvas[i][j]==1) area++;
        }
    }

    printf("%d",area);
}
