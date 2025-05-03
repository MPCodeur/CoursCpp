#include <iostream>
using namespace std;

class compt_obj {
private:
	static int ctr;
public:
	compt_obj();
	~compt_obj();
	static void compt();
};

int compt_obj::ctr = 0;

compt_obj::compt_obj()
{
	cout << "++construction: il y a maintenant  " << ++ctr << " objet" << endl;
}

compt_obj::~compt_obj()
{
	cout << "--destruction: il reste maintenant " << --ctr << " objet" << endl;
}

void compt_obj::compt()
{
	cout << "  appel compte: il y a             " << ctr << " objet" << endl;
}

void fct()
{
	compt_obj u, v;
}

int main()
{
	compt_obj::compt();
	compt_obj a;
	compt_obj::compt();
	cout << endl;
	fct();
	cout << '\n';
	compt_obj::compt();
	
	return 0;
}
