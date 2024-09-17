#include <stdio.h>
int sad(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf_s("%d %d", &n1, &n2);
	int n3 = sad(n1, n2);
	printf("%d\n", n3);
	return 0;
}