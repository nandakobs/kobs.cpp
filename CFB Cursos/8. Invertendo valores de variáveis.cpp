#include <iostream>
using namespace std;
int main(){
	
	int num=10;
	
	cout << num << "\n\n";
	
	
	//num = num * -1; //forma tradicional de inverter o valor da variavel
	num=-num; //forma simplificada de inverter
	//cout << num << "\n\n";
		
	//tendo int num com valor negativo a proxima impress�o ser� positiva pois (- - = +)
	
	//cout << -num << "\n\n"; // s� faz a invers�o momentaneamente, n muda o valor na variavel
		
	//num-=10; // aqui estamos subtraindo 10 da variavel, ent�o o resultado � zero
	
	cout << num << "\n\n";
	
	
	
	
	return 0;
}
