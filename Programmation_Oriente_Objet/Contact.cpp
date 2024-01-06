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















//    //
//    // Contact.cpp
//    // Contact
//    //
//    // Create by WENDTOIN ISSAKA OUEDRAOGO on 05/01/2024
//    //
//
//
//
//    #include <iostream>
//    #include <vector>
//    #include <string>
//
//    using namespace std;
//
//
//
//
//
//
//
//
//
//    class Contact {
//
//        private:
//
//            std::string nom;
//            std::string numeroTelephone;
//            std::string email;
//            std::vector<Contact> contacts;
//
//        public:
//            // Constructeur
//            Contact(){
//            }
//            Contact( std::string nom, std::string numeroTelephone, std::string email): nom(nom), numeroTelephone(numeroTelephone), email(email){
//
//            }
//
//            // Getters
//            std::string getNom(){
//                return this->nom;
//            }
//
//            std::string getNumeroTelephone(){
//                return this->numeroTelephone;
//            }
//            std::string getEmail(){
//                return this->email;
//            }
//
//
//            // Setters
//            void setPhoneNumber(std::string nouvelleNumeroTelephone){
//                this-> numeroTelephone = nouvelleNumeroTelephone;
//            }
//
//            void setNom(std::string nouvelleNom){
//                this-> nom = nouvelleNom;
//            }
//            void setEmail(std::string nouvelleEmail){
//                this-> email = nouvelleEmail;
//            }
//
//
//            // Les gestionnalités demandés
//
//            // Ajouter un contact
//            void addContact(Contact contact) {
//                contacts.push_back(contact);
//            }
//
//            void ajouterNouveauContact(){
//            string nom, numero, mail;
//            acout << "******** AJOUT DE NOUVEAU CONTACT  ********\n" ;
//            cout << "Entrer le nom : "  ;
//            std::getline(cin, nom) ;
//            cout << "Entrer le numero : "  ;
//            getline(cin, numero) ;
//            cout << "Entrer le mail : "  ;
//            getline(cin, mail) ;
//
//            Contact contact(nom, numero, mail);
//            this->contacts.push_back(contact);
//
////            this->accueilContact;
//
//            }
//
//
//
//
//            // Supprimer un contact par nom
//    //        void removeContact(const std::string& name) {
//    //            contacts.erase(std::remove_if(contacts.begin(), contacts.end(),
//    //                                          [&](const Contact& c) { return c.getName() == name; }),
//    //                           contacts.end());
//    //
//    //        }
//
//
//
//
//
//            // Mettre à jour les informations d'un contact
//    //        void updateContact(const std::string& name, const std::string& newPhoneNumber, const std::string& newEmail) {
//    //            auto it = std::find_if(contacts.begin(), contacts.end(), [&](const Contact& c) { return c.getName() == name; });
//    //            if (it != contacts.end()) {
//    //                it->setPhoneNumber(newPhoneNumber);
//    //                it->setEmail(newEmail);
//    //            }
//    //        }
//
//            void quitter(){
//                cout <<'yes';
//            }
//
//
//
//
//
//
//
//
//
//
//
//
//
//    };
//
//
//
//
//
//
//
//
//
//
//    /*
//
//
//    #include <iostream>
//    #include <vector>
//    #include <algorithm>
//
//    class Contact {
//    public:
//        // Constructeur
//        Contact(const std::string& name, const std::string& phoneNumber, const std::string& email)
//            : name(name), phoneNumber(phoneNumber), email(email) {}
//
//        // Getters
//        std::string getName() const { return name; }
//        std::string getPhoneNumber() const { return phoneNumber; }
//        std::string getEmail() const { return email; }
//
//        // Setters
//        void setPhoneNumber(const std::string& newPhoneNumber) { phoneNumber = newPhoneNumber; }
//        void setEmail(const std::string& newEmail) { email = newEmail; }
//
//    private:
//        std::string name;
//        std::string phoneNumber;
//        std::string email;
//    };
//
//    class ContactManager {
//    public:
//        // Ajouter un contact
//        void addContact(const Contact& contact) {
//            contacts.push_back(contact);
//        }
//
//        // Supprimer un contact par nom
//        void removeContact(const std::string& name) {
//            contacts.erase(std::remove_if(contacts.begin(), contacts.end(),
//                                          [&](const Contact& c) { return c.getName() == name; }),
//                           contacts.end());
//        }
//
//        // Mettre à jour les informations d'un contact
//        void updateContact(const std::string& name, const std::string& newPhoneNumber, const std::string& newEmail) {
//            auto it = std::find_if(contacts.begin(), contacts.end(), [&](const Contact& c) { return c.getName() == name; });
//            if (it != contacts.end()) {
//                it->setPhoneNumber(newPhoneNumber);
//                it->setEmail(newEmail);
//            }
//        }
//
//        // Afficher la liste des contacts
//        void displayContacts() const {
//            for (const auto& contact : contacts) {
//                std::cout << "Name: " << contact.getName() << ", Phone: " << contact.getPhoneNumber()
//                          << ", Email: " << contact.getEmail() << std::endl;
//            }
//        }
//
//    private:
//        std::vector<Contact> contacts;
//    };
//
//    int main() {
//        ContactManager contactManager;
//
//        // Exemples d'utilisation
//        contactManager.addContact(Contact("John Doe", "123456789", "john.doe@example.com"));
//        contactManager.addContact(Contact("Jane Smith", "987654321", "jane.smith@example.com"));
//
//        std::cout << "Contacts avant la mise à jour :" << std::endl;
//        contactManager.displayContacts();
//
//        // Mettre à jour les informations du contact "John Doe"
//        contactManager.updateContact("John Doe", "999999999", "john.updated@example.com");
//
//        std::cout << "\nContacts après la mise à jour :" << std::endl;
//        contactManager.displayContacts();
//
//        // Supprimer le contact "Jane Smith"
//        contactManager.removeContact("Jane Smith");
//
//        std::cout << "\nContacts après la suppression :" << std::endl;
//        contactManager.displayContacts();
//
//        return 0;
//    }
//
//    */
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
