
#include <iostream>
#include <vector>
#include <algorithm>

class Contact {
public:
    // Constructeur
    Contact(const std::string& nom, const std::string& numero, const std::string& email)
        : nom(nom), numero(numero), email(email) {}

    // Méthodes pour accéder aux informations du contact
    std::string getNom() const { return nom; }
    std::string getNumero() const { return numero; }
    std::string getEmail() const { return email; }

    // Méthode pour afficher les détails du contact
    void afficherDetails() const {
        std::cout << "Nom: " << nom << "\nNumero de telephone: " << numero << "\nEmail: " << email << "\n";
    }

private:
    std::string nom;
    std::string numero;
    std::string email;
};

class GestionContacts {
public:
    // Méthodes pour gérer les contacts
    void ajouterContact(const Contact& contact) {
        contacts.push_back(contact);
    }

    void supprimerContact(const std::string& nom) {
        auto it = std::remove_if(contacts.begin(), contacts.end(), [&nom](const Contact& c) {
            return c.getNom() == nom;
        });

        contacts.erase(it, contacts.end());
    }

    void afficherListeContacts() const {
        std::cout << "Liste des contacts:\n\n";
        for (const auto& contact : contacts) {
            contact.afficherDetails();
            std::cout << "------------------------\n";
        }
    }

    // Méthode pour rechercher un contact par nom
    void rechercherParNom(const std::string& nom) const {
        auto it = std::find_if(contacts.begin(), contacts.end(), [&nom](const Contact& c) {
            return c.getNom() == nom;
        });

        if (it != contacts.end()) {
            std::cout << "Contact trouve:\n\n";
            it->afficherDetails();
        } else {
            std::cout << "Contact introuvable.\n";
        }
    }

    // Méthode pour trier les contacts par nom
    void trierParNom() {
        std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
            return a.getNom() < b.getNom();
        });

        for (const auto& contact : contacts) {
            contact.afficherDetails();
            std::cout << "------------------------\n";
        }
        std::cout << "Contacts tries par nom.\n";
    }

    // Méthode pour trier les contacts par e-mail
    void trierParEmail() {
        std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
            return a.getEmail() < b.getEmail();

        });

        for (const auto& contact : contacts) {
            contact.afficherDetails();
            std::cout << "------------------------\n";
        }
        std::cout << "Contacts tries par email.\n";
    }

private:
    std::vector<Contact> contacts;
};

int main() {
    GestionContacts gestionContacts;

    // Menu simple
    int choix;
    do {
        std::cout << "\n\nMenu:\n";
        std::cout << "1. Ajouter un contact\n";
        std::cout << "2. Supprimer un contact\n";
        std::cout << "3. Afficher la liste des contacts\n";
        std::cout << "4. Rechercher un contact par son nom\n";
        std::cout << "5. Trier par nom\n";
        std::cout << "6. Trier par mail\n";
        std::cout << "7. Quitter\n";
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



/*
int main() {
//    accueilContact;
    Contact contact;
//    contact.accueilContact();

  // ...



            cout << "\n************Gestionnaire de contacts d'entreprise ****************\n\n";

            cout << "1.Ajouter nouveaux Contacts" << endl;
            cout << "2.Supprimer des contacts existants" << endl;
            cout << "3.Mettre à jour les informations d'un contact" << endl;
            cout << "4.Afficher la liste des contacts" << endl;
            cout << "5.Recherche un contact" << endl;
            cout << "6.Trier les contacts" << endl;
            cout << "7.Quitter le programme!" << endl;
            cout << "\n****************MERCI POUR VOTRE CONFIANCE***********************\n" << endl;

            int choix;
            cin >> choix;
            switch (choix){
    //            case 1 :  Contact->ajouterNouveauConctact() ;break;
                case 1 :  contact.ajouterNouveauContact();;break;
                case 2 : cout << "supprimer des contacts existants" ;break;
                case 3 : cout << "fonctionallité 3" ;break;
                case 4 : cout << "fonctionallité 4 " ;break;
                case 5 : cout << "fonctionallité 6" ;break;
                case 6 : cout << "fonctionallité 7 " ;break;
    //            case 7 : cout << "fonctionallité 8 " ;break;
    //            case 7 : accueilContact;break;
                case 7 : exit(0);break;

    //            case 1 : Etudiant.enregistrerDBS();break;
    //            case 2 : Etudiant.enregistrerESI();break;
    //            case 3 : Etudiant.afficherDBS();break;
    //            case 4 : Etudiant.afficherESI();break;
    //            case 5 : Etudiant.accueilModification();break;
    //            case 6 : Etudiant.accueilSuppression();break;
    //            case 7 : Etudiant.incrementation1();break;
    //            case 8 : Etudiant.incrementationmMoitie();break;
    //            case 9 : Etudiant.affichageMoyenne();break;
    //            case 10 : Etudiant.accueilInfoMeilleurMath();break;
    //            case 11 : Contact::quitter();break;

  return 0;
}


}
*/
