#include<iostream>
using namespace std;
int main() {
	int seconds, hours, minutes;
	cin >> seconds;
	minutes = seconds / 60;
	hours = minutes / 60;
	cout << seconds << " is  " << int(hours) << " : " << int(minutes % 60)
		<< " : " << int(seconds % 60)<<endl ;
	system("pause");
	return 0;
}