#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << &n << endl;

	int &i = n;

	cout << &n << endl;
	cout << &i << endl;

	return 0;
}