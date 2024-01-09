#include "Article.h"

// Définition du constructeur
Article::Article(const std::string& nom, int quantite, double prix)
    : nom(nom), quantite(quantite), prix(prix) {}

// Définition de la méthode pour afficher les détails de l'article
void Article::afficherDetails() const {
    std::cout << "Nom: " << nom << ", Quantité: " << quantite << ", Prix: " << prix << std::endl;
}

// Définition du getter pour le nom de l'article
std::string Article::getNom() const {
    return nom;
}

// Définition du getter pour la quantité en stock
int Article::getQuantite() const {
    return quantite;
}

// Définition du getter pour le prix de l'article
double Article::getPrix() const {
    return prix;
}
