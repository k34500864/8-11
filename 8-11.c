#include<stdio.h>
int find(int a);
int main(void) {
	int a, i;
	/*
		a % 3 = 1;
		a % 5 = 3;
		a % 7 = 2;
	*/
	scanf("%d", &a);
	printf("²Ä%d­Ó:%d", a, find(a));
}
int find(int a) {
	int i = 0, num = 0;
	while (num < a)
	{
		i++;
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
		{
			num++;
		}
	}
	return i;
}