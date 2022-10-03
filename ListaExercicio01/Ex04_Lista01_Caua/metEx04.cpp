//
// Created by Buiu on 18/08/2022.
//

#include "metEx04.h"
#include <iostream>
#include <cmath>

using namespace std;

void metEx04::lerIdade() {
    int id;

    cout << "Informe sua idade em dias: ";
    cin >> id;

    cout << "Sua idade em anos " << calcAno(id) << ", meses " << calcMes(id) << " e dias " << id;
}

int metEx04::calcAno(int id) {
    int ano;
    ano = id/365;
    return ano;
}

int metEx04::calcMes(int id) {
    int mes;
    mes = id/30;
    return mes;
}