#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    
    int arr[100]; ///최대 100개

    for (int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    int v;
    scanf("%d",&v);
    int count = 0;

    for (int j=0; j<N; j++)
    {
        if (arr[j]==v) count++;
    }

    printf("%d",count);
}

/// v의 개수 찾기