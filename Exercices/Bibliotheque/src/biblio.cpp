#include "../include/biblio.h"

int Bibliotheque::totalLivre = 0;

Livre::Livre(string title, string author, int year) {
    titre = title;
    auteur = author;
    annee = year;
}

void Livre::afficher () const {
    cout << titre << " " << auteur << " " << annee << endl;
}

void Bibliotheque::afficherBiblio() const {

	cout << "Nombre de Livre total : " << totalLivre << endl;
	if (totalLivre > 0) {
		for(int i=0; i < totalLivre; ++i) {
			cout << "Livre n°" << i << ": ";
			collection[i].afficher();
		}
	} else
		cout << "Aucun livre dans la bibliotheque." << endl;
}

void Bibliotheque::addBook(string titre, string auteur, int annee)
{
	collection.emplace_back(titre, auteur, annee);
	totalLivre++;	
}

int Bibliotheque::deleteBook(size_t index)
{
	if (index >= collection.size()) {
		cout << "Index invalide" << endl;
		return -1;
	}
	collection.erase(collection.begin() + index);
	totalLivre--;
	return 1;
}


