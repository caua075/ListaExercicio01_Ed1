//
// Created by Buiu on 18/08/2022.
//

#include "metEx06.h"
#include <iostream>

using namespace std;

void metEx06::lerTempo() {
    int seg;

    cout << "Informe a quantidade de segundos: ";
    cin >> seg;

    cout << "O tempo foi de " << calcHora(seg) << "h, " << calcMin(seg) << "min e " << seg << "seg.";
}
int metEx06::calcHora(int seg) {
    int hora;

    hora = seg/3600;

    return hora;
}
int metEx06::calcMin(int seg) {
    int min;

    min = seg/60;

    return min;
}
