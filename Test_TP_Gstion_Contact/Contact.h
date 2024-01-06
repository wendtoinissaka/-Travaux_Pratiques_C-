#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <iostream>
class Contact {
public:
    // Constructeur
    Contact(const std::string& nom, const std::string& numero, const std::string& email);

    // M�thodes pour acc�der aux informations du contact
    std::string getNom() const;
    std::string getNumero() const;
    std::string getEmail() const;

    // M�thode pour afficher les d�tails du contact
    void afficherDetails() const;

private:
    std::string nom;
    std::string numero;
    std::string email;
};



#endif // CONTACT_H_INCLUDED
