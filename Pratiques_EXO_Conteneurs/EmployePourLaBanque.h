#ifndef EMPLOYEPOURLABANQUE_H
#define EMPLOYEPOURLABANQUE_H


class EmployePourLaBanque
{
    public:
        EmployePourLaBanque();
        virtual ~EmployePourLaBanque();

        std::string Getnom() { return nom; }
        void Setnom(std::string val) { nom = val; }
        int Getsalaire() { return salaire; }
        void Setsalaire(int val) { salaire = val; }
        std::string GetdateEmbauche() { return dateEmbauche; }
        void SetdateEmbauche(std::string val) { dateEmbauche = val; }

    protected:

    private:
        std::string nom;
        int salaire;
        std::string dateEmbauche;
};

#endif // EMPLOYEPOURLABANQUE_H
