#include "GestionnaireInventaire.h"
#include <algorithm>
// D�finition de la m�thode pour ajouter un nouvel article � l'inventaire
void GestionnaireInventaire::ajouterArticle(const Article& article) {
    inventaire.push_back(article);
}

// D�finition de la m�thode pour rechercher un article par nom
void GestionnaireInventaire::rechercherParNom(const std::string& nom) const {
    for (const auto& article : inventaire) {
        if (article.getNom() == nom) {
            article.afficherDetails();
            return;
        }
    }


    std::cout << "Article non trouv�." << std::endl;
}

// D�finition de la m�thode pour rechercher des articles par prix inf�rieur � une valeur donn�e
void GestionnaireInventaire::rechercherParPrixInferieur(double prixMax) const {
    for (const auto& article : inventaire) {
        if (article.getPrix() < prixMax) {
            article.afficherDetails();
        }
    }
}


//// D�finition de la m�thode pour afficher tous les articles de l'inventaire
//void GestionnaireInventaire::listerArticles() const {
//    for (const auto& article : inventaire) {
//        article.afficherDetails();
//    }
//}
void GestionnaireInventaire::listerArticles() const {
    std::cout << "Liste des articles:\n\n";
    for (const auto& article : inventaire) {
        article.afficherDetails();
        std::cout << "------------------------\n";
    }
}



// D�finition de la m�thode pour supprimer un article de l'inventaire par nom
void GestionnaireInventaire::supprimerArticle(const std::string& nom) {
    auto it = std::remove_if(inventaire.begin(), inventaire.end(),
                             [nom](const Article& article) {
                                 return article.getNom() == nom;
                             });

    inventaire.erase(it, inventaire.end());
}

