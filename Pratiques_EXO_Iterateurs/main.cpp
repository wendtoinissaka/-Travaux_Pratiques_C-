#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    /*
        1. Modification des Éléments :
            • Créez un vector de nombres.
            • Utilisez des itérateurs pour doubler la valeur de chaque élément.

    */
/*
    vector<double> vecteur{1, 14, 15, 78, 99,10};
    for(vector<double>::iterator it = vecteur.begin(); it !=vecteur.end(); it++){
        *it *=2;
    }

    for(vector<double>::iterator it = vecteur.begin(); it !=vecteur.end(); it++){
        cout << *it << endl;
    }

*/




    /*
        2. Itération sur une Map :
            • Créez un map avec des paires nom-âge.
            • Utilisez un itérateur pour afficher le nom de la personne la plus âgée.

    */

    map<std::string, int> nomAge;
    nomAge["Saoudatou"]= 24;
    nomAge["Ismael"]= 28;
    nomAge["Landry"]= 22;
    nomAge["Djamila"]= 17;
    nomAge["Omar"]= 37;
    map<std::string, int>::iterator plusAge = nomAge.begin();
    for(map<std::string, int>::iterator it = nomAge.begin(); it != nomAge.end(); it++){
        if(it->second > plusAge->second){
            plusAge = it;
        }
    }
    cout << "La personne la plus agee est : " << plusAge->first  << endl;

    return 0;
}
