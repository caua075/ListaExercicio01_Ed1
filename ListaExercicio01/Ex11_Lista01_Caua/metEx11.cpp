//
// Created by Buiu on 19/08/2022.
//

#include "metEx11.h"
#include <iostream>

using namespace std;

void metEx11::lerNum() {
    int a, b;

    cout << "Informe um número: ";
    cin >> a;
    cout << "Informe um número: ";
    cin >> b;

    if(a%b == 0){
        cout << "Ele é positivo e par";
    }
    else{
        cout << "Ele é positivo e impar";
    }
}