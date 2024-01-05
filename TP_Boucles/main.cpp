#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
    I. Exercice 1: Calcul de la Somme
        Écrivez un programme en C++ qui calcule la somme des entiers de 1 à N, où N est saisi par
        l'utilisateur. Utilisez une boucle for
*/
/*
int main()
{
    cout << "\t \t I. Exercice 1: Calcul de la Somme" << endl << endl;

    int somme=0, nombre;

    cout << "Veuillez entrer un nombre entier : " << endl;
    cin >> nombre;
    for(int i=1; i<=nombre; i++){
        somme+=i;
    }
    cout << "La somme des entiers de 1 a " << nombre << " est " << somme << endl;
    return 0;
}*/


/*
    II. Exercice 2: Multiplication de Table
        Développez un programme qui demande à l'utilisateur de saisir un entier et affiche la table de
        multiplication de cet entier de 1 à 10. Utilisez une boucle for.
*/
/*
int main()
{
    cout << "\t \t II. Exercice 2: Multiplication de Table" << endl << endl;
    int nombre;

    cout << "Veuillez entrer un nombre entier pour calculer sa table de multiplication : " << endl;
    cin >> nombre;
    for(int i=1; i<=10; i++){
        cout << nombre << "x" << i << "=" << nombre*i << endl;
    }

    return 0;
}*/

/*
    III. Exercice 3: Calcul de la Moyenne
        Élaborez un programme qui demande à l'utilisateur de saisir des notes. Le programme doit
        calculer la moyenne de ces notes et l'afficher à l'écran. Utilisez une boucle while pour permettre à
        l'utilisateur d'entrer un nombre indéfini de notes, et utilisez une valeur spéciale pour terminer la
        saisie (par exemple, une note négative)
*/
/*
int main()
{
    cout << "\t \t III. Exercice 3: Calcul de la Moyenne" << endl << endl;
    vector<double> vecteurNotes;
    int nombre;
    double moyenne= 0.0;
    cout << "Veuillez entrer la premiere note\(entrer un nombre negatif pour arreter la saisie\) : " ;
    cin >> nombre;
    while(nombre >0){
        vecteurNotes.push_back(nombre);
        moyenne += vecteurNotes.back();
        cout << "Veuillez entrer la  note suivante\(entrer un nombre negatif pour arreter la saisie\) : " ;
        cin >> nombre;
    }
    moyenne /=vecteurNotes.size();
    cout << "La moyenne des " << vecteurNotes.size() << " notes saisies est : " << moyenne;
    return 0;
}*/

/*
    IV. Exercice 4: Recherche d'Éléments
        Écrivez un programme qui recherche un élément spécifique dans un tableau d'entiers.
        L'utilisateur doit saisir l'élément à rechercher, et le programme doit parcourir le tableau pour trouver
        et afficher l'index de la première occurrence de cet élément. Utilisez une boucle do-while pour
        permettre à l'utilisateur de rechercher plusieurs éléments jusqu'à ce qu'il décide d'arrêter.

*/



/*
int main() {
    const int tailleTableau = 5;
    int monTableau[tailleTableau] = {10, 25, 15, 30, 20};
    int elementRecherche;
    bool elementTrouve;

    do {
        // Demander à l'utilisateur d'entrer l'élément à rechercher
        std::cout << "Entrez l'element a rechercher (entrez -1 pour arreter) : ";
        std::cin >> elementRecherche;

        // Vérifier si l'utilisateur souhaite arrêter la recherche
        if (elementRecherche == -1) {
            break;
        }

        // Recherche de l'élément dans le tableau
        elementTrouve = false;

        for (int i = 0; i < tailleTableau; ++i) {
            if (monTableau[i] == elementRecherche) {
                std::cout << "Element trouve a l'index " << i << std::endl;
                elementTrouve = true;
                break; // On a trouvé l'élément, on peut sortir de la boucle
            }
        }

        if (!elementTrouve) {
            std::cout << "Element non trouve dans le tableau." << std::endl;
        }

    } while (true);

    std::cout << "Programme termine." << std::endl;

    return 0;
}*/


/*
#include <iostream>

using namespace std;

int main() {
    cout << "\t \t IV. Exercice 4: Recherche d'Éléments" << endl << endl;
    int tableauxEntier[] = {1, 2, 5, 8, 8, 99};
    int nombre, position = -1;

    do {
        cout << "Veuillez entrer le nombre recherche (entrer un nombre negatif pour arreter la recherche) : ";
        cin >> nombre;

        if (nombre < 0) {
            break;
        }

        position = -1;

        for (int i = 0; i < sizeof(tableauxEntier) / sizeof(tableauxEntier[0]); i++) {
            if (tableauxEntier[i] == nombre) {
                position = i;
                break; // On a trouvé l'élément, on peut sortir de la boucle
            }
        }

        if (position >= 0) {
            cout << "Le nombre " << nombre << " se trouve a la position : " << position << endl;
        } else {
            cout << "Le nombre " << nombre << " ne se trouve pas dans notre tableau." << endl;
        }

    } while (nombre >= 0);

    return 0;
}
*/


/*
    V. Exercice 5: Calcul Factoriel
        Développez un programme en C++ qui calcule le factoriel d'un nombre saisi par l'utilisateur.
        Utilisez une boucle for pour effectuer le calcul.
*/

/*
int main() {
    int nombre;
    long factoriel = 1;
    cout << "Veuillez entrer un nombre pour calculer son factoriel : ";
    cin >> nombre;
    if (nombre < 0) {
        cout << "Le factoriel n'est défini que pour des entiers non négatifs." << endl;
        return 1;
    }
    for (int i = 1; i <= nombre; ++i) {
        factoriel *= i;
    }
    cout << "Le factoriel de " << nombre << " est : " << factoriel << endl;

    return 0;
}*/


/*
    VI. Exercice 6: Gestion d'Employés
        Créez un programme de gestion d'employés où vous demandez à l'utilisateur de saisir le
        nombre d'employés, puis pour chaque employé, demandez son nom et son salaire. Ensuite, affichez
        le nom et le salaire de chaque employé. Utilisez une boucle for pour itérer à travers les employés.
*/

using namespace std;

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






