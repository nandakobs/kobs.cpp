#include <iostream>
using namespace std;

void imp(string txt="youtube");

/*Para omitir o argumento, na linha do prototipo
da fun��o, atribua um valor para o argumento.
Se ambos (chamada da fun��o e prototipo n tiverem
um valor n vai imprimir nada.
O valor atribuido no prototipo s� ser� impresso, se
o da chamada estiver vazio*/

int main(){

    imp("canal");

	return 0;
}

void imp(string txt){
    cout << "\n" << txt << "\n";
}
