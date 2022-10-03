//
// Created by Buiu on 17/08/2022.
//

#include "metEx01.h"
#include <iostream>
#include <cmath>

using namespace std;
void metEx01::lerPonto() {
    float x1,x2,y1,y2;

    cout << "Informe um valor para X1: ";
    cin >> x1;
    cout << "Informe um valor para Y1: ";
    cin >> y1;
    cout << "Informe um valor para X2: ";
    cin >> x2;
    cout << "Informe um valor para Y2: ";
    cin >> y2;

    cout << "\nA distancia foi de " << calcPonto(x1,x2,y1,y2);
}
float metEx01::calcPonto(float x1, float x2, float y1, float y2){
    float resp;

    resp = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    return resp;
};
