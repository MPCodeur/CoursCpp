#include "../include/ecole.h"

int main()
{
	Classe terminal(11);
	Etudiant *etu1 = new Etudiant("Tom", 18);
	Etudiant *etu2 = new Etudiant("Bob", 22);
	Etudiant *etu3 = new Etudiant("Jef", 26);

	etu1->ajouterNote(15);
	etu1->ajouterNote(12);
	etu1->ajouterNote(10);
	terminal.ajouterEtudiant(etu1);

	etu2->ajouterNote(7);
	etu2->ajouterNote(4);
	etu2->ajouterNote(11);
	terminal.ajouterEtudiant(etu2);

	etu3->ajouterNote(17);
	etu3->ajouterNote(18);
	etu3->ajouterNote(20);
	terminal.ajouterEtudiant(etu3);

	cout << "Liste des étudiants :" << endl;
	terminal.afficherTous();
	
	return 0;
}
