//
// Created by Buiu on 22/08/2022.
//

#include "metEx13.h"
#include <iostream>

using namespace std;

void metEx13::mostrarMaior() {
    int n1, n2, n3;

    cout << "Informe o primeiro numero: ";
    cin >> n1;
    cout << "Informe o segundo numero: ";
    cin >> n2;
    cout << "Informe o terceiro numero: ";
    cin >> n3;

    if((n1>n2) && (n1>n3)){
        cout << n1 << " é o maior";
    }
    else{
        if((n2>n1) && (n2>n3)){
            cout << n2 << " é o maior";
        }
        else{
            cout << n3 << " é o maior";
        }
    }
}