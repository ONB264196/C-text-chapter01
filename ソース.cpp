#include<stdio.h>
#define _0101

/*p7 ���K1-1*/
#ifdef _0101
int main(void) {
	printf("15����37���������l��%d�ł��B", 15 - 37);

	return 0;
}
#endif

/*p9 ���K1-2*/
#ifdef _0102
int main(void) {
	printf("�V\n�n\n�l");

	return 0;
}
#endif

/*p9 ���K1-3*/
#ifdef _0103
int main(void) {
	printf("���������B\n\n����ɂ��́B\n����ł́B");

	return 0;
}
#endif

/*p13 ���K1-4*/
#ifdef _0104
int main(void) {
	int i = 28.6364587;
	printf("%d", i);

	return 0;
}
#endif

/*p15 ���K1-5*/
#ifdef _0105
int main(void) {
	int a;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &a);
	printf("%d��12���������%d�ł��B\n", a, a + 12);

	return 0;
}
#endif

/*p15 ���K1-6*/
#ifdef _0106
int main(void) {
	int a;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &a);
	printf("%d��6���������%d�ł��B\n", a, a - 6);

	return 0;
}
#endif

/*p17 ���K1-7*/
#ifdef _0107
int main(void) {
	puts("�V");
	puts("�n");
	puts("�l");

	return 0;
}
#endif

/*p17 ���K1-8*/
#ifdef _0108
int main(void) {
	int n1, n2;
	int N;
	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");    scanf_s("%d", &n1);
	printf("�����Q�F");    scanf_s("%d", &n2);
	N = n1 * n2;
	printf("�����̐ς�%d�ł��B", N);

	return 0;
}
#endif

/*p17 ���K1-9*/
#ifdef _0109
int main(void) {
	int n1, n2, n3;
	int N;
	puts("�O�̐�������͂��Ă�������");
	printf("�����P�F");    scanf_s("%d", &n1);
	printf("�����Q�F");    scanf_s("%d", &n2);
	printf("�����R�F");    scanf_s("%d", &n3);
	N = n1 + n2 + n3;
	printf("�����̘a��%d�ł��B", N);

	return 0;
}
#endif