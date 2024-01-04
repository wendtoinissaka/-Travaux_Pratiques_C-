#include <iostream>
#include <string>
using namespace std;

/*
    1. Utilisation de if simple :
        �crivez un programme qui demande � l'utilisateur un nombre et affiche "Le nombre est positif"
        s'il est sup�rieur � z�ro, sinon affiche "Le nombre est n�gatif ou nul".
*/
/*
int main()
{
    cout << "\t \t 1. Utilisation de if simple :" << endl << endl;

    cout << "Veuillez entrer un nombre : " << endl;
    float nombre;
    cin >> nombre;
    if (nombre > 0){
        cout << "Le nombre est positif!  " << endl;
    }else{
        cout << "Le nombre est negatif ou nul!" << endl;
    }
    return 0;
} */


/*
    2. Utilisation de if...else :
        Cr�ez un programme qui v�rifie si un nombre donn� par l'utilisateur est pair ou impair, et
        affiche le r�sultat correspondant
*/
/*
int main()
{
    cout << "\t \t 2. Utilisation de if...else :" << endl << endl;
    cout << "Veuillez entrer un nombre : " << endl;
    float nombre;
    cin >> nombre;
    if (nombre % 2 == 0){
        cout << "Le nombre est pair!  " << endl;
    }else{
        cout << "Le nombre est impair!" << endl;
    }
    return 0;
} */


/*
    3. Utilisation de if...else if...else :
        �crivez un programme qui prend en entr�e un score et attribue une note en fonction de
        l'�chelle de notation :
        � Si le score est sup�rieur ou �gal � 90, attribuez la note 'A'.
        � Si le score est entre 80 et 89, attribuez la note 'B'.
        � Si le score est entre 70 et 79, attribuez la note 'C'.
        � Si le score est entre 60 et 69, attribuez la note 'D'.
        � Sinon, attribuez la note 'E'.
*/
/*
int main()
{
    cout << "\t \t 3. Utilisation de if...else if...else :" << endl << endl;
    cout << "Veuillez entrer le score : " << endl;
    float score;
    cin >> score;
    if (score >=60 and score <=69){
        cout << "Le note est : D  " << endl;
    }else if(score >=70 and score<=79){
        cout << "Le note est : C  " << endl;
    }else if(score >=80 and score<=89){
        cout << "Le note est : B  " << endl;
    }else if(score >=90 ){
        cout << "Le note est : A  " << endl;
    }else{
        cout << "Le note est : E  " << endl;
    }
    return 0;
}*/


/*
    4. Utilisation de switch :
        Cr�ez un programme qui prend un caract�re en entr�e et d�termine s'il s'agit d'une voyelle ou
        d'une consonne. Utilisez une instruction switch pour cela
*/

/*
int main()
{
    cout << "\t \t 4. Utilisation de switch :" << endl << endl;
    cout << "Veuillez entrer le caract�re : " << endl;
    char caractere;
    cin >> caractere;
    switch(caractere){
    case 'a' :
    case 'u' :
    case 'i' :
    case 'e' :
    case 'y' :
    case 'o' :
        cout << "Il s'agit d'une voyelle!" << endl;
        break;
    default :
        cout << "Il s'agit d'une consonne!" << endl;
    }
    return 0;
}*/








/*
    5. Combinaison d'instructions conditionnelles :
        �crivez un programme qui demande � l'utilisateur trois nombres et d�termine le plus grand
        parmi eux en utilisant des instructions conditionnelles (if, else if, else).
*/

/*
int main() {
    cout << "\t \t 5. Combinaison d'instructions conditionnelles :" << endl << endl;

    double num1, num2, num3;
    cout << "Entrez le premier nombre : ";
    cin >> num1;

    cout << "Entrez le deuxi�me nombre : ";
    cin >> num2;

    cout << "Entrez le troisi�me nombre : ";
    cin >> num3;

    if (num1 >= num2 and num1 >= num3) {
        cout << "Le plus grand nombre est : " << num1 << endl;
    } else if (num2 >= num1 and num2 >= num3) {
        cout << "Le plus grand nombre est : " << num2 << endl;
    } else {
        cout << "Le plus grand nombre est : " << num3 << endl;
    }

    return 0;
}*/




