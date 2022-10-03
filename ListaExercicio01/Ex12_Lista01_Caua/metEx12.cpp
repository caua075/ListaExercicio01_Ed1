//
// Created by Buiu on 19/08/2022.
//

#include "metEx12.h"
#include <iostream>

using namespace std;

void metEx12::lerIdade() {
    cout << "Informe sua idade:";
    cin >> id;

    if((id>=5) && (id<=7)){
        cout << "Infantil A";
    }
    else{
        if((id>=8) && (id<=10)){
            cout << "Infantil B";
        }
        else{
            if((id>=11) && (id<=13)){
                cout << "Juvenil A";
            }
            else{
                if((id>=14) && (id<=17)){
                    cout << "Juvenil B";
                }
                else{
                    if(id>=18){
                        cout << "Adulto";
                    }
                }
            }
        }
    }
}