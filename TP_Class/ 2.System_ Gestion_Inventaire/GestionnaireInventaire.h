#ifndef GESTIONNAIREINVENTAIRE_H_INCLUDED
#define GESTIONNAIREINVENTAIRE_H_INCLUDED


#include <vector>
#include "Article.h"

class GestionnaireInventaire {
private:
    std::vector<Article> inventaire;

public:
    // M�thode pour ajouter un nouvel article � l'inventaire
    void ajouterArticle(const Article& article);

    // M�thode pour rechercher un article par nom
    void rechercherParNom(const std::string& nom) const;

    // M�thode pour rechercher des articles par prix inf�rieur � une valeur donn�e
    void rechercherParPrixInferieur(double prixMax) const;

    // M�thode pour afficher tous les articles de l'inventaire
    void listerArticles() const;

    // M�thode pour supprimer un article de l'inventaire par nom
    void supprimerArticle(const std::string& nom);
};




#endif // GESTIONNAIREINVENTAIRE_H_INCLUDED
