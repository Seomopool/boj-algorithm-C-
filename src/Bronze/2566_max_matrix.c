#include <stdio.h>

int main()
{
    int arr[9][9];

    scanf("%d",&arr[0][0]);

    int max=arr[0][0];
    int row = 1, column = 1;

    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (i==0 && j==0) continue; ///1행1열 원소는 이미 했음

            scanf("%d",&arr[i][j]);
            if (arr[i][j]>max)
            {
                max = arr[i][j];
                row = i+1;
                column = j+1;
            }
        }
    }

    printf("%d\n%d %d",max,row,column);

    return 0;
}


/// 9*9 행렬의 최댓값 찾기