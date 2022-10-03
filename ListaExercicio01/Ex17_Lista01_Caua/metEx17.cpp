//
// Created by Buiu on 20/08/2022.
//

#include "metEx17.h"
#include <iostream>

using namespace std;

void metEx17::lerDados() {
    float p, alt;

    cout << "Digite H para homem / M para mulher: ";
    cin >> tipo;
    cout << endl << "Informe seu peso:";
    cin >> p;
    cout << "Informe sua altura:";
    cin >> alt;

    if(tipo == 'h'){
        cout << "O peso ideal para o homem é: " << calcPeso(p, alt);
    }
    else{
        cout << "O peso ideal para a mulher é: " << calcPeso(p, alt);
    }
}
float metEx17::calcPeso(float p, float alt) {
    float pesoIdeal;

    if(tipo == 'h'){
        pesoIdeal = (72.7*alt)-58;
    }
    else{
        pesoIdeal = (62.1*alt)-44.7;
    }
}
