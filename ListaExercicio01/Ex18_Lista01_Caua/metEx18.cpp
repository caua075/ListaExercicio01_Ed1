//
// Created by Buiu on 22/08/2022.
//

#include "metEx18.h"
#include <iostream>

using namespace std;
void metEx18::lerSaldo() {
    float saldo;

    cout << "Informe seu saldo: R$";
    cin >> saldo;

    cout <<  "O saldo médio é R$" << saldo << " e o valor do crédito é R$" << calcSaldo(saldo);
}
float metEx18::calcSaldo(float saldo) {
    float vlrCred;

    if((saldo >= 0) && (saldo <= 200) ){
        vlrCred = saldo;
    }
    else{
        if((saldo>=201) && (saldo<=400)){
            vlrCred = saldo+(saldo*0.2);
        }
        else{
            if((saldo>=401) && (saldo<=600)){
                vlrCred = saldo+(saldo*0.3);
            }
            else{
                vlrCred = saldo+(saldo*0.4);
            }
        }
    }
}
