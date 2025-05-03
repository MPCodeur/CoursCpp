#include <iostream>
using namespace std;

struct point {
	int x;
	int y;

	void initialise(int, int);
	void deplace(int, int);
	void affiche();
};

void point::initialise(int abs, int ord)
{
	x = abs;
	y = ord;
}

void point::deplace(int dx, int dy)
{
	x+= dx;
	y+= dy;
}

void point::affiche()
{
	cout << "Je suis en " << x << " | " << y << endl;
}

int main()
{
	point a, b;

	a.initialise(5,2);
	a.affiche();
	a.deplace(-2, 4);
	a.affiche();

	b.initialise(90, 2);
	b.affiche();
	
	return 0;
}
