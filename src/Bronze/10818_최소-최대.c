#include <stdio.h>

int main()
{

    int N;
    scanf("%d",&N);

    int v;
    scanf("%d",&v); //하나만 for문 바깥으로

    int max = v;
    int min = v;

    for (int i=0; i<N; i++)
    {
        scanf("%d",&v);
        if (v>max)
        {
            max = v;
        }
        if (v<min)
        {
            min = v;
        }
    }

    printf("%d %d", min, max);
}

// 최댓값, 최솟값 찾기
