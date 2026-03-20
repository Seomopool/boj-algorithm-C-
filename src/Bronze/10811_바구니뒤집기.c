#include <stdio.h>

void swap(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);

    int basket[100];
    for (int i=0; i<N; i++)
    {
        basket[i] = i+1;
    }

    for (int i=0; i<M; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        while(a<b)
        {
            swap(basket, a-1, b-1);
            a++;
            b--;
        }
    }
    
    for (int i=0; i<N; i++)
    {
        printf("%d ",basket[i]);
    }

    return 0;
}
