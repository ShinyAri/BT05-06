#include <bits/stdc++.h>

using namespace std;

void decToBinary(int n)
{
	int binaryNum[1000];
	int i = 0;
	while (n > 0) {

		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
	cout << endl;
}

void binaryToDec(int n)
{
	int k = 0;
	int c = 0;
	while (n > 0)
	{
		k += (n % 10)*pow(2, c);
		n /= 10;
		c++;
	}
	cout << k << endl;
}

int main()
{
	int n;
	cin >> n;
	binaryToDec(n);
	decToBinary(n);
}
