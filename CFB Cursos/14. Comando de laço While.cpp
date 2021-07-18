#include <iostream>
using namespace std;

int main(){

	/*While significa enquanto. Ele executa uma s�rie de
	comandos enquanto uma condi��o for satisfeita. Usamos
	quando n�o temos certeza ou n�o conhecemos a condi��o
	de parada/break.
	Sempre prestar aten��o para n�o deixar o while sem
	ponto de parada, caso contrario ele executar� a a��o
	em lop infinito e causar� o travamento do programa.
	*/

	int n;

	n=0;
	while(n<10){
        cout << n << "\n";
        cin >> n;
        n++;
    //L�-se: enquanto N menor que 10, imprima N e adicione 1 ao seu valor.
	}

    cout << "\nRotina Finalizada\n";

    //Outro Exemplo

    int conta;

    conta=0;
    while(conta++<20){ /*incrimento ou decremento de 1(++ ou --)
            podem ser feitos dentro da express�o*/
        cout << "Canal Fessor Bruno - " << conta << "\n";
    //voc� pode usar break dentro de um while
        if(conta == 10){
            break;
        }
    }

    cout << "\nContagem Finalizada\n";
	return 0;
}
