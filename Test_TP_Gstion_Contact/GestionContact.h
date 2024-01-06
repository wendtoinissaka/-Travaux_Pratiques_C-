#ifndef GESTIONCONTACT_H_INCLUDED
#define GESTIONCONTACT_H_INCLUDED


#include "Contact.h"
#include <vector>

class GestionContacts {
public:
    // Méthodes pour gérer les contacts
    void ajouterContact(const Contact& contact);
    void supprimerContact(const std::string& nom);
    void afficherListeContacts() const;
    void rechercherParNom(const std::string& nom) const;
    void trierParNom();
    void trierParEmail();

private:
    std::vector<Contact> contacts;
};




#endif // GESTIONCONTACT_H_INCLUDED
