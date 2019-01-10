// 선형검색 (보초법)
#include <stdio.h>
#include <stdlib.h>
//요소개수 n인 배열 a에서 key와 일치하는 요소 선형검색
int search(int a[], int n, int key)
{
    int i = 0;
    //a[n] = key; //보초를 추가
    while (1) {
        if (a[i] == key) break;
        i++;
        if(i==n)
        return -1;
    }
    return i;// == n ? -1 : i;
}
//Q1 while문을 for문으로 바꾸기
int Mysearch(int a[], int n, int key)
{
    int i = 0;
    //a[n] = key; //보초를 추가
    for (i = 0; i < n; i++) {
        if (a[i]==key) {
            return i;
        }
    }
    return i;//i == n ? -1 : i;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x; //배열의 첫번째 요소에 대한 포인터
    puts("선형검색(보초법)");
    printf("요소개수 : ");
    scanf("%d", &nx);
    x = calloc(nx+1, sizeof(int)); //요소의 개수가 nx+1인 int형 배열생성
    for (i = 0; i < nx; i++) { //### 주의 값을 읽어들인것은 nx개
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("검색값 : " );
    scanf("%d", &ky );
    idx = Mysearch(x, nx, ky);
    if (idx == -1) {
        puts("검색에 실패했습니다");
    }else{
        printf("%d는 x[%d]에 있습니다\n", ky, idx);
    }
    free(x);
    return 0;
}
