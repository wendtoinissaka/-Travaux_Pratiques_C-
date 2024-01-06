#include "Contact.h"

Contact::Contact(const std::string& nom, const std::string& numero, const std::string& email)
    : nom(nom), numero(numero), email(email) {}

std::string Contact::getNom() const { return nom; }
std::string Contact::getNumero() const { return numero; }
std::string Contact::getEmail() const { return email; }

void Contact::afficherDetails() const {
    std::cout << "Nom: " << nom << "\nNumero de telephone: " << numero << "\nEmail: " << email << "\n";
}
