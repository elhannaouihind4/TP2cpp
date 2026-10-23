#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Filiere;

class Etudiant {
private:
    std::string nom;
    std::string cin;
    double note1, note2, note3;
    Filiere* filiere;

public:
    Etudiant(std::string n, std::string c,
             double a, double b, double d);

    std::string getNom() const;
    std::string getCin() const;

    double calculerMoyenne() const;

    void setFiliere(Filiere* f);
    Filiere* getFiliere() const;
};

#endif
