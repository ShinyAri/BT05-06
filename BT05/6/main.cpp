#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	return __gcd(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	if (gcd(a, b) == 1) cout << "Nguyen to cung nhau";
	else cout << "Khong nguyen to cung nhau";
}
