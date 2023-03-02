#include <bits/stdc++.h>

using namespace std;

int k[1002];
int n[1002];

int tohop(int k, int n)
{
	if (k == 0 || k == n) return 1;
	if (k == 1) return n;
	return tohop(k - 1, n - 1) + tohop(k, n - 1);
}

int kiemTra(int k, int n)
{
	if (k<0 || k>n) return 0;
	if (n < 1 || n>20) return 0;
	return 1;
}

void nhapKN(int k[], int n[], int *soPhanTu)
{
	for (int i = 0; i < *soPhanTu; i++)
	{
		cin >> k[i] >> n[i];
		if (k[i] == -1 && n[i] == -1) break;
	}
}

int main()
{
	int t = 1000;
	nhapKN(k, n, &t);
	for (int i = 0; i < t; i++)
	{
		if (k[i] == -1 && n[i] == -1) break;
		if (kiemTra(k[i], n[i])) cout << tohop(k[i], n[i]) << endl;
	}
}
