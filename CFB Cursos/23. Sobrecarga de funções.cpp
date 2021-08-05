#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();

int main(){
	/*Sobrecarga de funções nada mais é do que a
	possibilidade de ter duas ou mais funções
	com o mesmo nome dentro do mesmo programa
	- desde que as funções possum argumentos de
	entrada/variaveis diferentes*/

    soma(20,30);
    soma();

	return 0;
}

void soma(int n1, int n2){
    int res;
    res=n1+n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << res << "\n";
}


void soma(/* ARGUMENTOS DE ENTRADA ficam aqui*/){
    int n1, n2, res;
    n1=10;
    n2=20;
    res=n1+n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << res << "\n";

}
