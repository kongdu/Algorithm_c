//#include <stdio.h>
//#include <stdlib.h>
//
///*������ 2����~~36������ ��� ��ȯ*/
//
//int card_convr(unsigned x, int n, char d[]) {
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPWRSTUVQXYZ";
//	int digits = 0; //��ȯ �� �ڸ���
//	if (x == 0) {
//		d[digits++] = dchar[0];
//	}
//	else {
//		while (x) {
//			d[digits++] = dchar[x%n];
//			x /= n;
//		}
//	}
//	return digits;
//}
//
//int main(void)
//{
//	int i;
//	unsigned no; //��ȯ�ϴ�����
//	int cd;		//���
//	int dno;	//��ȯ �� �ڸ���
//	char cno[512];
//	int retry;
//	puts("10������ ��� ��ȯ�մϴ�");
//	do {
//		printf("��ȯ�� ���̾ƴ� ������ �Է��Ͻÿ�: ");
//		scanf_s("%u", &no);
//		do {
//			printf("� ������ ��ȯ�ұ��? (2~36����) : ");
//			scanf_s("%d", &cd);
//		} while (cd < 2 || cd >36);
//		dno = card_convr(no, cd, cno); //no�� cd������ ��ȯ
//		printf("%d������ ǥ���ϸ�", cd);
//		for (i = dno - 1; i >= 0; i--) {
//			printf("%c", cno[i]);
//		}
//			printf(" �Դϴ�\n");
//			printf("�� �� �� �ұ��? (1 - ��/ 0 - �ƴϿ�) : ");
//			scanf_s("%d", &retry);
//	}while (retry == 1);
//	system("pause");
//	return 0;
//}