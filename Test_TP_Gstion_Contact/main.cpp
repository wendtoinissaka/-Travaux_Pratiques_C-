#include <iostream>


#include "GestionContact.h"
#include "Contact.h"
#include "GestionContact.cpp"
#include "Contact.cpp"


int main() {


    GestionContacts gestionContacts;

    // Menu simple
    int choix;
    std::cout << "\n**********Create by WENDTOIN ISSAKA OUEDRAOGO on 05/01/2024 ************\n";
    do {
        std::cout << "\n************GESTIONNAIRE DE CONTACT D'ENTREPRISE  ******************\n";
        std::cout << "\n\nMenu:\n";
        std::cout << "1. Ajouter un contact\n";
        std::cout << "2. Supprimer un contact\n";
        std::cout << "3. Afficher la liste des contacts\n";
        std::cout << "4. Rechercher un contact par son nom\n";
        std::cout << "5. Trier par nom\n";
        std::cout << "6. Trier par mail\n";
        std::cout << "7. Quitter\n";
        std::cout << "\n**********MERCI POUR VOTRE CONFIANCE A LA CAPACITEE ****************\n" << std::endl;
        std::cout << "Choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1: {
                std::cout << "\n******** AJOUT DE NOUVEAU CONTACT  ********\n" << std::endl ;
                std::string nom, numero, email;
                std::cout << "Nom: ";
                std::cin >> nom;
                std::cout << "Numero de telephone: ";
                std::cin >> numero;
                std::cout << "Email: ";
                std::cin >> email;

                    Contact nouveauContact(nom, numero, email);
                gestionContacts.ajouterContact(nouveauContact);
                std::cout << "Contact ajoute avec succes!\n";
                break;
            }
            case 2: {
                std::cout << "\n******** SUPRRESSION DE CONTACT  ********\n" << std::endl ;
                std::string nomASupprimer;
                std::cout << "\nNom du contact a supprimer: ";
                std::cin >> nomASupprimer;
                gestionContacts.supprimerContact(nomASupprimer);
                std::cout << "Contact supprime avec succes!\n";
                break;
            }
            case 3:
                std::cout << "\n******** AFFICHAGE DES LISTES DE CONTACTS  ********\n" << std::endl ;
                gestionContacts.afficherListeContacts();
                break;
            case 4:{
                std::cout << "\n******** RECHERCHE DE CONTACT  ********\n" << std::endl ;
                std::string contactARechercher;
                std::cout << "\nNom du contact a rechercher: ";
                std::cin >> contactARechercher;
                gestionContacts.rechercherParNom(contactARechercher);

                break;

            }
            case 5:{
                std::cout << "\n******** TRIE DE CONTACT PAR NOM ********\n" << std::endl ;
                std::cout << "Trier par nom : ";
                gestionContacts.trierParNom();

                break;

            }
            case 6:{
                std::cout << "\n******** TRIE DE CONTACT PAR MAIL ********\n" << std::endl ;
                std::cout << "Trier par mail : ";
                gestionContacts.trierParEmail();

                break;

            }


            case 7:
                std::cout << "Au revoir!\n";
                break;

            default:
                std::cout << "Choix invalide. Veuillez reessayer.\n";
        }
    } while (choix != 7);

    return 0;
}
