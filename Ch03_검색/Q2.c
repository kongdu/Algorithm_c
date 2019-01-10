// Q2 선형검색의 스캐닝 과정 상세하게 표시하는 프로그램 작성
#include <stdio.h>
#include <stdlib.h>
//하... *위치 바꾸는 법 모르겠다...
//이중포문으로 만들어보기....ㅠㅠ
int search(const int a[], int n, int key)
{

    int i;
    printf("   |");
    for (i = 0; i < n; i++) {
        printf("%3d",i);
    }
    printf("\n---+");
    for (i = 0; i < n; i++) {
        printf("---");
    }
    printf("\n");
    for (i = 0; i <= n; i++) {
        printf("   |");

            printf("*");
        puts("");
        printf("%3d|", i);
        for (int j = 0; j <= n; j++)
            printf("%3d", a[j]);

        if(a[i] == key)
        return i;
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
        printf("\n%d는 x[%d]에 있습니다\n", ky, idx);
    }
    free(x);
    return 0;
}
