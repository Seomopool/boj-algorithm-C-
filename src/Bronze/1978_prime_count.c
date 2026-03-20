#include <stdio.h>

int IsPrime(int a)
{
    if (a==1) return 0;
    for (int i=2; i<a; i++)
    {
        if (a%i==0) return 0;
    }
    return 1;
}

int main()
{
    int N;
    scanf("%d",&N);

    int arr[100];
    for (int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count =0;
    for (int i=0; i<N; i++)
    {
        if (IsPrime(arr[i])) count++;
    }

    printf("%d",count);
}   