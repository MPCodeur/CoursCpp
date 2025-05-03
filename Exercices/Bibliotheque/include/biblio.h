#ifndef BIBLIO_H
#define BIBLIO_H

#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>

using namespace std;

class Livre {
private:
    string titre;
    string auteur;
    int annee;

public:
    Livre(string title, string author, int year);
    void afficher() const;
};

class Bibliotheque {
private:
    vector<Livre> collection;
    static int totalLivre;

public:
    void addBook(string titre, string auteur, int annee);
    int deleteBook(size_t index);
    void afficherBiblio() const;
};

#endif
