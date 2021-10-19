#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	float max = 0.0, min = 0.0, sum = 0.0;
	float num = 0.0;
	float avg = 0.0;
	cout << "enter the number of students";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "enter atudent's mark:";
		cin >> num;
		max = num;
		min = num;
		sum = sum + num;

		if (num > max) 
			max = num;
		else 
			if (num <  min)
				min = num;
	}
	avg = sum / n;
	cout << "average of numbers you entered is:" << avg << endl;
	cout << "maximum number you enter is:" << max << endl;
	cout << "minimum number you enter is:" << min << endl;
	system("pause");
	return 0;
}