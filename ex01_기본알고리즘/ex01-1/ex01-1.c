#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	
	return min;
}


int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}

int med3(int a, int b, int c) {
	if (a >= b)
		if (b >= c)
			return b;	// A,B,F,G
		else if (a <= c)
			return a;	// D,E,H
		else
			return c;	//C
	else if (a > c)
		return a;		//I
	else if (b > c)
		return c;		//J,K
	else
		return b;		//L,M
}


int main(void)
{

	//Q1
	printf("max4(%d, %d, %d, %d) => �ִ밪�� %d\n", 4, 30, 2, 64, max4(4, 30, 2, 64));

	//Q2
	printf("min3(%d, %d, %d) => �ּҰ��� %d\n", 36, 2, 58, min3(36, 2, 58));

	//Q3
	printf("min4(%d, %d, %d, %d) => �ּҰ��� %d\n", 4, 30, 2, 64, min4(4, 30, 2, 64));

	//Q4 p22
	int a, b, c;
	printf("\n�� ������ �߾Ӱ� ���ϱ�\n");
	printf("a�� ��: "); scanf_s("%d", &a);
	printf("b�� ��: "); scanf_s("%d", &b);
	printf("c�� ��: "); scanf_s("%d", &c);

	printf("�߾Ӱ��� %d�Դϴ�\n", med3(a, b, c));

	system("pause");

	return 0;


	//Q5 ȿ���� �������� ����??

	//Q6


	//Q7


	//Q8
}

