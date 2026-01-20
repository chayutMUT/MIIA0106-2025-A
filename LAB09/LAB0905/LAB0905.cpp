// TODO 1) ???? field: id, nickname, height, weight 
// TODO 2) ????? method input(), print(), calcBMI()
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
	double height; // in meters
	double weight; // in kilograms
	void input() {
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Line ID: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
		cout << "Enter Height (in cm): ";
		cin >> height;
		cout << "Enter Weight (in kilograms): ";
		cin >> weight;
	}
	void print() {
		cout << "ID: " << id << "\n";
		cout << "Nickname: " << nickname << "\n";
		cout << "Line ID: " << lineId << "\n";
		cout << "Phone: " << phone << "\n";
		cout << "Height: " << height << " m\n";
		cout << "Weight: " << weight << " kg\n";
	}
	double calcBMI() {
		double h = height / 1000.0; // convert cm to m
		return weight / (height * height);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();
	cout << "BMI : "<< s1.calcBMI() << endl;
	return 0;
}
