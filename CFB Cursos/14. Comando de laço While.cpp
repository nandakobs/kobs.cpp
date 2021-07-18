#include <iostream>
using namespace std;

int main(){

	/*While significa enquanto. Ele executa uma série de
	comandos enquanto uma condição for satisfeita. Usamos
	quando não temos certeza ou não conhecemos a condição
	de parada/break.
	Sempre prestar atenção para não deixar o while sem
	ponto de parada, caso contrario ele executará a ação
	em lop infinito e causará o travamento do programa.
	*/

	int n;

	n=0;
	while(n<10){
        cout << n << "\n";
        cin >> n;
        n++;
    //Lê-se: enquanto N menor que 10, imprima N e adicione 1 ao seu valor.
	}

    cout << "\nRotina Finalizada\n";

    //Outro Exemplo

    int conta;

    conta=0;
    while(conta++<20){ /*incrimento ou decremento de 1(++ ou --)
            podem ser feitos dentro da expressão*/
        cout << "Canal Fessor Bruno - " << conta << "\n";
    //você pode usar break dentro de um while
        if(conta == 10){
            break;
        }
    }

    cout << "\nContagem Finalizada\n";
	return 0;
}
