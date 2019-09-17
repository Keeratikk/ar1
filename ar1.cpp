#include <iostream>
using namespace std;
int main()
{
	int r[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int n = 0; n < 3; n++)
		{
			cout << "Input  " << i + 1<< " " << n + 1 << " : " ;
			cin >> r[i][n];
		}
	}
	cout << "********Display Array************" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int n = 0; n < 3; n++)
			cout << "\t" << r[i][n] << "  ";
		cout << endl;
	}
	cout << "********Display Matrix************" << endl;
	for (int i = 0; i < 3; i++)
	{ 
		for (int n = 0; n < 2; n++)
			cout << "\t" << r[n][i] << "  ";
			cout << endl;
	}
	return(0);
}