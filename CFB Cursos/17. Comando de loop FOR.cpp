#include <iostream>
using namespace std;

int main(){

	/*  for( ini : cond : inc/dec){
            comandos
	]
	    Na express�o temos tr�s parametros:
            1 - inicia��o da variavel de controle (pode se inicializar com mais de uma variavel)
            2 - a condicional para execu��o do FOR (enquanto esta cond for Verdadeira o FOR vai executar)
            3 - incremento ou decremento da variavel de controle
	*/

	int x,y,z;

	// voc� pode escrever um for sem corpo/comandos, mas ele aumentar� o tempo de execu��o, como se fosse uma pausa
	for(int temporario=0; temporario < 1000; temporario++);

	for (x=0, y=1, z=0 ; x<=10 && z<=6 ; x++, y+=2, z+=2){
        cout << x << " - ";
        cout << y << " - ";
        cout << z << "\n";
        //quando s� tem uma linha de comnando colchete n�o � obrigatorio
	}

	return 0;
}
