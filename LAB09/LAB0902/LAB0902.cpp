// TODO 1) ???? field ??? method ?? class Student
// TODO 2) ????????????????? 5 ??
// TODO 3) ???????????????????????????
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	// TODO
	string id;
	string nickname;
	string lineId;
	string phone;
	void input() {
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Line ID: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
	}
	void print() {
		cout << "ID: " << id << "\n";
		cout << "Nickname: " << nickname << "\n";
		cout << "Line ID: " << lineId << "\n";
		cout << "Phone: " << phone << "\n";
	}
};
int main()
{
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: students[i].input();
		students[i].input();
		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++)
	{
		// TODO: students[i].print();
		students[i].print();
		cout << "----------------------\n";
	}
	return 0;
}