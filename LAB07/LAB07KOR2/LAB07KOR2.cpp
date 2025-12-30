#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
	cout << "Score: " << score << endl;
	cout << "Value pointed to by ptr: " << *ptr << endl;
	cout << "Address of score: " << &score << endl;

    return 0;
}
