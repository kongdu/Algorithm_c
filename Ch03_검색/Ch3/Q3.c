// Q3
#include <stdio.h>
#include <stdlib.h>

//요소개수 n인 배열 a에서 key와 일치하는 요소 선형검색
int search_idx(int a[], int n, int key, int idx[])
{
    int i,count = 0;
    for (i = 0; i < n; i++) {
        if (a[i]==key) {
            idx[count] = i;
            count++;
        }
    }
    return count;
}

int main(void)
{
    int i, nx, ky;
    int num;
    int *x; //배열의 첫번째 요소에 대한 포인터
    int *idx;
    puts("Q3.선형검색_idx");
    printf("요소개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int)); //요소개수nx  int형배열생성
    idx = calloc(nx, sizeof(int));
    for (i = 0; i < nx; i++) { //### 주의 값을 읽어들인것은 nx개
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("검색값 : " );
    scanf("%d", &ky );
    num = search_idx(x, nx, ky, idx);
    if (num == 0) {
        puts("일치하는 요소 개수는 0개");
    }else{
        printf("요소의 개수는 %d개\n", num);
    }
    free(x);
    free(idx);
    return 0;
}
