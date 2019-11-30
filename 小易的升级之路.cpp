#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int MaxNum(int m, int n)
{
	int tmp;
	while (n)
	{
		tmp = n;
		n = m % n;
		m = tmp;
	}
	return m;
}

int main1()
{
	int n,m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int num = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &num);
			if (m >= num)
			{
				m += num;
			}
			else
			{
				m += MaxNum(m, num);
			}
		}
		printf("%d\n", m);
	}
	return 0;
}