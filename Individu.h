/**
 * @file Individu.h
 * @author your name (you@domain.com)
 * @brief  spécifie la classe individu
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief la classe Individu permet de représenter une personne à partir de son nom et de son prénom
 * 
 * @details Au delà de décrire un Inidividu par son nom et son prénom, la classe Individu
 * permet de représenter également la Voiture qu'il conduit.
 * 
 * La Voiture conduite par l'Individu
 * 
 * @warning un Individu peut conduire au plus une Voiture
 * 
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;  
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;   
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partir de son nom (premier paramètre)
     * et de son prénom (deuxième paramètre)
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return une chaine de caractère de la forme nom prénom 
     * 
     * @todo ajouter un param permettant de choisir un affichage de type nom prénom ou prénom nom
     * 
     * @bug un espace de trop entre le nom et le prénom
     */
    string toString();  

    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la Voiture conduite par l'Individu
     * 
     * @param [in] voiture reprèsente un pointeur vers l'objet Voiture par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H