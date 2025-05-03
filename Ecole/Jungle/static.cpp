#include <iostream>
using namespace std;

class compt_obj {
private:
	static int ctr;
public:
	compt_obj();
	~compt_obj();
};

int compt_obj::ctr = 0;

compt_obj::compt_obj()
{
	cout << "++construction: il y a maintenant " << ++ctr << " objet" << endl;
}

compt_obj::~compt_obj()
{
	cout << "--destruction: il reste " << --ctr << " objet" << endl;
}

void fct()
{
	compt_obj u, v, w;
}

int main()
{
	compt_obj a;
	fct();
	compt_obj b;
	return 0;
}
