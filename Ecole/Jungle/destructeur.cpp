#include <iostream>
#include <cstdlib>
using namespace std;

class hasard {
private:
	int nbVal;
	int *val;
public:
	hasard(int, int);
	~hasard();
	void affiche();
};

hasard::hasard(int nb, int max)
{
	int i;

	val = new int[nbVal = nb];
	for (i=0; i<nb; i++)
		val[i] = double (rand()) / RAND_MAX * max;
}

hasard::~hasard()
{
	delete[] val;
}

void hasard::affiche()
{
	int i;

	for (i=0; i<nbVal; i++)
		cout << val[i] << endl;
}

int main()
{
	hasard suite1 (10, 5);
	suite1.affiche();

	hasard suite2 (3, 8);
	suite2.affiche();
	return 0;
}
