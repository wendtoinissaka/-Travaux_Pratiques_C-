#include <iostream>

using namespace std;



/*
   1. Exercice 1 : Gestion des Ventes
        Contexte :
        Une entreprise souhaite suivre les ventes quotidiennes de ses produits. Ils ont besoin d'un
        programme pour enregistrer les ventes et calculer la moyenne des ventes sur une période donnée.
        Tâches :
        • Enregistrement des Ventes :
        • Demandez à l'utilisateur le nombre de jours dont il souhaite enregistrer les
        ventes.
        • Utilisez un tableau pour stocker les ventes quotidiennes.
        • Calcul de la Moyenne des Ventes :
        • Calculez la moyenne des ventes sur la période donnée.
        • Affichez la moyenne des ventes.
        •
    Remarque : utiliser les vecteurs.
*/



int main() {
    int nombreEmployes;

    cout << "Veuillez entrer le nombre d'employes : ";
    cin >> nombreEmployes;

    if (nombreEmployes <= 0) {
        cout << "Le nombre d'employes doit etre un entier positif." << endl;
        return 1;
    }

    for (int i = 1; i <= nombreEmployes; ++i) {
        string nom;
        double salaire;

        cout << "Saisir le nom de l'employe " << i << " : ";
        cin >> nom;

        cout << "Saisir le salaire de l'employe " << i << " : ";
        cin >> salaire;

        cout << "Employe " << i << " - Nom: " << nom << ", Salaire: " << salaire << endl;
    }

    return 0;
}




/*
  2. Exercice 2 : Gestion des Employés
        Contexte :
        Une entreprise souhaite suivre les performances de ses employés en termes de ventes mensuelles.
        Ils ont besoin d'un programme pour stocker les performances de chaque employé.
        Tâches :
        • Enregistrement des Performances :
        • Demandez à l'utilisateur le nombre d'employés dont il souhaite enregistrer les
        performances.
        • Utilisez un tableau bidimensionnel pour stocker les ventes mensuelles de
        chaque employé.
        • Calcul des Performances Globales :
        • Calculez la performance totale de chaque employé sur l'année.
        • Affichez les performances individuelles et la moyenne des performances de
        tous les employés.
    Remarque : utiliser les vecteurs.
*/



int main() {
    int nombreEmployes;

    cout << "Veuillez entrer le nombre d'employes : ";
    cin >> nombreEmployes;

    if (nombreEmployes <= 0) {
        cout << "Le nombre d'employes doit etre un entier positif." << endl;
        return 1;
    }

    for (int i = 1; i <= nombreEmployes; ++i) {
        string nom;
        double salaire;

        cout << "Saisir le nom de l'employe " << i << " : ";
        cin >> nom;

        cout << "Saisir le salaire de l'employe " << i << " : ";
        cin >> salaire;

        cout << "Employe " << i << " - Nom: " << nom << ", Salaire: " << salaire << endl;
    }

    return 0;
}

