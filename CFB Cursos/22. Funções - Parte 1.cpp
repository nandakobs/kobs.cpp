#include <iostream>
using namespace std;

//temos que prototipar/apresentar a função primeiro e embaixo escreve-las

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){//main é uma função

    string transp[4]=("carro","moto","barco","aviao");

    int res;
    res=soma2(175,25);
    cout << "Valor de res: " << res << "\n";
    //é o mesmo que
    cout << "Valor de res: " << soma2(175,25) << "\n";

    tr(transp);

    texto(); //chamando a função

    soma(15,5);

    /*for(int i=0; i<10; i++){ //aqui escrevemos texto 10 vezes
        texto();
    }*/
	return 0;
}

//escreva o código das funções dps do principal
//a função só será executada quando ela for chamada no main
//função void não retorna nenhum valor
void texto(){
    cout << "\nCanal Fessor Bruno\n";
}

void soma(int n1, int n2){
    cout << "soma dos valores: " << n1+n2 << "\n";
}

//qualquer outra função escrita aqui temos q dar o valor a ser retornado

int soma2(int n1, int n2){
    return n1+n2;
}

void tr(string tra[4]){
    for(int i=0; i<4; i++){
        cout << tra[i] << "\n";
    }
}
