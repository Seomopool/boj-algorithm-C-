#include <stdio.h>
#include <string.h>

char words[20000][51];
char temp[20000][51];

int ShouldBeChanged(int n1, int n2)
{
    if (strlen(words[n1])<strlen(words[n2])) return 0;
    else if (strlen(words[n1])>strlen(words[n2])) return 1;
    else if (strlen(words[n1])==strlen(words[n2])) //길이 같을경우 ASCII(알파벳) 비교
    {
        for (int i=0; i<strlen(words[n1]); i++)
        {
            if (words[n1][i] > words[n2][i]) return 1;
            if (words[n1][i] < words[n2][i]) return 0; 
        }
        return 0;
    }
}

void Merge(int start, int end) 
{
    int mid = (start+end)/2;

    int i = start, j = mid+1; //이미 각각 정렬된 두 배열의 시작 인덱스 i,j
    int count = 0; 

    while(i<=mid && j<=end) {
        if (ShouldBeChanged(i,j)) // i번째보다 j번째 문자열이 앞에 와야한다면(1)
        {
            strcpy(temp[count], words[j]); //temp[count]에 집어넣기
            j++;
        }
        else // j번째보다 i번째 문자열이 앞에 와야한다면(0)
        {
            strcpy(temp[count], words[i]); 
            i++;
        }
        count++;
    } 

    //남은 원소들 처리
    while (i <= mid) {   // i 나머지
        strcpy(temp[count++], words[i++]);
    }
    while (j <= end) {   // j 나머지
        strcpy(temp[count++], words[j++]);
    }    

    //temp에 있는 것들을 다시 words[start]~words[end]로 옮김
    for (int n=0; n<count; n++)
    {
        strcpy(words[start+n], temp[n]);
    }
}

void merge_sort(int start, int end){
    if (end-start<=0) return; //원소 1개면 함수 종료
    else if (end-start==1){ //원소 2개면 ShouldbeChanged일때 바꿈
        if (ShouldBeChanged(start, end)){
        char temp[51];
        strcpy(temp, words[start]);
        strcpy(words[start],words[end]);
        strcpy(words[end],temp);
        }
    }

    else{ //원소 3개이상이면
    int mid = (start+end)/2; //mid선언
    merge_sort(start,mid); //첫번째 배열 정렬
    merge_sort(mid+1,end); //두번째 배열 정렬
    
    Merge(start,end);
    }
}



int main(){
    int N;
    scanf("%d",&N);
    
    for (int i=0; i<N; i++){
        scanf("%s",&words[i]);
    }

    merge_sort(0,N-1);

    // for (int i=0; i<N; i++){
    //     printf("%d번째 원소: %s\n",i,words[i]);
    // }
    char Printed[51];
    for (int i=0; i<N; i++){
        if (strcmp(Printed,words[i])) printf("%s\n",words[i]);

        strcpy(Printed, words[i]);

    }
}
