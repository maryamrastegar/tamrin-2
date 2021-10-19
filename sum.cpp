#include<iostream>
using namespace std;
int main() {
	string exits;
	
	int sum=0, number;
	cout << "enter numbers"<<endl;
	while (  cin >> number) {
		while (exits != "exit") {
			sum += number;
			break;
		}
}
	cout << sum;
	system("pause");
	return 0;
}
