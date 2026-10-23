#include "Etudiant.hpp"

Etudiant::Etudiant(std::string n, std::string c,
                   double a, double b, double d)
    : nom(n), cin(c),
      note1(a), note2(b), note3(d),
      filiere(nullptr) {
}

std::string Etudiant::getNom() const {
    return nom;
}

std::string Etudiant::getCin() const {
    return cin;
}

double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}

void Etudiant::setFiliere(Filiere* f) {
    filiere = f;
}

Filiere* Etudiant::getFiliere() const {
    return filiere;
}
