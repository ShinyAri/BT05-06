#include<iostream>

using namespace std;

int n, m;
int Bool[200] = { 0 };
char A[200];

void xuat()
{
	for (int i = 1; i <= m; i++)
		cout << A[i];
	cout << endl;
}

void Try(int k)
{
	for (int i = 97; i <= 97 + n - 1; i++)
	{
		if (!Bool[i])
		{
			A[k] = i;
			Bool[i] = 1;
			if (k == m)
				xuat();
			else
				Try(k + 1);
			Bool[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	Try(1);
}
