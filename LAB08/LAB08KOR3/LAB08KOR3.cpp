#include <iostream>
#include <string>
using namespace std;
struct Student {
    // TODO
	string id;
    string nickname;
	string lineId;
	string phone; 
};
// TODO: ????????????????
void printStudent(Student s1) {
    // TODO
	cout << "ID: " << s1.id << "\n";
	cout << "Nickname: " << s1.nickname << "\n";
	cout << "Line ID: " << s1.lineId << "\n";
	cout << "Phone: " << s1.phone << "\n";
}
int main() {
    Student s1;
    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.id;
	cout << "Enter Nickname: ";
	cin >> s1.nickname;
	cout << "Enter Line ID: ";
	cin >> s1.lineId;
	cout << "Enter Phone: ";
	cin >> s1.phone;
    cout << "\n=== Output (from function) ===\n";
    // TODO: ????? printStudent
	cout << "Student 1:\n";
	printStudent(s1);
    return 0;
}
