#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    /*
        1. Modification des �l�ments :
            � Cr�ez un vector de nombres.
            � Utilisez des it�rateurs pour doubler la valeur de chaque �l�ment.

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
        2. It�ration sur une Map :
            � Cr�ez un map avec des paires nom-�ge.
            � Utilisez un it�rateur pour afficher le nom de la personne la plus �g�e.

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
