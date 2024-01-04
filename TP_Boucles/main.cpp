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

int main()
{
    cout << "\t \t IV. Exercice 4: Recherche d'Éléments" << endl << endl;
    int tableauxEntier[10] = {1,2,3,4,5,6,7,8,9,10};
    int nombre, position=-1;
    double moyenne= 0.0;
    cout << "Veuillez entrer le nombre recherche : " ;
    cin >> nombre;
    while(nombre >0){
        for(int i=0; i<sizeof(tableauxEntier)/sizeof(tableauxEntier[0]); i++ ){
            if (tableauxEntier[i]== nombre){
                    position =i;
            }else{
                position = -1;
            }

        if (position >=0 ){
                cout << "Le nombre "<< nombre << " se trouve a la position: " << position << endl;
            }else if(position ==-1){

                cout << "Le nombre "<< nombre << " ne se trouve pas dans notre tableaux" << endl;
            }
        cout << endl << "Veuillez entrer le nombre recherche note\(entrer un nombre negatif pour arreter la recherche\) : " ;
        cin >> nombre;

    return 0;
    }
}
}


