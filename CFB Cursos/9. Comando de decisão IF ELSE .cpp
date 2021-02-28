#include <iostream>
using namespace std;

int main(){

	int num1=10;
	int num2=50;
	int sol= 1;

	if(num1>num2){
        //Se o teste for verdadeiro
        cout << "Resultado VERDADEIRO \n\n";
    }else{
        //se o teste for falso
        cout << "Resultado FALSO \n\n";
    }

    if(sol){ //lembrando q false equivale a zero e true equivale a um
        cout << "Vou ao clube \n\n";
    }else{
        cout << "Vou ao cinema \n\n";
    }

	//operadores de comparação: >, <, >=, <=, ==, !=
	//(respectivamente: maior, menor, maior ou igual, menor ou igual, igual e diferente)
    // 10 < 5 = false
    // 50 > 25 = true
    // 100 > (50*2) = false
    // 100 >= (50*2) = true
    // num > 0 = true

	return 0;
}
