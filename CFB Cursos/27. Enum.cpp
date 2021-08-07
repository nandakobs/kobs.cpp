#include <iostream>
using namespace std;

int main(){
	/* Enum(Enumeração)  é um conjunto de constantes
	inteiras que espeficicam valores que uma variavel
	desse tipo pode ter. Estrutura de dados com valores
	numericos.*/
	//Digamos que queremos saber o quanto de munição cada arma tem
	enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};
	/*Por padrão cada item do enum já possui um valor.
    O padrão é que ele adiciona zero pro primeiro elemento
    e sempre vai em uma estrutura sequencial.
    Ou seja: 0, 1, 2, 3...
    Se eu definir apenas que fuzil=100 então: revolver será 101
    rifle será 102 e assim por diante
    */
    //Criando uma variavel
    int num; // tipo inteiro, nome num
    armas armaSel; // tipo armas, nome armaSel (selecionada)
    // os valores possiveis pra a variavel acima são os itens de enum armas

    armaSel=rifle;
    cout << armaSel; //Pelo valor padrão imprime n°2, pelo valor dado imprime 12
	return 0;
}
