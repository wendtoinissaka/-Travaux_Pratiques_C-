#include "GestionContact.h"
#include <algorithm>

void GestionContacts::ajouterContact(const Contact& contact) {
    contacts.push_back(contact);
}

void GestionContacts::supprimerContact(const std::string& nom) {
    auto it = std::remove_if(contacts.begin(), contacts.end(), [&nom](const Contact& c) {
        return c.getNom() == nom;
    });

    contacts.erase(it, contacts.end());
}

void GestionContacts::afficherListeContacts() const {
    std::cout << "Liste des contacts:\n\n";
    for (const auto& contact : contacts) {
        contact.afficherDetails();
        std::cout << "------------------------\n";
    }
}

void GestionContacts::rechercherParNom(const std::string& nom) const {
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

void GestionContacts::trierParNom() {
    std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
        return a.getNom() < b.getNom();
    });

    for (const auto& contact : contacts) {
        contact.afficherDetails();
        std::cout << "------------------------\n";
    }
    std::cout << "Contacts tries par nom.\n";
}

void GestionContacts::trierParEmail() {
    std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
        return a.getEmail() < b.getEmail();
    });

    for (const auto& contact : contacts) {
        contact.afficherDetails();
        std::cout << "------------------------\n";
    }
    std::cout << "Contacts tries par email.\n";
}
