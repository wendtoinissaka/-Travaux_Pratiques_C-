#include "Article.h"

// D�finition du constructeur
Article::Article(const std::string& nom, int quantite, double prix)
    : nom(nom), quantite(quantite), prix(prix) {}

// D�finition de la m�thode pour afficher les d�tails de l'article
void Article::afficherDetails() const {
    std::cout << "Nom: " << nom << ", Quantit�: " << quantite << ", Prix: " << prix << std::endl;
}

// D�finition du getter pour le nom de l'article
std::string Article::getNom() const {
    return nom;
}

// D�finition du getter pour la quantit� en stock
int Article::getQuantite() const {
    return quantite;
}

// D�finition du getter pour le prix de l'article
double Article::getPrix() const {
    return prix;
}
