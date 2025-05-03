#include <iostream>
using namespace std;

struct enregistrement {
	int a;
	float b;
};

void facture(enregistrement y)
{
	y.a = 0;
	y.b = 1;

	cout << "Dans enregistrement: " << y.a << " | " << y.b << endl;
}

void factureRef(enregistrement &y)
{
	y.a = 0;
	y.b = 1;
	
	cout << "Dans enregistrement: " << y.a << " | " << y.b << endl;
}

int main()
{
	enregistrement test;

	test.a = 1;
	test.b = 12.5;
	cout << "Avant appel facture : " << test.a << " | " << test.b << endl;
	facture(test);
	cout << "Après appel facture : " << test.a << " | " << test.b << endl;
	
	cout << "\n-------------\n" << endl;  

	cout << "Avant appel factureRef : " << test.a << " | " << test.b << endl;
	factureRef(test);
	cout << "Après appel factureRef : " << test.a << " | " << test.b << endl;
	return 0;
}
