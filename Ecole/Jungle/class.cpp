#include <iostream>
using namespace std;

class point {
private:
	int x;
	int y;
public:
	point(int, int);
	void affiche();
};

point::point(int abs, int ord)
{
	x = abs;
	y = ord;
}

void point::affiche()
{
	cout << "Je suis en : " << x << " | " << y << endl;
}

int main()
{
	point a(5, 9);
	
	a.affiche();
	return 0;
}
