#ifndef GESTIONNAIREINVENTAIRE_H_INCLUDED
#define GESTIONNAIREINVENTAIRE_H_INCLUDED


#include <vector>
#include "Article.h"

class GestionnaireInventaire {
private:
    std::vector<Article> inventaire;

public:
    // Méthode pour ajouter un nouvel article à l'inventaire
    void ajouterArticle(const Article& article);

    // Méthode pour rechercher un article par nom
    void rechercherParNom(const std::string& nom) const;

    // Méthode pour rechercher des articles par prix inférieur à une valeur donnée
    void rechercherParPrixInferieur(double prixMax) const;

    // Méthode pour afficher tous les articles de l'inventaire
    void listerArticles() const;

    // Méthode pour supprimer un article de l'inventaire par nom
    void supprimerArticle(const std::string& nom);
};




#endif // GESTIONNAIREINVENTAIRE_H_INCLUDED
