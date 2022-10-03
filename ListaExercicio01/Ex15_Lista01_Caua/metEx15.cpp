//
// Created by Buiu on 19/08/2022.
//

#include "metEx15.h"
#include <iostream>

using namespace std;

void metEx15::lerNum() {
    int num;

    cout << "Informe um numero:";
    cin >> num;

    if(num > 0){
        if(num %2 == 0){
            cout << "Ele é positivo e par";
        }
        else{
            cout << "Ele é positivo e impar";
        }
    }
    else{
        if(num %2 == 0){
            cout << "Ele é negativo e par";
        }
        else{
            cout << "Ele é negativo e impar";
        }
    }
}
