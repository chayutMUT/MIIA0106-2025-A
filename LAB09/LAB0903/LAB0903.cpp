// TODO 1) ???? field ??? method ?? class Student
// TODO 2) ????????????? printStudent(Student s)
// TODO 3) ??????????? printStudent ??? main
#include <iostream> 
#include <string>
using namespace std;
class Student
{
public:
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
void printStudent(Student s)
{
	// ????????????? object s
	cout << "ID: " << s.id << "\n";
	cout << "Nickname: " << s.nickname << "\n";
	cout << "Line ID: " << s.lineId << "\n";
	cout << "Phone: " << s.phone << "\n";
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();
	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);
	return 0;
}
