#include <bits/stdc++.h>

using namespace std;

void in(int n, int m)
{
	while (n--) cout << " ";
	while (m--) cout << "*";
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1, j = n - 1; i <= n * 2 - 1; i += 2, j--)
	{
		in(j, i);
	}
}
