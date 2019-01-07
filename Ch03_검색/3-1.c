// 선형검색
#include <stdio.h>
#include <stdlib.h>
//요소 수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search(const int a[], int n, int key)
{
    int i = 0;

    for (i = 0; i < n; i++) {
        if(a[i] == key) {
            return i;
        }
    }
        return -1;

}

int main(void)
{
    int i, nx, ky, idx;
    int *x; //배열의 첫번째 요소에 대한 포인터
    puts("선형검색");
    printf("요소개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int)); //요소의 개수가 nx인 int형 배열을 생성
    for (i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("검색값 : " );
    scanf("%d", &ky );
    idx = search(x, nx, ky);
    if (idx == -1) {
        puts("검색에 실패했습니다");
    }else{
        printf("%d는 x[%d]에 있습니다\n", ky, idx);
    }
    free(x);
    return 0;
}
