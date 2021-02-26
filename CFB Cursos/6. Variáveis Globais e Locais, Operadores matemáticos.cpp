#include <iostream>
using namespace std;

//variaveis globais podem ser utilizadas por qualquer parte do programa/código
int n1,n2;
/* É possivel criar dentro de funções diferentes variaveis com o mesmo nome
pq elas tem escopo de ulização diferente*/

int main(){ //int main é um bloco de função, várias funções podem ser criadas
	//variaveis locais só podem ser utilizadas dentro da função em q foram declaradas
	int n3, n4;	
	
	/*Operadores Matemáticos: adição(+), subtração(-), divisão(/), multiplicação(*)
	e Operador Mode(%) = dá o resto de uma divisão. 
	Ordem dos elementos: (1° td o q tiver aq), dps divisão e multiplicação (entre eles o q vier primeiro),
	dps adição e subtração*/
	int res1,res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
		
	//res=(n1+n2+n3+n4)-10;
	//res=n1+n2*n4;
	res1=n1/n2;
	res2=n1%n2; //>>resto<< da divisão entre os elementos
	cout << "Divisão: " << res1 << "\n\n";
	cout << "  Resto: " << res2 << "\n\n";
		
	return 0;
}
