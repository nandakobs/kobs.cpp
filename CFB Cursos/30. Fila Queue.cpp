#include <iostream>
#include <queue> //para trabalhar com fila
using namespace std;

int main(){
	/*Como numa fila o primeiro q entra/chega
	� o primeiroa sair, o ultimo q entra/chega �
	o ultimo a sair*/

	queue <string> cartas;
    // imagine q tenho um baralho e quero formar um monte
    // metodo push insere elementos na fila
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << "\n";

    // metodo front revela quem est� na frente da fila
    cout << "Primeira Carta: " << cartas.front() << "\n";

    // metodo back revela quem est� no final da fila
    cout << "Ultima Carta: " << cartas.back() << "\n";

    //metodo pop retira elemento que est� na frente
    cartas.pop();

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Nova carta na frente da fila: " << cartas.front() << "\n";

    //metodo empty verifica se a fila est� vazia, se sim true, se n�o false
    if(cartas.empty()){
        cout << "Fila vazia\n\n";
    }else{
        cout << "Fila com cartas\n\n";
    }
    //Se essa verifica��o estivesse em antes da declara��o dos itens(cartas) ent�o estaria vazia

    /* Outra forma de verificar se a fila est� vazia seria:
    if(cartas.size() == 0){
        cout << "Fila vazia\n\n";
    }else{
        cout << "Fila com cartas\n\n";
    }
    */

    //Posso zerar tds os elementos ou esvaziar a Fila com:
    while(!cartas.empty()){
        // ou seja, enquanto cartas NAO estiver vazio
        cartas.pop();
    }
     cout << "Tamanho da Fila: " << cartas.size() << "\n";




	return 0;
}
