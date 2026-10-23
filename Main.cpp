#include <iostream>
#include "Etudiant.hpp"
#include "Filiere.hpp"

int main() {
    // Creation de la filiere
    Filiere* f1 = new Filiere("Informatique");

    // Creation des etudiants
    Etudiant* e1 = new Etudiant("Alice", "123", 15, 16, 17);
    Etudiant* e2 = new Etudiant("Bob", "456", 10, 12, 14);
    Etudiant* e3 = new Etudiant("Charlie", "789", 18, 19, 20);

    // Inscription des etudiants
    f1->inscrireEtudiant(e1);
    f1->inscrireEtudiant(e2);
    f1->inscrireEtudiant(e3);

    // Affichage de tous les etudiants
    f1->afficherTous();

    std::cout << "Nombre d'etudiants : "
              << f1->getNombreEtudiants()
              << std::endl;

    // Retrait de Bob
    f1->retirerEtudiant(e2);

    // Bob n'appartient plus a la liste
    delete e2;

    std::cout << "\nApres retrait de Bob :" << std::endl;

    f1->afficherTous();

    // Nettoyage : supprime Alice et Charlie
    delete f1;

    return 0;
}
