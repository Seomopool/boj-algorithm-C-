#include <stdio.h>

int main()
{
    int a,b,c; ///입력받기 과정
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int result = a*b*c;
    
    int counts[10] = {0,0,0,0,0,0,0,0,0,0}; ///숫자개수 카운트 위한 10자리 배열

    while(result)
    {
        int temp = result % 10; ///마지막자리 추출
        counts[temp]++;
        result = result / 10; ///마지막자리 없애고 새로운 result
    }

    for (int i=0; i<10; i++) ///출력for문
    {
        printf("%d\n",counts[i]);
    }


    return 0;
}


/// 숫자 개수 세기