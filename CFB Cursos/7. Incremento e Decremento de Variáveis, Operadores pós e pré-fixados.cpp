#include <iostream>
using namespace std;

int main(){
	
	//n1=n1+1; forma tradicional de fazer um incremento/adicionar um valor a variavel
	//n1+=1;   forma contraida/simplificada do elemento acima (^add quantos n° quiser)
	//n1*=2; multiplica n1 vezes 2, se aplica a tds as operações
	
	//n1=n1+10;    n1+=10;
	//n1=m1-10;    n1-=10;
	//n1=n1*10;    n1*=10;
	//n1=n1/10;    n1/=10; 
	//n1++;        n1--;
	//n1++;        ++n1; (incrementa)  
	//n1--;        --n1; (decrementa)
	
	//n1++;  significa q estou adicionando >>um<< ao valor da variavel (n1--; subtrai 1)
	//n1++; chamamos de pós incremento ou pós fixado - usa dps opera
	//++n1; chamamos pré incremento ou pré fixado - opera e dps usa
	
	int n1=10;
	
	/*adicionando n1++; ou ++n1; não fará diferença >aqui<, ambos imprimem 11, mas se colocadonuma linha de comando cout faz
	
	cout << n1++ << "\n\n"; irá imprimir o valor 10 pq quando usamos o operador de 
	atribuições pós fixado, ele primeiro usa o valor da variavel e depois ele faz o incremento.
	
	cout << ++n1 << "\n\n"; no modo pré fixado ele primeiro incrementa a variavel e dps ela usa o valor.
	Então nesse caso, irá imprimir 11.
	
	*/
	
	cout << n1 << "\n\n";
	

	
	return 0;
}
