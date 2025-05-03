#include <iostream>
using namespace std;

class Point {
private:
	int *x;
	
public:
	Point(int val) {
		x = new int(val);
	}

	Point(const Point &autre) {
		x = new int(*autre.x);
	}

	~Point() {
		delete x;
	}

	void affiche() {
		cout << "Valeur : " << *x << endl;
	}
};

int main()
{
	Point p1(8);
	Point p2 = p1;
	
	p2.affiche();
	return 0;
}
