#include <iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int abs=0, int ord=0)
	{
		x = abs;
		y = ord;
	}
	void affiche();
};

void point::affiche()
{
	cout << "Adresse de l'objet : " << this << " - Coordonnées : " << x << " | " << y << endl;
}

int main()
{
	point a(5), b(8, 29);

	a.affiche();
	b.affiche();
	return 0;
}
