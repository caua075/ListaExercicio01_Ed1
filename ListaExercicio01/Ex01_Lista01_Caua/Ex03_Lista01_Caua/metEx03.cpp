//
// Created by Buiu on 18/08/2022.
//

#include "metEx03.h"
#include <iostream>

using namespace std;

void metEx03::lerIdade() {
    int ano, mes, dia;

    cout << "Informe sua idade em anos: ";
    cin >> ano;
    cout << "Informe sua idade em meses: ";
    cin >> mes;
    cout << "Informe sua idade em dias: ";
    cin >> dia;

    cout << "Sua idade total em dias é: " << calIdade(ano, mes, dia);
}

int metEx03::calIdade(int ano, int mes, int dia) {
    int resp;

    resp = (ano*365)+(mes*30)+dia+(ano/4);

    return resp;
}
