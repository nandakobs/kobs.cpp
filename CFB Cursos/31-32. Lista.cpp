#include <iostream>
#include <list> //pra trabalhar com listas
using namespace std;

int main(){

	list<int> aula, teste;
	/*aula(50) teria 50 aulas
	caso fosse (5,50) seriam 5 posições
	com valor 50 cada*/
	int tam; //de tamanho

	list<int>::iterator it; //Para inserir um elemento sem ser no inicio ou no fim, tipo meio, 2°, 5° etc...

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    // ou seja, lista teste tem 4 numerais 9

	tam=10;
	for(int i=0; i<tam; i++){
        aula.push_front(i);
        //push front adiciona ao inicio
	}

	/*após inserir os elementos/inciar a lista
	eu posso controlar a posição atraves do iterator
	*/
    it=aula.begin();
    advance(it,5); //avancei 5 posições (lembra q começa no 0)
    aula.insert(it,0); // e declarei q it vale 0
    aula.erase(it); /*veja que ele elimina uma posição a frente do zero,
    a 7° posição(n°4), para eliminar o zero temos que decrementar (--it),
    E LEMBRE-SE sempre q quiser apagar/modificar vc tem q chamar o iterator e
    definir sua posição(advance)*/

    //aula.sort(); //sort ordena os elementos, caso estejam desogranizados
    //aula.reverse(); //inverte a ordem
    //aula.clear(); //elimina todos os itens da lista
    //aula.empty(); //verifica se tá vazia

    //Para mesclar duas listas/ adicionar uma a outra usamos merge
    aula.merge(teste);
    /*Primeiro a lista que vai receber os valores e em parenteses a lista q precisa ser add
    Quando mesclamos a segunda lista, em parenteses, é esvaziada*/
	cout << "Tamanho da lista: " << aula.size() << "\n\n";

	tam=aula.size();
	for(int i=0; i<tam; i++){
        cout << aula.front() << "\n"; //revela quem ta na frente
        aula.pop_front(); // retira quem ta na frente
	}

	return 0;
}

/* para PESQUISAR o valor de uma posição específica da lista

você pode usar o método find da biblioteca algorithm, olha o exemplo

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main (){

    list<int>num={1,2,3,4,5,6,7,8,9,10};

    auto it=find(num.begin(),num.end(),6); //Pesquisa o elemento 6 e "retorna" para o iterator

    cout << *it << endl;

  return 0;
}



*/
