//#include <stdio.h>
//#include <stdlib.h>
///*배열 동적으로 생성하고 해제하기*/
//
//int main(void) 
//{
//	int i;
//	int *a;
//	int na;
//	printf("요소개수: ");
//	scanf_s("%d", &na);
//	a = calloc(na, sizeof(int));
//
//	if (a == NULL) {
//		puts("메모리 확보에 실패했습니다");
//	}
//	else
//	{
//		printf("%d개의 정수를 입력하세요\n", na);
//		for (i = 0; i < na; i++)
//		{
//			printf("a[%d] : ", i);
//			scanf_s("%d", &a[i]);
//		}
//		printf("각 요솟값은 아래와 같습니다\n");
//		for (i = 0; i < na; i++) {
//			printf("a[%d] = %d\n", i, a[i]);
//		}
//		free(a);
//	}
//	system("pause");
//	return 0;
//}