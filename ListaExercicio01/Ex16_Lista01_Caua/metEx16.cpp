//
// Created by Buiu on 22/08/2022.
//

#include "metEx16.h"
#include <iostream>

using namespace std;

void metEx16::lerPedido() {
    int qtd, cod;

    cout << "--------------- CARDAPIO --------------" << endl;
    cout << "ESPESCIFICAÇÃO --- CÓDIGO --- PREÇO ---" << endl;
    cout << "CACHO. QUENTE ----- 100 ---- R$1,20 --" << endl;
    cout << "BAURU SIMPLES ----- 101 ---- R$1,30 --" << endl;
    cout << "BAURU C/ OVO ------ 102 ---- R$1,50 --" << endl;
    cout << " HAMBURGUER ------- 103 ---- R$1,20 --" << endl;
    cout << "CHEESEBURGUER ----- 104 ---- R$1,30 --" << endl;
    cout << "REFRIGERANTE ------ 105 ---- R$1,00 --" << endl;

    cout << endl;

    cout << "Informe o código do pedido: ";
    cin >> cod;
    cout << "Informe a quantidade produtos: ";
    cin >> qtd;

    cout << "O valor a ser pago é de R$" << calcPedido(qtd, cod);
}
float metEx16::calcPedido(int qtd, int cod) {
    float vlrPagar;

    switch (cod) {
        case 100:
            vlrPagar = qtd*1.2;
        break;
        case 101:
            vlrPagar = qtd*1.3;
            break;
        case 102:
            vlrPagar = qtd*1.5;
            break;
        case 103:
            vlrPagar = qtd*1.2;
            break;
        case 104:
            vlrPagar = qtd*1.3;
            break;
        case 105:
            vlrPagar = qtd*1.0;
            break;
    }
    return vlrPagar;
}