#include <iostream>
using namespace std;

int main(){

	/* O operador Ternário é um IF simplificado, ou seja para questões simples de V ou F. Torna o programa mais leve.
	Exemplos: alterar valor de uma variavel, retorno de um valor indicado.
    (expressão) ? valor1 :caso contrário valor02 */

    int n1, n2, nota;
    string res;


    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota=n1+n2;

    // >=60 Aprovado
    // <60 Reprovado

    //(nota >= 60) ? res="Aprovado" : res="Reprovado"; // alterando o valor da variavel
    res=(nota >= 60) ? "Aprovado" : "Reprovado";  //retornando valor indicado

    cout << "\nSituacao do Aluno: " << res << "\n";

    //Outro exemplo

    int x;
    x=5;

    cout << "\n\nDigite uma valor: ";
    cin >> n1;

    (n1 >= 10) ? x++ : x--; //ou seja, adiciona ou diminui 1 no valor de x

    cout << "\nNovo valor do X: " << x << "\n";

	return 0;
}
