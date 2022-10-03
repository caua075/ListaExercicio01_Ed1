//
// Created by Buiu on 18/08/2022.
//

#include "metEx10.h"
#include <iostream>

using namespace std;

void metEx10::lerNum() {
    int n1, n2, n3;

    cout << "Informe o primeiro numero:";
    cin >> n1;
    cout << "Informe o segundo numero:";
    cin >> n2;
    cout << "Informe o terceiro numero:";
    cin >> n3;

    cout << mostrarMaior(n1, n2, n3) << " é o maior";
}
int metEx10::mostrarMaior(int n1, int n2, int n3) {
    int maior;

    if((n1>n2) && (n1>n3)){
        maior = n1;
    }
    else{
        if((n2>n1) && (n2>n3)){
            maior = n2;
        }
        else{
            maior = n3;
        }
    }

    return maior;
}