#include <iostream>
using namespace std;

void echange(int *nbr1, int *nbr2)
{
	int x;
	x = *nbr1;
	*nbr1 = *nbr2;
	*nbr2 = x;
}
int main()
{
	int a = 10, b = 20;

	cout << "avant : " << a << " " << b << endl;
	echange(&a, &b);
	cout << "après : " << a << " " << b << endl;
	return 0;
}
