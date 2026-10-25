// Complexx.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex* c1 = new Complex(2, 5);
    Complex c2(2, 3);
    c1->afficher();
    c2.afficher();
    Complex* c3 = new Complex(*c1 + c2);

    double a = 5.5;
    double b = 4.0;
    double d = 2.0;
    Complex C4 = *c3 + a;
    Complex C5 = C4 - b;
    Complex* C6 = new Complex(*c3 - *c1);
    Complex* C7 = new Complex(*C6 * *c1);
    Complex C8(C5 * d);
    Complex C9(*C6 / *c1);
    double e = 5.0;
    Complex C10(C9 / e);
    c3->afficher();
    C4.afficher();
    C5.afficher();
    C6->afficher();
    C7->afficher();
    C8.afficher();
    C9.afficher();
    C10.afficher();


    cout << boolalpha;
    if (*c1 == *C7) {
        cout << " true " << endl;
    }
    else {
        cout << " false" << endl;
    }


    if (C5 != *C6) {
        cout << " true " << endl;
    }
    else {
        cout << " false" << endl;
    }


    if (c2 < C9) {
        cout << " true " << endl;
    }
    else {
        cout << " false" << endl;
    }



    if (*c3 > C8) {
        cout << " true " << endl;
    }
    else {
        cout << " false" << endl;
    }

    delete c1;
    c1 = nullptr;
    delete c3;
    c3 = nullptr;
    delete C6;
    C6 = nullptr;
    delete C7;
    C7 = nullptr;

    

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage 

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
