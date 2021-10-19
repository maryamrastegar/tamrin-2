#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the number" << endl;
	cin >> n;
	int a = 1, b = 1, c;
	cout << a << endl;
	cout << b << endl;
	int i = 2;
	while (i<n)
	{
		c = a + b;
		cout << c << endl;
		a = b;
		b = c;
		i++;
	}
	system("pause");
	return 0;
	
}