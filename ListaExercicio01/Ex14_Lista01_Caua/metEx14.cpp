//
// Created by Buiu on 19/08/2022.
//

#include "metEx14.h"
#include <iostream>

using namespace std;

void metEx14::lerNota() {
    float n1, n2, n3;

    cout << "Informe seu código: ";
    cin >> cod;
    cout << "Informe sua nota 1:";
    cin >> n1;
    cout << "Informe sua nota 2:";
    cin >> n2;
    cout << "Informe sua nota 3:";
    cin >> n3;

    if(calcMedia(n1,n2,n3) >= 5.0){
        cout << "Seu cód é: " << cod;
        cout << endl << "Suas notas 1, 2 e 3 são respectivamente: " << n1 << ", " << n2 << " e " << n3 << ".";
        cout << endl << "Média: " << calcMedia(n1, n2, n3);
        cout << endl << "Você está aprovado";
    }
    else{
        cout << "Seu cód é: " << cod;
        cout << endl << "Suas notas 1, 2 e 3 são respectivamente: " << n1 << ", " << n2 << " e " << n3 << ".";
        cout << endl << "Média: " << calcMedia(n1, n2, n3);
        cout << endl << "Você está reprovado";
    }
}
float metEx14::calcMedia(float n1, float n2, float n3) {
    float media;

    if((n1>n2) && (n1>n3)){
        media = ((n1*4)+(n2*3)+(n3*3))/(4+3+3);
    }
    else{
        if((n2>n1) && (n2>n3)){
            media = ((n2*4)+(n1*3)+(n3*3))/(4+3+3);
        }
        else{
            media = ((n3*4)+(n2*3)+(n1*3))/(4+3+3);
        }
    }

    return media;
}