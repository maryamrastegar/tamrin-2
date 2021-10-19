#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	int dice;
	string text;
	cout << "enter start to roll the dice \n";
	cin >> text;
	if (text == "start") {
		srand((unsigned)time(0));
		dice = (rand() % 6) + 1;
		cout << dice;
	}
	if (dice == 6) {
		cout << " you can try again by entering start \n";
		cin >> text;
		if (text == "start") {
			srand((unsigned)time(0));
			dice = (rand() % 6) + 1;
			cout << dice;
		}
	}
	system("pause");
	return 0;
}