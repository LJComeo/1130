#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int n = s.size();
		int min = n;
		char c[256] = { 0 };
		for (int i = 0; i < n; i++)
		{
			c[s[i]]++;
		}
		for (int i = 0; i < 256; i++)
		{
			if (c[i] == 1)
			{
				if (s.find(i) < min)
				{
					min = s.find(i);
				}
			}
		}
		if (min == n)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << s[min] << endl;
		}
		
	}
	return 0;
}