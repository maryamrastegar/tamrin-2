#include < iostream>
	using namespace std;
	int main() {
		int h, min, sec;
		cout << "enter hour";
		cin >> h;
		cout << "enter minute";
		cin >> min;
		cout << "enter second";
		cin >> sec;
		int time_sec = ((h * 3600) + (min * 60) + sec);
		cout << h <<" : " << min<< " : "<< sec <<" is " <<time_sec<<" seconds ";
		system("pause");
		return 0;

	}