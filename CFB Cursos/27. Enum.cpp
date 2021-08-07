#include <iostream>
using namespace std;

int main(){
	/* Enum(Enumera��o)  � um conjunto de constantes
	inteiras que espeficicam valores que uma variavel
	desse tipo pode ter. Estrutura de dados com valores
	numericos.*/
	//Digamos que queremos saber o quanto de muni��o cada arma tem
	enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};
	/*Por padr�o cada item do enum j� possui um valor.
    O padr�o � que ele adiciona zero pro primeiro elemento
    e sempre vai em uma estrutura sequencial.
    Ou seja: 0, 1, 2, 3...
    Se eu definir apenas que fuzil=100 ent�o: revolver ser� 101
    rifle ser� 102 e assim por diante
    */
    //Criando uma variavel
    int num; // tipo inteiro, nome num
    armas armaSel; // tipo armas, nome armaSel (selecionada)
    // os valores possiveis pra a variavel acima s�o os itens de enum armas

    armaSel=rifle;
    cout << armaSel; //Pelo valor padr�o imprime n�2, pelo valor dado imprime 12
	return 0;
}
