#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point(int abs=0, int ord=0) {
		x = abs;
		y = ord;
		cout << "Construction du point en " << x << " | " << y << endl;
	}
};

class Cercle {
private:
	Point centre;
	int rayon;

public:
	Cercle(int, int, int);
};

Cercle::Cercle(int abs, int ord, int ray) : centre(abs, ord)
{
	rayon = ray;
	cout << "Contruction du cercle " << rayon << endl;
}

int main()
{
	Cercle a(1,9,10);
	return 0;
}
	
