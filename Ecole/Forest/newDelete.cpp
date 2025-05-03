#include <iostream>
using namespace std;

int main()
{
	int *ptrA, *ptrB;
	int nbr;

	cout << "combien de valeurs: ";
	cin >> nbr;
	ptrA = new int[nbr];

	cout << "allocation de " << nbr << " int en : " << ptrA << endl;
	for (int i=0; i<nbr; i++)
	   ptrA[i] = (i+1) * (i+1);

	cout << "voici les carres des nombre de 1 a " << nbr << ": " << endl;
	for (ptrB = ptrA; ptrB < ptrA+nbr; ptrB++)
		cout << ptrB << "|" << *ptrB << " " << endl;

	delete[] ptrA;
	return 0;
}
