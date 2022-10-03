//
// Created by Buiu on 18/08/2022.
//

#include "metEx07.h"
#include <iostream>

using namespace std;

void metEx07::lerDado() {
    float custo;

    cout << "Informe o custo de fabrica: R$";
    cin >> custo;

    cout << "O custo ao consumidor é: R$" << calcPreco(custo);
}
float metEx07::calcPreco(float custo) {
    float vlrFinal;

    vlrFinal = (custo*1.28)*1.45;

    return vlrFinal;
}