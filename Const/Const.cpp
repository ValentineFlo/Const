// Const.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>




int main()
{
    const int a = 5; 
    // a = 2; Error la variable ne peut pas être modifier

    int b = 3;
    const int* valuecst = &b;
    // *valuecst = 1; Error, on ne peut pas modifier la valeur par le pointeur, mais on peut tj modifier b
    
    int c = 8;
    int* const ptrcst = &c;
    // ptrcst = &a; Error on ne peut pas le modifier on doit le déférencer
    *ptrcst = 4;

// très important dans les classes

    std::cout << c;
}

// il esxiste constexpess que l'onverra plus tard