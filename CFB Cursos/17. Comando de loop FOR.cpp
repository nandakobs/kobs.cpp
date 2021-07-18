#include <iostream>
using namespace std;

int main(){

	/*  for( ini : cond : inc/dec){
            comandos
	]
	    Na expressão temos três parametros:
            1 - iniciação da variavel de controle (pode se inicializar com mais de uma variavel)
            2 - a condicional para execução do FOR (enquanto esta cond for Verdadeira o FOR vai executar)
            3 - incremento ou decremento da variavel de controle
	*/

	int x,y,z;

	// você pode escrever um for sem corpo/comandos, mas ele aumentará o tempo de execução, como se fosse uma pausa
	for(int temporario=0; temporario < 1000; temporario++);

	for (x=0, y=1, z=0 ; x<=10 && z<=6 ; x++, y+=2, z+=2){
        cout << x << " - ";
        cout << y << " - ";
        cout << z << "\n";
        //quando só tem uma linha de comnando colchete não é obrigatorio
	}

	return 0;
}
