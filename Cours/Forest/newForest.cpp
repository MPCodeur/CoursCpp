#include <iostream>
/*=====================*
 *pointeur sur fonction*
 *=====================*/
using namespace std;

void add(int a, int b) {
    cout << "Addition: " << (a + b) << std::endl;
}

void subtract(int a, int b) {
    cout << "Subtraction: " << (a - b) << std::endl;
}

int main() {
    void (*operation)(int, int);
	void (*operationSlot[2])(int, int) = { add, subtract }
    char choice;

    cout << "Enter operation (+ or -): ";
    cin >> choice;

    if (choice == '+')
        operation = &add;
	// ou operationSlot[0](10, 5);
    else if (choice == '-')
        operation = &subtract;
	// ou operationSlot[1](10, 5);
    else
		cout << "error, please enter + or -" << endl;

    operation(10, 5);
    return 0;
}
