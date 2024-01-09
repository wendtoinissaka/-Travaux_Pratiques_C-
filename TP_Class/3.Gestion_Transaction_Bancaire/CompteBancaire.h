#ifndef COMPTEBANCAIRE_H_INCLUDED
#define COMPTEBANCAIRE_H_INCLUDED


#include <iostream>
#include <vector>

class Transaction {
public:
    enum Type {
        DEPOT,
        RETRAIT
    };

    Transaction(Type type, double montant);

    Type getType() const;
    double getMontant() const;

private:
    Type type;
    double montant;
};

class CompteBancaire {
public:
    CompteBancaire(std::string titulaire, double soldeInitial = 0.0);

    void deposer(double montant);
    void retirer(double montant);
    double getSolde() const;
    void afficherHistorique() const;
    std::string getTitulaire() const;
    // Nouvelle fonction pour afficher la liste des comptes avec leur index
    static void afficherListeComptes(const std::vector<CompteBancaire>& comptes);





private:
    std::string titulaire;
    double solde;
    std::vector<Transaction> transactions;
};



#endif // COMPTEBANCAIRE_H_INCLUDED
