#include<stdio.h>
#define _0101

/*p7 演習1-1*/
#ifdef _0101
int main(void) {
	printf("15から37を引いた値は%dです。", 15 - 37);

	return 0;
}
#endif

/*p9 演習1-2*/
#ifdef _0102
int main(void) {
	printf("天\n地\n人");

	return 0;
}
#endif

/*p9 演習1-3*/
#ifdef _0103
int main(void) {
	printf("もしもし。\n\nこんにちは。\nそれでは。");

	return 0;
}
#endif

/*p13 演習1-4*/
#ifdef _0104
int main(void) {
	int i = 28.6364587;
	printf("%d", i);

	return 0;
}
#endif

/*p15 演習1-5*/
#ifdef _0105
int main(void) {
	int a;
	printf("整数を入力してください：");
	scanf_s("%d", &a);
	printf("%dに12を加えると%dです。\n", a, a + 12);

	return 0;
}
#endif

/*p15 演習1-6*/
#ifdef _0106
int main(void) {
	int a;
	printf("整数を入力してください：");
	scanf_s("%d", &a);
	printf("%dに6を減じると%dです。\n", a, a - 6);

	return 0;
}
#endif

/*p17 演習1-7*/
#ifdef _0107
int main(void) {
	puts("天");
	puts("地");
	puts("人");

	return 0;
}
#endif

/*p17 演習1-8*/
#ifdef _0108
int main(void) {
	int n1, n2;
	int N;
	puts("二つの整数を入力してください。");
	printf("整数１：");    scanf_s("%d", &n1);
	printf("整数２：");    scanf_s("%d", &n2);
	N = n1 * n2;
	printf("それらの積は%dです。", N);

	return 0;
}
#endif

/*p17 演習1-9*/
#ifdef _0109
int main(void) {
	int n1, n2, n3;
	int N;
	puts("三つの整数を入力してください");
	printf("整数１：");    scanf_s("%d", &n1);
	printf("整数２：");    scanf_s("%d", &n2);
	printf("整数３：");    scanf_s("%d", &n3);
	N = n1 + n2 + n3;
	printf("それらの和は%dです。", N);

	return 0;
}
#endif