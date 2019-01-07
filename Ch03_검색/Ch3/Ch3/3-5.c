#include <stdio.h>
#include <stdlib.h>

/*besearch함수를 사용해 오름차순으로 정렬된 배열을 검색*/
//정렬된 배열 x의 요소에서 입력한 값 ky 요소 찾기
//정수를 비교하는 함수(오름차순)
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main()
{
	int i, nx, ky;
	int *x;				//배열의 첫번째 요소에 대한 포인터
	int *p;				//검색한 요소에 대한 포인터
	puts("besearch 함수를 사용하여 검색");
	printf("요소개수: ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));			//요소의 개수가 nx개인 int형 배열 생성

	printf("오름차순으로 입력하세요\n");
	printf("x[0] : ");
	scanf_s("%d", &x[0]);
	for (i = 0; i < nx; i++)
	{
		do
		{
			printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);  //바로 앞의 값보다 작으면 다시 입력
	}

	printf("검색값 : ");
	scanf_s("%d", &ky);
	//bsearch : 정렬된 배열에서 검색하는 함수 >> C언어 표준라이브러리에서 제공 >>이런걸 유틸리티 함수라 부른다
	//1번째 인수) 키값(검색할 값이 저장된 객체에 대한 포인터) 이 프록램에서는 키 값이 변수ky에 저장되어 있으므로 &ky를 전달
	//2) 배열의 포인터. 여기서는 검색 대상인 배열 x의 포인터(x) 를 전달
	//3) 세번째 인수를 전달하는 매개변수는 배열의 요소개수. 이 프로그램에서는 nx.
	//4) 배열의 요소 크기. 여기서는 검색대상인 배열x의 요소의 자료형이 int형이므로 sizeof(int)를 전달
	//5) 첫번째 인수가 가리키는 값이 더 작으며 음수값반환
	//첫번째 인수 가리키는 값과 두번째 인수가 가리키는 값이 같으면 0을 반환
	//첫번째 인수가 가리키는 값이 더 크면 양수값 반환

	p = bsearch(&ky,			//1)검색값에 대한 포인터
		x,						//2)배열
		nx,						//3)요소의 개수
		sizeof(int),			//4) 요소의 크기
		(int(*)(const void*, const void*)) int_cmp		//5)비교함수

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