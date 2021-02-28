#include <iostream>
#include <cstdlib> // ou stdlib.h para system("cis") funfar
using namespace std;

int main(){

	int n1, n2, res;
	char opc;

	inicio: //label

    system("cls"); //limpa a tela

	cout << "Digite o valor da nota 1: ";
	cin >> n1;
    cout << "Digite o valor da nota 2: ";
	cin >> n2;

	res=n1+n2;

	/*  >=60        Aprovado
        >=40 e <60  Recuperação
        <40         Reprovado
    */

	if(res>=60){
        cout << "\n Aluno Aprovado\n";
	}else if(res>=40){
        cout << "\n Aluno em Recuperacao\n";
	}else{
        cout << "\n Aluno Reprovado\n";
	}

	cout << "\nDigitar outras notas?(s/n): ";
	cin >> opc;

	if(opc=='s' or opc=='S'){
        goto inicio;
	}

	return 0;
}
