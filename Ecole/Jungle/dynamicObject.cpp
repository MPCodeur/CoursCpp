#include <iostream>
using namespace std;

class point {
private:
	int x;
	int y;
public:
	point(int abs, int ord) : x(abs), y(ord) {}
	void affiche()
	{
		cout << "Je suis en " << x << " | " << y << endl;
	}
};

int main()
{
	point *adr;
	
	adr = new point(1, 3);
	adr -> affiche();

	delete adr;
	return 0;
}
