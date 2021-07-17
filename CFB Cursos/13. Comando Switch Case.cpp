#include <iostream>
using namespace std;

int main(){
	/* O Comando Switch Case só faz teste de igualdade.

        switch(expressão){
            case constante1:
                comandos;
                break;
            case constante2:
                comandos;
                break;
            default:
                comandos;
    }

    Lê-se: Valor da expressão caso seja igual a constante1
    então executar tais comandos e break/pare. Se nenhum case
    tiver valor igual ao da expressão, ele executará DEFAULT.
    Default não é obrigatorio, caso você não queira alguma ação
    se Cases não forem compativeis então deixe os comandos em branco
    ou simplesmente não escreva default.
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
