//
// Created by Buiu on 22/08/2022.
//

#include "metEx19.h"
#include <iostream>

using namespace std;

void metEx19::lerNotas() {
    float n1, n2, n3;

    cout << "Informe o código do método de avaliação: ";
    cout << "1 - Média Aritmética";
    cout << "2 - Média Ponderada";
    cout << "3 - Média Harmônica";
    cin >> cod;
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;

    cout << "A média final é: " << calcMedia(n1,n2,n3);
}
float metEx19::calcMedia(float n1, float n2, float n3) {
    float media;

    switch (cod) {
        case 1:
            media = (n1+n2+n3)/3;
            break;
        case 2:
            media = ((n1*3)+(n2*3)+(n3*4))/(3+3+4);
            break;
        case 3:
            media = 3/((1/n1)+(1/n2)+(1/n3));
            break;
    }
    return media;
}
