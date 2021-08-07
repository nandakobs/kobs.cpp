#include <iostream>
#include <stack> //pra trabalhar com pilhas
using namespace std;

int main(){
	/*Pilha � como se fosse um vetor s� que tem controles
	especificos. Pode-se pensar num po�o(ou tubo com s� uma
    abertura), eu coloco elementos dentro desse tubo.
    O primeiro elemento a ser inserido � o ultimo elemento
    a ser removido ou trabalhado. O ultimo elemento
    a ser inserido � o primeiro elemento a ser removido
    ou trabalhado.*/

    stack <string> cartas;
    // imagine q tenho um baralho e quero formar um monte
    // metodo push insere elementos na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus"); //topo da pilha pois � o ultimo add

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    // metodo top revela elemento q est� no topo
    cout << "Carta do topo: " << cartas.top() << "\n";
    //metodo pop retira elementos da pilha (do topo)
    cartas.pop();

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";

    //metodo empty verifica se a pilha est� vazia, se sim true, se n�o false
    if(cartas.empty()){
        cout << "Pilha vazia\n\n";
    }else{
        cout << "Pilha com cartas\n\n";
    }
    //Se essa verifica��o estivesse em antes da declara��o dos itens(cartas) ent�o estaria vazia

    /* Outra forma de verificar se a pilha est� vazia seria:
    if(cartas.size() == 0){
        cout << "Pilha vazia\n\n";
    }else{
        cout << "Pilha com cartas\n\n";
    }
    */

    //Posso zerar tds os elementos ou esvaziar a pilha com:
    while(!cartas.empty()){
        // ou seja, enquanto cartas NAO estiver vazio
        cartas.pop();
    }
     cout << "Tamanho da pilha: " << cartas.size() << "\n";




}

