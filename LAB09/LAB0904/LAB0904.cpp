// TODO 1) ???? field ??? method ?? class Student
// TODO 2) ????? swapStudent(Student&, Student&) 
// TODO 3) ????? sortByID(Student[], size)

#include <iostream> 
#include <string>
using namespace std;
class Student
{
public: //TODO 
    string id;
    string nickname;
    string lineId;
    string phone;

    void input()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Nickname: ";
        cin >> nickname;
        cout << "Enter Line ID: ";
        cin >> lineId;
        cout << "Enter Phone: ";
        cin >> phone;
    }
    void print()
    {
        cout << "ID: " << id << "\n";
        cout << "Nickname: " << nickname << "\n";
        cout << "Line ID: " << lineId << "\n";
        cout << "Phone: " << phone << "\n";

    }
};
void swapStudent(Student& a, Student& b)
{
    //TODO 
    Student temp = a;
    a = b;
    b = temp;

}
void sortByID(Student students[], int size)
{
    // Bubble sort by ??? id ???? -> ???
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (students[j].id > students[j + 1].id)
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}
void printStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // TODO: students[i].print();
        students[i].print();

        cout << "----------------------\n";
    }
}
int main()
{
    const int SIZE = 5;
    Student students[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: students[i].input();
        students[i].input();

        cout << endl;
    }

    sortByID(students, SIZE);

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
