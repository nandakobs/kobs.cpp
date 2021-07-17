#include <iostream>
using namespace std;

int main(){
	/* O Comando Switch Case s� faz teste de igualdade.

        switch(express�o){
            case constante1:
                comandos;
                break;
            case constante2:
                comandos;
                break;
            default:
                comandos;
    }

    L�-se: Valor da express�o caso seja igual a constante1
    ent�o executar tais comandos e break/pare. Se nenhum case
    tiver valor igual ao da express�o, ele executar� DEFAULT.
    Default n�o � obrigatorio, caso voc� n�o queira alguma a��o
    se Cases n�o forem compativeis ent�o deixe os comandos em branco
    ou simplesmente n�o escreva default.
    */

    int valor;

    cout << "Selecione uma cor:\n";
    cout << "[1]=Verde, [2]=Azul. [3]=Vermelho\n";

    cin >> valor;

    switch(valor){
        case 1:
            cout << "\nCor selecionada: Verde\n";
            break;
        case 2:
            cout << "\nCor selecionada: Azul\n";
            break;
        case 3:
            cout << "\nCor selecionada: Vermelho\n";
            break;
        default:
            cout << "\nValor selecionado invalido\n";
    }

    //Outro Exemplo

    cout << "\nSelecione uma fruta:\n";
    cout << "[1,2,3]=Banana, [4,5,6]=Manga\n";

    cin >> valor;

    switch(valor){
        case 1:
        case 2:
        case 3:
            cout << "\nFruta selecionada: Banana\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "\nFruta selecionada: Manga\n";
            break;
        default:
            cout << "\nValor selecionado invalido\n";
    }

    //Switch alinhado: Um Switch dentro dum Case

    cout << "\nSelecione um transporte:\n";
    cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero\n";

    cin >> valor;

    switch(valor){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(valor){
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2:
                    cout << "Moto selecionada\n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte Aereo\n";
            switch(valor){
                case 3:
                    cout << "Aviao selecionado\n";
                    break;
                case 4:
                    cout << "Helicoptero selecionado\n";
                    break;
            }
            break;
        default:
            cout << "\nTransporte selecionado invalido\n";
    }


    cout << "\nPrograma Finalizado\n";

	return 0;
}
