#include "CompteBancaire.h"
#include "CompteBancaire.cpp"

int main() {
        std::cout << "\n**********Create by WENDTOIN ISSAKA OUEDRAOGO on 09/01/2024 ************\n";
    int choix;
    std::cout << "\n********** Gestionnaire de Transactions Bancaires ************\n";
    std::vector<CompteBancaire> comptes;  // Vector pour stocker plusieurs comptes

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Creer un nouveau compte\n";
        std::cout << "2. Effectuer une op�ration sur un compte\n";
        std::cout << "3. Afficher l'historique d'un compte\n";
        std::cout << "4. Afficher le solde d'un compte\n";
        std::cout << "5. Afficher l'historique de tous les comptes\n";
        std::cout << "6. Afficher la liste des comptes\n";
        std::cout << "7. Quitter\n";
                std::cout << "\n**********MERCI POUR VOTRE CONFIANCE A LA CAPACITEE ****************\n" << std::endl;
        std::cout << "Choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1: {
                std::cout << "\n******** CREATION D'UN NOUVEAU COMPTE ********\n";
                std::string titulaire;
                double soldeInitial;
                std::cout << "Titulaire: ";
                std::cin >> titulaire;
                std::cout << "Solde initial: ";
                std::cin >> soldeInitial;
                comptes.push_back(CompteBancaire(titulaire, soldeInitial));
                std::cout << "Compte cr�� avec succ�s!\n";
                break;
            }
            case 2: {
                std::cout << "\n******** OPERATION SUR UN COMPTE ********\n";
                // Demandez � l'utilisateur de s�lectionner un compte par son index
                std::cout << "S�lectionnez un compte (index) : ";
                int index;
                std::cin >> index;
                if (index >= 0 && index < comptes.size()) {
                    CompteBancaire& compte = comptes[index];

                    // Sous-menu pour les op�rations sur le compte s�lectionn�
                    int choixOperation;
                    do {
                        std::cout << "\nOp�rations sur le compte de " << compte.getTitulaire() << ":\n";
                        std::cout << "1. D�p�t\n";
                        std::cout << "2. Retrait\n";
                        std::cout << "3. Retour au menu principal\n";
                        std::cout << "Choix : ";
                        std::cin >> choixOperation;

                        switch (choixOperation) {
                            case 1: {
                                double montant;
                                std::cout << "Montant du d�p�t : ";
                                std::cin >> montant;
                                compte.deposer(montant);
                                std::cout << "D�p�t effectu� avec succ�s!\n";
                                break;
                            }
                            case 2: {
                                double montant;
                                std::cout << "Montant du retrait : ";
                                std::cin >> montant;
                                compte.retirer(montant);
                                std::cout << "Retrait effectu� avec succ�s!\n";
                                break;
                            }
                        }
                    } while (choixOperation != 3);
                } else {
                    std::cout << "Index de compte invalide.\n";
                }
                break;
            }
            case 3: {
                std::cout << "\n******** AFFICHAGE DE L'HISTORIQUE D'UN COMPTE ********\n";
                // Demandez � l'utilisateur de s�lectionner un compte par son index
                std::cout << "S�lectionnez un compte (index) : ";
                int index;
                std::cin >> index;
                if (index >= 0 && index < comptes.size()) {
                    const CompteBancaire& compte = comptes[index];
                    compte.afficherHistorique();
                } else {
                    std::cout << "Index de compte invalide.\n";
                }
                break;
            }
            case 4: {
                std::cout << "\n******** AFFICHAGE DU SOLDE D'UN COMPTE ********\n";
                // Demandez � l'utilisateur de s�lectionner un compte par son index
                std::cout << "S�lectionnez un compte (index) : ";
                int index;
                std::cin >> index;
                if (index >= 0 && index < comptes.size()) {
                    const CompteBancaire& compte = comptes[index];
                    std::cout << "Solde du compte de " << compte.getTitulaire() << " : " << compte.getSolde() << std::endl;
                } else {
                    std::cout << "Index de compte invalide.\n";
                }
                break;
            }
            case 5: {
                std::cout << "\n******** AFFICHAGE DE L'HISTORIQUE DE TOUS LES COMPTES ********\n";
                for (const CompteBancaire& compte : comptes) {
                    compte.afficherHistorique();
                    std::cout << "---------------------------\n";
                }
                break;
            }
            case 6: {
            std::cout << "\n******** AFFICHAGE DE LA LISTE DES COMPTES ********\n";
            CompteBancaire::afficherListeComptes(comptes);
            break;
        }
        }
    } while (choix != 7);

    std::cout << "Merci pour votre utilisation du gestionnaire de transactions bancaires.\n";

    return 0;
}
