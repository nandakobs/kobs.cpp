#include <iostream>
#include <stdlib.h> //comandos do windows
using namespace std;

int main(){

	char palavra[30],letra[1],secreta[30];
	int tam,i,chances,acertos; // tamanho, indice
	bool acerto;

	chances=6;
	tam=0;
	i=0;
	acerto=false;
	acertos=0;

	cout << "Fale para a pessoa ao seu lado tampar os olhos e digite a palavra secreta:  \n";
	cin >> palavra;
	system("cls"); //limpa a tela

	while(palavra[i] !='\0'){
    /* L�-se: Enquanto palavra na posi��o i for diferente de barra-zero. Barra-zero(/0) � o caracter do enter.
    Por exemplo, ao rodar este programa e digitar "canal" como resposta e dou enter, ele adiciona o barra-zero ap�s
    a palavra, pra indicar que ali terminou a string, que o conteudo que foi digitado terminou ali. O While vai come�ar
    na primeira posi��o: essa posi��o � igual a barra-zero? N�o, ent�o realiza os comandos e repete at� encontrar o barra-zero. */
        i++;
        tam++;
	}

	for(i=0;i<30;i++){
        secreta[i]='-'; //adiciona tracinhos/espa�os pra cada letra da palavra inserida
	}

	while((chances>0)&&(acertos<tam)){ //Enquanto chances maior que zero e acertos menor que o tamanho da palavra
	    cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        for(i=0;i<tam;i++){ cout << secreta[i]; }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        for(i=0;i<tam;i++){
            if(palavra[i]==letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto=false;
        system("cls");
	}

    if(acertos==tam){
        cout << "Acertou mizeravi!!!\n";
    }else{
        cout << "Que pena, tu perdeu.\n";
    }
    system("pause");
	return 0;
}
