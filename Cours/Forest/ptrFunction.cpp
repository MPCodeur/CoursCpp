#include <iostream>
using namespace std;

int addition(int a, int b)
{
	return a + b;
}

int soustraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

void appliquerFonction(int a, int b, int (*op)(int, int))
{
	cout << "Résultat " << op(a, b) << endl;
}

int main()
{
	int (*operation[3])(int, int) = {
		addition,
		soustraction,
		multiplication
	};
	int x = 3, y = 5;

	cout << "x = " << x << ", y = "<< y << endl;
	cout << "--------------" << endl;
	cout << "Addition: " << operation[0](x,y) << endl;
	cout << "Soustraction: " << operation[1](x,y) << endl;
	cout << "Multiplication: " << operation[2](x,y) << endl;
	cout << "--------------" << endl;

	appliquerFonction(3, 5, addition);
	appliquerFonction(3, 5, multiplication);
	
	return 0;
}
