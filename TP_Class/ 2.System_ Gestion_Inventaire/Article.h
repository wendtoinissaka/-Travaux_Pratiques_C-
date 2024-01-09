#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED

#include <iostream>
#include <string>

class Article {
private:
    std::string nom;
    int quantite;
    double prix;

public:
    // Constructeur
    Article(const std::string& nom, int quantite, double prix);

    // Méthode pour afficher les détails de l'article
    void afficherDetails() const;

    // Getter pour le nom de l'article
    std::string getNom() const;

    // Getter pour la quantité en stock
    int getQuantite() const;

    // Getter pour le prix de l'article
    double getPrix() const;
};


#endif // ARTICLE_H_INCLUDED
