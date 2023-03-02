#include <iostream>
#include <cmath>
using namespace std;

int hadamard[100][100];

int main()
{
	int n;
	cin >> n;
	n = pow(2, n);
	hadamard[0][0] = 1;
	for (int x = 1; x < n; x += x)
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				hadamard[i + x][j] = hadamard[i][j];
				hadamard[i][j + x] = hadamard[i][j];
				hadamard[i + x][j + x] = -hadamard[i][j];
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(hadamard[i][j]==1)
			{
			    cout << " "<< hadamard[i][j] << " ";
			}
			else cout << hadamard[i][j] << " ";
		}
		cout << endl;
	}
}
