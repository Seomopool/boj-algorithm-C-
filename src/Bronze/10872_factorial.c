#include <stdio.h>

int Factorial(int N)
{
    if (N==0) return 1;

    return Factorial(N-1)*N;
}
int main()
{
    int N;
    scanf("%d",&N);

    int result = Factorial(N);

    printf("%d",result);
}