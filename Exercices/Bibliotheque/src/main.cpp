#include "../include/biblio.h"

int affichage(int choix) {
	cout << "Que voulez-vous faire ?" << endl;
	cout << "1. Ajouter un livre\n"
		 << "2. Suprimer un livre\n"
		 << "3. Affiche le contenu de la bibliotheque\n"
		 << "4. Quitter" << endl;
	cin >> choix;

	return choix;
}

int main() {
    Bibliotheque manga;
    int choix = 0;
    string titre, auteur;
    int annee, index;

    system("clear");
    cout << "Bienvenue dans la bibliotheque\n" << endl;
    while (choix != 4) {
        choix = affichage(choix);
        switch (choix) {
        case 1:
            cout << "Quel est son titre ? ";
            cin >> titre;
            cout << "Qui est l'auteur ? ";
            cin >> auteur;
            cout << "En quelle année est-il sorti ? ";
            cin >> annee;
            manga.addBook(titre, auteur, annee);
            cout << "Livre ajouté" << endl;
            sleep(1);
            break;
        case 2:
            manga.afficherBiblio();
            cout << "Quel livre supprimer ? ";
            cin >> index;
            if (manga.deleteBook(index) > 0)
                cout << "Livre " << index << " supprimé" << endl;
            else
                cout << "Mauvais index" << endl;
            sleep(1);
            break;
        case 3:
            manga.afficherBiblio();
            sleep(2);
            break;
        default:
            cout << "Veuillez choisir entre 1 et 4" << endl;
            break;
        }
        system("clear");
    }
    return 0;
}
