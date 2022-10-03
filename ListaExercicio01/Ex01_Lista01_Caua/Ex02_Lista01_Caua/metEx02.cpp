//
// Created by Buiu on 18/08/2022.
//

#include "metEx02.h"
#include <iostream>
#include <cmath>

using namespace std;

void metEx02::lerNumeros() {
    float n1, n2, n3;

    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    cout << "Informe o terceiro número: ";
    cin >> n3;

    cout << "O resultado é: " << calcNumero(n1, n2, n3);
}
float metEx02::calcNumero(float n1, float n2, float n3) {
    float r, s;
    float d;

    r = pow((n1+n2),2);
    s = pow((n2+n3),2);

    d = (r+s)/2;

    return d;
}