#include <stdio.h>

int Digit_sum(int M){
    int result = M;
    for (int i=0; M!=0; i++){
        result += M%10;
        M /= 10;
    }
    return result;
}

int main(){
    int N;
    int Constructor = 0;
    scanf("%d",&N);
    for (int i=1; i<N; i++){
        if (Digit_sum(i)==N){
            Constructor = i;
            break;
        }
    }

    printf("%d", Constructor);

    return 0;
}