#include <stdio.h>

int main()
{
    int N;
    int Size[6]={0}; //S,M,L,XL,XXL,XXXL
    int T,P;

    scanf("%d",&N);

    for (int i=0; i<6; i++)
    {
        scanf("%d",&Size[i]);
    }

    scanf("%d %d",&T,&P);

    //티셔츠 계산 & 출력
    int T_shirt = 0;

    for (int i=0; i<6; i++)
    {
        T_shirt += (Size[i]+T-1)/T;
    }

    printf("%d\n",T_shirt);

    // 펜 계산 & 출력
    int bundle = N/P, one = N%P; //펜의 묶음 수와 개별 자루 수

    printf("%d %d", bundle, one);

    return 0;
}