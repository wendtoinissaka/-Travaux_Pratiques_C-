#include <iostream>
//#include "GestionnaireInventaire.h"
#include "GestionnaireInventaire.cpp"
#include "Article.cpp"

int main() {
//    // Exemple d'utilisation
    GestionnaireInventaire gestionnaire;
//
//    // Ajouter quelques articles à l'inventaire
//    gestionnaire.ajouterArticle(Article("Article1", 10, 19.99));
//    gestionnaire.ajouterArticle(Article("Article2", 5, 29.99));
//    gestionnaire.ajouterArticle(Article("Article3", 20, 9.99));
//
//    // Rechercher un article par nom
//    gestionnaire.rechercherParNom("Article2");
//
//    // Rechercher des articles par prix inférieur à 20
//    gestionnaire.rechercherParPrixInferieur(20.0);
//
//    return 0;
//
//
    // Menu simple
    int choix;
    std::cout << "\n**********Create by WENDTOIN ISSAKA OUEDRAOGO on 09/01/2024 ************\n";
    do {
        std::cout << "\n******************GESTIONNAIRE D'INVENTAIRE  ***********************\n";
        std::cout << "\n\nMenu:\n";
        std::cout << "1. Ajouter Article \n";
        std::cout << "2. Rechercher Par Nom\n";
        std::cout << "3. Rechercher Par Prix\n";
        std::cout << "4. Lister les articles\n";
        std::cout << "5. Supprimer un article\n";
        std::cout << "6. Quitter\n";
        std::cout << "\n**********MERCI POUR VOTRE CONFIANCE A LA CAPACITEE ****************\n" << std::endl;
        std::cout << "Choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1: {
                std::cout << "\n******** AJOUT DE NOUVEAU ARTICLE ********\n" << std::endl ;
                std::string nom;
                int quantite;
                float prix;
                std::cout << "Nom: " ;
                std::cin >> nom;
//                std::cin >> nom;
//                std::getline(std::cin, nom+=nom);
//                nom = "ali";
//                std::getline(std::cin, nom);
                std::cout << "Quantite de stock: ";
                std::cin >> quantite;
//                std::getline(std::cin, numero);
                std::cout << "Prix: ";
                std::cin >> prix;
//                std::getline(std::cin, email);
                gestionnaire.ajouterArticle(Article(nom, quantite, prix));
                std::cout << "Article ajoute avec succes!\n";
                break;
            }
//            case 2: {
//                std::cout << "\n******** SUPRRESSION DE CONTACT  ********\n" << std::endl ;
//                std::string nomASupprimer;
//                std::cout << "\nNom du contact a supprimer: ";
//                std::cin >> nomASupprimer;
//                std::getline(std::cin, nomASupprimer);
//                gestionContacts.supprimerContact(nomASupprimer);
//                std::cout << "Contact supprime avec succes!\n";
//                break;
//            }
//            case 3:
//                std::cout << "\n******** AFFICHAGE DES LISTES DE CONTACTS  ********\n" << std::endl ;
//                gestionContacts.afficherListeContacts();
//                break;
            case 2:{
                std::cout << "\n******** RECHERCHE D'ARTICLE PAR NOM ********\n" << std::endl ;
                std::string articleARechercher;
                std::cout << "\nNom du de l'article a rechercher: ";
                std::cin >> articleARechercher;
                std::getline(std::cin,articleARechercher);

                gestionnaire.rechercherParNom(articleARechercher);

                break;

            }
            case 3:{
                std::cout << "\n******** RECHERCHE D'ARTICLE PAR PRIX ********\n" << std::endl ;
                int articleARechercher;
                std::cout << "\nEntrer le prix  de l'article a rechercher: ";
                std::cin >> articleARechercher;
//                std::getline(std::cin,articleARechercher);
//                std::cin >> articleARechercher;
//                gestionnaire.rechercherParNom(articleARechercher);
                gestionnaire.rechercherParPrixInferieur(articleARechercher);

                break;

            }
            case 4:
                std::cout << "\n******** AFFICHAGE DES ARTICLES  ********\n" << std::endl ;
                gestionnaire.listerArticles();
                break;

            case 5: {

                std::cout << "\n******** SUPRRESSION D'ARTICLE  ********\n" << std::endl ;
                std::string nomASupprimer;
                std::cout << "\nNom du contact a supprimer: ";
                std::cin >> nomASupprimer;
                std::getline(std::cin, nomASupprimer);
                gestionnaire.supprimerArticle(nomASupprimer);
                std::cout << "Article supprime avec succes!\n";
                break;
            }


//            case 5:{
//                std::cout << "\n******** TRIE DE CONTACT PAR NOM ********\n" << std::endl ;
//                std::cout << "Trier par nom : ";
//                gestionContacts.trierParNom();
//
//                break;
//
//            }
//            case 6:{
//                std::cout << "\n******** TRIE DE CONTACT PAR MAIL ********\n" << std::endl ;
//                std::cout << "Trier par mail : ";
//                gestionContacts.trierParEmail();
//
//                break;
//
//            }

            case 6:
                std::cout << "Au revoir!\n";
                break;

            default:
                std::cout << "Choix invalide. Veuillez reessayer.\n";
        }
    } while (choix != 6);

    return 0;
}











//#include <iostream>
//#include <string>
//#include <vector>
//
//class Article {
//private:
//    std::string nom;
//    int quantite;
//    double prix;
//
//public:
//    // Constructeur
//    Article(const std::string& nom, int quantite, double prix)
//        : nom(nom), quantite(quantite), prix(prix) {}
//
//    // Méthode pour afficher les détails de l'article
//    void afficherDetails() const {
//        std::cout << "Nom: " << nom << ", Quantité: " << quantite << ", Prix: " << prix << std::endl;
//    }
//
//    // Getter pour le nom de l'article
//    std::string getNom() const {
//        return nom;
//    }
//
//    // Getter pour la quantité en stock
//    int getQuantite() const {
//        return quantite;
//    }
//
//    // Getter pour le prix de l'article
//    double getPrix() const {
//        return prix;
//    }
//};
//
//class GestionnaireInventaire {
//private:
//    std::vector<Article> inventaire;
//
//public:
//    // Méthode pour ajouter un nouvel article à l'inventaire
//    void ajouterArticle(const Article& article) {
//        inventaire.push_back(article);
//    }
//
//    // Méthode pour rechercher un article par nom
//    void rechercherParNom(const std::string& nom) const {
//        for (const auto& article : inventaire) {
//            if (article.getNom() == nom) {
//                article.afficherDetails();
//                return;
//            }
//        }
//        std::cout << "Article non trouvé." << std::endl;
//    }
//
//    // Méthode pour rechercher des articles par prix inférieur à une valeur donnée
//    void rechercherParPrixInferieur(double prixMax) const {
//        for (const auto& article : inventaire) {
//            if (article.getPrix() < prixMax) {
//                article.afficherDetails();
//            }
//        }
//    }
//};
//
//int main() {
//    // Exemple d'utilisation
//    GestionnaireInventaire gestionnaire;
//
//    // Ajouter quelques articles à l'inventaire
//    gestionnaire.ajouterArticle(Article("Article1", 10, 19.99));
//    gestionnaire.ajouterArticle(Article("Article2", 5, 29.99));
//    gestionnaire.ajouterArticle(Article("Article3", 20, 9.99));
//
//    // Rechercher un article par nom
//    gestionnaire.rechercherParNom("Article2");
//
//    // Rechercher des articles par prix inférieur à 20
//    gestionnaire.rechercherParPrixInferieur(20.0);
//
//    return 0;
//}
