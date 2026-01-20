// TODO 1) ???? field ?? class Student: id, nickname
 // TODO 2) ??? pointer p ???????? s1 
// TODO 3) ?????????????? p-> 
// TODO 4) ???????????? p->
#include <iostream> 
#include  <string>
using namespace std;
class Student
{
public: // TODO 
    int id;
    string nickname;
};

int main()
{
    Student s1;
    Student* p = nullptr;
    // TODO: p = &s1;
    p = &s1;
    // TODO: p->id = ...;
    p->id = 67112;
    // TODO: p->nickname = ...;
    p->nickname = "Nut";
    cout << "ID:" << p->id << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}
