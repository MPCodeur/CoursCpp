#include "../include/ecole.h"

Etudiant::Etudiant(string nom_, int age_)
{
	nom = nom_;
	age = age_;
	nbNotes  = 0;
	capaciteN = 10;
	notes = new int[capaciteN];
}

Etudiant::~Etudiant()
{
	delete[] notes;
}

void Etudiant::ajouterNote(int note)
{
	if (nbNotes < capaciteN)
		notes[nbNotes++] = note;
	else
		cout << "Nombre maximum de notes atteint" << endl;
}

void Etudiant::afficher()
{
	cout << "\nEtudiant: " << getName() << "\nAge: " <<
		getAge() << "\nNotes: ";
	for (int i=0; i < nbNotes; i++)
		cout << notes[i] << " ";
	cout << endl;
}
