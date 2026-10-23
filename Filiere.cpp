#include <iostream>
#include <algorithm>
#include "Filiere.hpp"

Filiere::Filiere(std::string nom)
    : nomFiliere(nom) {
}

Filiere::~Filiere() {
    for (auto* e : etudiants) {
        e->setFiliere(nullptr);
        delete e;
    }

    etudiants.clear();
}

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (e == nullptr) {
        return;
    }

    // Eviter une inscription en double
    if (std::find(etudiants.begin(),
                  etudiants.end(), e) != etudiants.end()) {
        return;
    }

    // Un etudiant ne peut avoir qu'une seule filiere
    if (e->getFiliere() != nullptr) {
        std::cout << "Etudiant deja inscrit." << std::endl;
        return;
    }

    etudiants.push_back(e);
    e->setFiliere(this);
}

void Filiere::retirerEtudiant(Etudiant* e) {
    auto it = std::find(etudiants.begin(),
                        etudiants.end(), e);

    if (it != etudiants.end()) {
        (*it)->setFiliere(nullptr);
        etudiants.erase(it);
    }
}

int Filiere::getNombreEtudiants() const {
    return static_cast<int>(etudiants.size());
}

void Filiere::afficherTous() const {
    std::cout << "Etudiants de la filiere "
              << nomFiliere << ":" << std::endl;

    for (const auto* e : etudiants) {
        std::cout << "  - " << e->getNom()
                  << " (Moyenne: "
                  << e->calculerMoyenne()
                  << ")" << std::endl;
    }
}
