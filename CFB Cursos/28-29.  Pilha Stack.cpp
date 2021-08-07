#include <iostream>
#include <stack> //pra trabalhar com pilhas
using namespace std;

int main(){
	/*Pilha é como se fosse um vetor só que tem controles
	especificos. Pode-se pensar num poço(ou tubo com só uma
    abertura), eu coloco elementos dentro desse tubo.
    O primeiro elemento a ser inserido é o ultimo elemento
    a ser removido ou trabalhado. O ultimo elemento
    a ser inserido é o primeiro elemento a ser removido
    ou trabalhado.*/

    stack <string> cartas;
    // imagine q tenho um baralho e quero formar um monte
    // metodo push insere elementos na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus"); //topo da pilha pois é o ultimo add

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    // metodo top revela elemento q está no topo
    cout << "Carta do topo: " << cartas.top() << "\n";
    //metodo pop retira elementos da pilha (do topo)
    cartas.pop();

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";

    //metodo empty verifica se a pilha está vazia, se sim true, se não false
    if(cartas.empty()){
        cout << "Pilha vazia\n\n";
    }else{
        cout << "Pilha com cartas\n\n";
    }
    //Se essa verificação estivesse em antes da declaração dos itens(cartas) então estaria vazia

    /* Outra forma de verificar se a pilha está vazia seria:
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

