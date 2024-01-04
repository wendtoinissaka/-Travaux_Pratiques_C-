#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
    I. Exercice 1: Calcul de la Somme
        �crivez un programme en C++ qui calcule la somme des entiers de 1 � N, o� N est saisi par
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
        D�veloppez un programme qui demande � l'utilisateur de saisir un entier et affiche la table de
        multiplication de cet entier de 1 � 10. Utilisez une boucle for.
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
        �laborez un programme qui demande � l'utilisateur de saisir des notes. Le programme doit
        calculer la moyenne de ces notes et l'afficher � l'�cran. Utilisez une boucle while pour permettre �
        l'utilisateur d'entrer un nombre ind�fini de notes, et utilisez une valeur sp�ciale pour terminer la
        saisie (par exemple, une note n�gative)
*/

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
}





