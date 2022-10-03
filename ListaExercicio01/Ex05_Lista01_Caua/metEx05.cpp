//
// Created by Buiu on 18/08/2022.
//

#include "metEx05.h"
#include <iostream>

using namespace std;

void metEx05::lerNotas() {
    float n1, n2, n3;

    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;

    cout << "A média final é: " << calcNotas(n1, n2, n3);
}
float metEx05::calcNotas(float n1, float n2, float n3) {
    float media;

    media = ((n1*2)+(n2*3)+(n3*5))/(2+3+5);

    return media;
}