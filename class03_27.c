#include<stdio.h>
#include<stdlib.h>
int add(int a, int b, int c)
{
	int tmp = a + b;
	int result = tmp + c;
	return result;
}
int main()
{
	int i = 0;
	int sum = 0;//�������ս��
	int n = 0;
	int ret = 1;//����n�Ľ׳�
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = 1;

		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}	