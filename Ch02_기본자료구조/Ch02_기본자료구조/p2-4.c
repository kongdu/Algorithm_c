//#include <stdio.h>
//#include <stdlib.h>
///*�迭 �������� �����ϰ� �����ϱ�*/
//
//int main(void) 
//{
//	int i;
//	int *a;
//	int na;
//	printf("��Ұ���: ");
//	scanf_s("%d", &na);
//	a = calloc(na, sizeof(int));
//
//	if (a == NULL) {
//		puts("�޸� Ȯ���� �����߽��ϴ�");
//	}
//	else
//	{
//		printf("%d���� ������ �Է��ϼ���\n", na);
//		for (i = 0; i < na; i++)
//		{
//			printf("a[%d] : ", i);
//			scanf_s("%d", &a[i]);
//		}
//		printf("�� ��ڰ��� �Ʒ��� �����ϴ�\n");
//		for (i = 0; i < na; i++) {
//			printf("a[%d] = %d\n", i, a[i]);
//		}
//		free(a);
//	}
//	system("pause");
//	return 0;
//}