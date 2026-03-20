#include <stdio.h>

int main()
{
    int a;
    scanf("%d\n",&a);

    int max = a;
    int count = 1;

    for (int i=1; i<9; i++)
    {
        scanf("%d",&a);
        if (a>max) 
        {
            max = a;
            count = i+1;
        }
    }
    
    printf("%d\n%d",max,count);
}

/// 주어진 9개의 수 중 최댓값의 값과 인덱스 찾기