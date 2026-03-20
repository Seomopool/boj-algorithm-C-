#include <stdio.h>
#include <string.h>

int stack[10000] = {0}; //stack은 0으로 채워짐

int *ptr = stack;

void push(int n)
{
    *ptr = n;
    ptr++;
}

void pop()
{
    if (ptr==stack) printf("-1\n");
    else {
        ptr--;
        printf("%d\n",*ptr);
    }
}

void size()
{
    int size = ptr - stack;
    printf("%d\n",size); //포인터연산은 sizeof(int)로 나뉨.
}

void empty()
{
    if (ptr==stack) printf("1\n");
    else printf("0\n");
}

void top()
{
    if (ptr==stack) printf("-1\n");
    else printf("%d\n",*(ptr-1));
}

int main()
{
    int N;
    scanf("%d",&N);
    char instruction[10];
    int value;
    for (int i=0; i<N; i++)
    {
        scanf("%s",instruction);
        if (strcmp(instruction,"push")==0)
        {
            scanf("%d",&value);
            push(value);
        }
        else if (strcmp(instruction,"pop")==0)
        {
            pop();
        }
        else if (strcmp(instruction,"size")==0)
        {
            size();
        }
        else if (strcmp(instruction,"empty")==0)
        {
            empty();
        }
        else if (strcmp(instruction, "top")==0)
        {
            top();
        }
    }
}
