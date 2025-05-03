#include "../include/ecole.h"

Classe::Classe(int capaciteEtudiant_)
{
	nbEtudiant = 0;
	capaciteEtudiants = capaciteEtudiant_;
	etudiants = new Etudiant *[capaciteEtudiants];
}

Classe::~Classe()
{
	for (int i=0; i<getnbEtudiant(); i++)
		delete etudiants[i];
	delete[] etudiants;
}

void Classe::ajouterEtudiant(Etudiant *e)
{
	if (getnbEtudiant() < getCapaciteEtudiants())
		etudiants[getnbEtudiant()++] = e;
	else
		cout << "Nombre maximum d'etudiant atteint" << endl;
}

void Classe::afficherTous()
{
	for(int i=0; i < nbEtudiant; i++)
		etudiants[i]->afficher();
}
