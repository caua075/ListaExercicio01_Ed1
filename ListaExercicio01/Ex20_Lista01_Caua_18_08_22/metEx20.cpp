//
// Created by Buiu on 18/08/2022.
//

#include "metEx20.h"
#include <iostream>

using namespace std;

void metEx20::vendas() {
    float conta;
    int cod=0, qtd=0;
    char opc;

    cout << "----- Tabela de Produtos ------" << endl;
    cout << "----- CODIGO ------ VALOR -----" << endl;
    cout << "------ 1001 ------ R$5.32 -----" << endl;
    cout << "------ 1324 ------ R$6.45 -----" << endl;
    cout << "------ 6548 ------ R$2.37 -----" << endl;
    cout << "------ 1987 ------ R$5.32 -----" << endl;
    cout << "------ 7623 ------ R$6.45 -----" << endl;

    while(opc != 's') {
        cout << endl;
        cout << "Digite o código do produto: ";
        cin >> cod;
        cout << "Digite a quantidade de produtos: ";
        cin >> qtd;

        conta += calcVendas(cod, qtd);

        cout << "Digite 'C' para continuar e 'S' para sair: ";
        cin >> opc;
    }
    cout << endl;
    cout << "Valor total: R$" << conta;
}

float metEx20::calcVendas(int cod, int qtd) {
    float vlrFinal = 0.0;

    switch(cod){
        case 1001:
            vlrFinal=5.32*qtd;
            break;
        case 1324:
            vlrFinal=6.45*qtd;
            break;
        case 6548:
            vlrFinal=2.37*qtd;
            break;
        case 1987:
            vlrFinal=5.32*qtd;
            break;
        case 7623:
            vlrFinal=6.45*qtd;
            break;
    }
    return vlrFinal;
};