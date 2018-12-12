//#include <stdio.h>
//#include <stdlib.h>
//
///*정수를 2진수~~36진수로 기수 변환*/
//
//int card_convr(unsigned x, int n, char d[]) {
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPWRSTUVQXYZ";
//	int digits = 0; //변환 후 자리수
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
//	unsigned no; //변환하는정수
//	int cd;		//기수
//	int dno;	//변환 후 자릿수
//	char cno[512];
//	int retry;
//	puts("10진수를 기수 변환합니다");
//	do {
//		printf("변환할 음이아닌 정수를 입력하시오: ");
//		scanf_s("%u", &no);
//		do {
//			printf("어떤 진수로 변환할까요? (2~36진수) : ");
//			scanf_s("%d", &cd);
//		} while (cd < 2 || cd >36);
//		dno = card_convr(no, cd, cno); //no를 cd진수로 변환
//		printf("%d진수로 표현하면", cd);
//		for (i = dno - 1; i >= 0; i--) {
//			printf("%c", cno[i]);
//		}
//			printf(" 입니다\n");
//			printf("한 번 더 할까요? (1 - 예/ 0 - 아니오) : ");
//			scanf_s("%d", &retry);
//	}while (retry == 1);
//	system("pause");
//	return 0;
//}