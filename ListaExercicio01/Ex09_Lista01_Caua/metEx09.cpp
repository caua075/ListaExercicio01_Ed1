//
// Created by Buiu on 18/08/2022.
//

#include "metEx09.h"
#include <iostream>

using namespace std;

void metEx09::lerNota() {
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;

    cout << endl << "Média final é: " << calcMedia();

    if(calcMedia() >= 6){
        cout << endl << "Voce esta Aprovado";
    }
    else{
        cout << endl << "Voce esta Reprovado";
    }
}
float metEx09::calcMedia() {
    float media;

    media = (n1+n2+n3)/3;

    return media;
}