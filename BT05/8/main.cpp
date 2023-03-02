#include <bits/stdc++.h>

using namespace std;

void rnd1(double n)
{
	int k = floor(n);
	if (n - k >= 0.50) cout << k + 1 << endl;
	else cout << k << endl;
}

void rnd2(double n)
{
	int k = round(n);
	n = k;
	cout << n << endl;
}

int main()
{
	double n;
	cin >> n;
	rnd1(n);
	rnd2(n);
}
