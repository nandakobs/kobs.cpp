#include <iostream>
using namespace std;

//variaveis globais podem ser utilizadas por qualquer parte do programa/c�digo
int n1,n2;
/* � possivel criar dentro de fun��es diferentes variaveis com o mesmo nome
pq elas tem escopo de uliza��o diferente*/

int main(){ //int main � um bloco de fun��o, v�rias fun��es podem ser criadas
	//variaveis locais s� podem ser utilizadas dentro da fun��o em q foram declaradas
	int n3, n4;	
	
	/*Operadores Matem�ticos: adi��o(+), subtra��o(-), divis�o(/), multiplica��o(*)
	e Operador Mode(%) = d� o resto de uma divis�o. 
	Ordem dos elementos: (1� td o q tiver aq), dps divis�o e multiplica��o (entre eles o q vier primeiro),
	dps adi��o e subtra��o*/
	int res1,res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
		
	//res=(n1+n2+n3+n4)-10;
	//res=n1+n2*n4;
	res1=n1/n2;
	res2=n1%n2; //>>resto<< da divis�o entre os elementos
	cout << "Divis�o: " << res1 << "\n\n";
	cout << "  Resto: " << res2 << "\n\n";
		
	return 0;
}