/*
    6. Validation des entr�es :
        �crivez un programme qui demande � l'utilisateur d'entrer son �ge. V�rifiez si l'�ge est valide
        (c'est-�-dire s'il est compris entre 0 et 120 ans) en utilisant des instructions conditionnelles.
*/

/*
int main() {
    cout << "\t \t 6. Validation des entr�es :" << endl << endl;

    int age;
    cout << "Entrez votre age : ";
    cin >> age;

    if (age >= 0 && age <= 120) {
        cout << "L'age que vous avez saisi est valide." << endl;
    } else {
        cout << "L'age que vous avez saisi n'est pas valide." << endl;
    }

    return 0;
}*/



/*
    7. V�rification de la Majorit� :
        D�veloppez un programme qui demande � l'utilisateur d'entrer son ann�e de naissance et
        d�termine s'il est majeur ou mineur en fonction de la diff�rence entre l'ann�e actuelle et l'ann�e de
        naissance.
        Ces exercices sont con�us pour aider les �tudiants � appliquer les concepts de base du C++ �
        des situations pratiques, comme celles rencontr�es dans un contexte professionnel. Ils touchent des
        domaines tels que la gestion de donn�es, les calculs financiers et la validation d'informations.
*/

/*
int main() {
    cout << "\t \t 7. V�rification de la Majorit� :" << endl << endl;

    // D�claration de la variable
    int anneeNaissance;

    // Demander � l'utilisateur d'entrer son ann�e de naissance
    cout << "Entrez votre annee de naissance : ";
    cin >> anneeNaissance;
    int anneeActuelle = 2024;
    int age = anneeActuelle - anneeNaissance;
    if (age >= 18) {
        cout << age << ",Vous etes majeur." << endl;
    } else {
        cout << age << ",Vous etes mineur." << endl;
    }

    return 0;
}*/


/*
    8. Syst�me de Livraison
        Cr�ez un programme qui simule un syst�me de livraison. Demandez � l'utilisateur d'entrer la
        destination de livraison et affichez le d�lai de livraison estim� en fonction de la destination. Par
        exemple, pour les livraisons nationales, le d�lai peut �tre de 2 jours ouvrables, et pour les livraisons
        internationales, de 5 jours ouvrables.
*/



/*
int main() {
    cout << "\t \t 8. Syst�me de Livraison " << endl << endl;

    string destination;

    cout << "Entrez la destination de votre livraison (natinale / internationale) : ";
    getline(cin, destination);


    int delaiLivraison;

    if (destination == "nationale") {
        delaiLivraison = 2; // Livraison nationale en 2 jours ouvrables
    } else if (destination == "internationale") {
        delaiLivraison = 5; // Livraison internationale en 5 jours ouvrables
    } else {
        cout << "Destination non prise en charge." << endl;
        return 1;
    }

    cout << "Le delai de livraison estime pour une livraison  " << destination << " est de "
              << delaiLivraison << " jours ouvrables." << endl;

    return 0;
}*/


/*
    9. Syst�me de Recommandation
        �crivez un programme qui recommande diff�rents produits � un utilisateur en fonction de son
        historique d'achats. Utilisez des instructions conditionnelles pour analyser les achats pr�c�dents et
        recommander des produits similaires ou compl�mentaires.
*/



int main() {
    cout << "\t \t 9. Syst�me de Recommandation" << endl << endl;

    string categorieAchatPrecedent;
    cout << "Entrez votre derniere categorie d'achat : ";
    getline(cin, categorieAchatPrecedent);
    cout << "Recommandations de produits bas�es sur votre historique d'achats :" << endl;

    if (categorieAchatPrecedent == "Electronique") {
        cout << "- Produits recommandes dans la categorie Accessoires Electroniques." << endl;
    } else if (categorieAchatPrecedent == "Mode") {
        cout << "- Produits recommandes dans la categorie Chaussures ou Accessoires de Mode." << endl;
    } else if (categorieAchatPrecedent == "Maison") {
        cout << "- Produits recommandes dans la categorie Articles Menagers." << endl;
    } else {
        cout << "- Nous n'avons pas de recommandations pour cette categorie d'achat." << endl;
    }

    return 0;
}











