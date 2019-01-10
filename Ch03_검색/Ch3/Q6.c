/*besearch함수를 사용해 오름차순으로 정렬된 배열을 검색*/
#include <stdio.h>
#include <stdlib.h>
//정렬된 배열 x의 요소에서 입력한 값 ky 요소 찾기
//정수를 비교하는 함수(오름차순)

//long형 비교 내림차순
long long_cmp(const long *a, const long *b){
    if (*a < *b) {
        return 1;
    }else if(*a > *b){
        return -1;
    }else
        return 0;
}


int main()
{
	int i, nx;
    long ky;
	long *x;				//배열의 첫번째 요소에 대한 포인터
	long *p;				//검색한 요소에 대한 포인터
	puts("besearch 함수를 사용하여 검색");
	printf("요소개수: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));			//요소의 개수가 nx개인 int형 배열 생성

	printf("내림차순으로 입력하세요\n");
	printf("x[0] : ");
	scanf("%ld", &x[0]);
	for (i = 1; i < nx; i++)
	{
		do
		{
			printf("x[%d] : ", i);
			scanf("%ld", &x[i]);
		} while (x[i] > x[i - 1]);  //바로 앞의 값보다 크면 다시 입력
	}

	printf("검색값 : ");
	scanf("%d", &ky);
	//bsearch : 정렬된 배열에서 검색하는 함수 >> C언어 표준라이브러리에서 제공 >>이런걸 유틸리티 함수라 부른다
	//
	p = bsearch(&ky,			//검색값에 대한 포인터
		x,						//배열
		nx,						//요소의 개수
		sizeof(long),			//요소의 크기
		(long(*)(const void*, const void*)) long_cmp		//비교함수

	);
	if (p == NULL)
	{
		puts("검색에 실패했습니다");
	}
	else
		printf("%d은(는) x[%d]에 있습니다\n", ky, (int)(p - x));
	free(x);		//배열 해제

	return 0;
}
