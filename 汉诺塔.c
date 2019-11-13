#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include<stdio.h>
int m = 0;
void move(char a, char b)
{
	printf("%c--->%c\n", a, b);
	m++;
}

void hannuota(int n, char a, char b, char c)
{
	if (n == 1)
		move(a, c);
	else
	{
		hannuota(n - 1, a, c, b);
		move(a, c);
		hannuota(n - 1, b, a, c);
	}
	return;

}
int main()
{
	int n;
	char a, b, c;
	printf("请输入盘子的数量：");
	scanf_s("%d", &n);
	a = 'A';
	b = 'B';
	c = 'C';
	hannuota(n, a, b, c);
	printf("移动次数是：%d", m);
	return 0;
}
	return 0;
}
