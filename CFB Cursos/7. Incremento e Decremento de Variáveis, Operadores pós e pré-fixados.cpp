#include <iostream>
using namespace std;

int main(){
	
	//n1=n1+1; forma tradicional de fazer um incremento/adicionar um valor a variavel
	//n1+=1;   forma contraida/simplificada do elemento acima (^add quantos n� quiser)
	//n1*=2; multiplica n1 vezes 2, se aplica a tds as opera��es
	
	//n1=n1+10;    n1+=10;
	//n1=m1-10;    n1-=10;
	//n1=n1*10;    n1*=10;
	//n1=n1/10;    n1/=10; 
	//n1++;        n1--;
	//n1++;        ++n1; (incrementa)  
	//n1--;        --n1; (decrementa)
	
	//n1++;  significa q estou adicionando >>um<< ao valor da variavel (n1--; subtrai 1)
	//n1++; chamamos de p�s incremento ou p�s fixado - usa dps opera
	//++n1; chamamos pr� incremento ou pr� fixado - opera e dps usa
	
	int n1=10;
	
	/*adicionando n1++; ou ++n1; n�o far� diferen�a >aqui<, ambos imprimem 11, mas se colocadonuma linha de comando cout faz
	
	cout << n1++ << "\n\n"; ir� imprimir o valor 10 pq quando usamos o operador de 
	atribui��es p�s fixado, ele primeiro usa o valor da variavel e depois ele faz o incremento.
	
	cout << ++n1 << "\n\n"; no modo pr� fixado ele primeiro incrementa a variavel e dps ela usa o valor.
	Ent�o nesse caso, ir� imprimir 11.
	
	*/
	
	cout << n1 << "\n\n";
	

	
	return 0;
}
