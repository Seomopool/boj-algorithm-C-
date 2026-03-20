#include <stdio.h>
#include <string.h>

int main_0()
{
    int a[10];
    char result[20];
    scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);

    for (int i=0;i<7;i++)
    {
        if (a[i]<a[i+1])
        {
            if (result == "descending") //주소비교(잘못됨)
            {
                strcpy(result, "mixed");
                break;
            }
            strcpy(result, "ascending");
        }
        else
        {
            if (result == "ascending")
            {
                strcpy(result, "mixed");
                break;
            }
            strcpy(result, "descending");
        }
    }

    printf("%s",result);

    return 0;
}


int main()
{
    int prev;

    int ascending = 0;
    int descending = 0;

    scanf("%d",&prev);
    
    for (int i=0; i<7; i++)
    {
        int temp;
        scanf("%d",&temp);

        if (temp > prev) ascending = 1;

        if (temp < prev) descending = 1;

        prev = temp;

        if (ascending && descending) break;
    }

    if (ascending && descending) printf("mixed");
    else if (ascending) printf("ascending");
    else if (descending) printf("descending");
}