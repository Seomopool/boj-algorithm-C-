#include <stdio.h>


int Fibonacci(int n)
{
    if (n==0) return 0;
    else if (n==1) return 1;
    return Fibonacci(n-2) + Fibonacci(n-1);
}   
int main()
{
    int n;
    scanf("%d",&n);
    int result = Fibonacci(n);
    printf("%d",result);
}