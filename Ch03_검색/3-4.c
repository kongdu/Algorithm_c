// 이진검색 (binary search) 요소가 오름차순이나 내림차순으로 정렬된 배열에서 검색하는 알고리즘
#include <stdio.h>
#include <stdlib.h>

//요소개수 n인 배열 a에서 key와 일치하는 요소 이진검색
//pl               pc               pr
// 0  1  2  3  4  [5]   6  7  8  9  10
// 5  7  15 28 29 [31] 39 58  68 70 95
// 39 찾아라!!
int bin_search(int a[], int n, int key)
{
    int pl = 0; //검색 범위 맨 앞의 인덱스
    int pr = n-1; //검색 범위 맨 끝의 인덱스
    int pc; //검색 범위 한가운데의 인덱스
    do{
        pc = (pl+pr)/2;
        if(a[pc] == key){ //중간에 바로 검색성공
            return pc;
        }else if(a[pc] < key){
            pl = pc+1;
        }else{
            pr = pc-1;
        }
    }while (pl <= pr); //검색실패
        return -1;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;                     //배열의 첫번째 요소에 대한 포인터
    puts("**이진검색**");
    printf("요소개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int)); //요소의 개수가 nx+1인 int형 배열생성
    printf("오름차순으로 입력하세요\n");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for (i = 1; i < nx; i++) {
        do {
            printf("x[%d]: ", i);
            scanf("%d", &x[i]);
        } while(x[i] < x[i - 1]);     //바로앞의 값보다 작으면 다시 입력
    }
    printf("검색값 : " );
    scanf("%d", &ky );
    idx = bin_search(x, nx, ky);   //배열 x에서 값이 ky인 요소를 이진검색
    if (idx == -1) {
        puts("검색에 실패했습니다");
    }else{
        printf("%d는 x[%d]에 있습니다\n", ky, idx);
    }

    free(x);    //배열해제
    scanf("%d", &nx);
    return 0;
}
