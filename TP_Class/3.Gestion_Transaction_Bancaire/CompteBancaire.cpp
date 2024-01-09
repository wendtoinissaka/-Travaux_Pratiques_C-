#include "CompteBancaire.h"
#include <string>
Transaction::Transaction(Type type, double montant) : type(type), montant(montant) {}

Transaction::Type Transaction::getType() const {
    return type;
}

double Transaction::getMontant() const {
    return montant;
}

CompteBancaire::CompteBancaire(std::string titulaire, double soldeInitial)
    : titulaire(titulaire), solde(soldeInitial) {}

void CompteBancaire::deposer(double montant) {
    solde += montant;
    transactions.push_back(Transaction(Transaction::DEPOT, montant));
}

void CompteBancaire::retirer(double montant) {
    if (solde >= montant) {
        solde -= montant;
        transactions.push_back(Transaction(Transaction::RETRAIT, montant));
    } else {
        std::cout << "Solde insuffisant." << std::endl;
    }
}

double CompteBancaire::getSolde() const {
    return solde;
}

void CompteBancaire::afficherHistorique() const {
    std::cout << "Historique des transactions pour le compte de " << titulaire << " : \n";
    for (const Transaction& transaction : transactions) {
        std::cout << (transaction.getType() == Transaction::DEPOT ? "Depot : " : "Retrait : ")
                  << transaction.getMontant() << std::endl;
    }
    std::cout << "Solde actuel : " << solde << std::endl;
}


std::string CompteBancaire::getTitulaire() const {
    return titulaire;
}


void CompteBancaire::afficherListeComptes(const std::vector<CompteBancaire>& comptes) {
    std::cout << "Liste des comptes :\n";
    for (size_t i = 0; i < comptes.size(); ++i) {
        std::cout << i << ". Titulaire : " << comptes[i].getTitulaire() << ", Solde : " << comptes[i].getSolde() << std::endl;
    }
}
