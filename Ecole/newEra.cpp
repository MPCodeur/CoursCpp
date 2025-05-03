/*==========================*
 * ceci est mon commentaire *
 *==========================*/
#include "newEra.h"

void estPair(int nbr)
{
	if((nbr & 1) == 1)
		cout << "Votre nombre " << nbr << " est impair" << endl;
	else
		cout << "Votre nombre " << nbr << " est pair" << endl;
}

void defaultArg(int testA, int testB = 20)
{
	cout << "argA = " << testA << "\n argB = " << testB << endl;
}

void argInfini(int elementA, ...)
{
	va_list totalArg;
	int index = 1;

	cout << "arg1 = " << elementA << endl;
	va_start (totalArg, elementA);
	while ((index = va_arg(totalArg, int)) != 0) {
		cout << "arg= " << index << endl;
	}
	va_end(totalArg);
}

void echangeParReference(int &a, int &b)
{
	int c;
	
	cout << "début de l'échange: " << a  << " " << b << endl;
	c = a; a = b; b = c;
	cout << "fin de l'échange: " << a << " " << b << endl;
}

int main(void)
{
	int n=10, p=20;
	echangeParReference(n, p);
	return 0;
}
