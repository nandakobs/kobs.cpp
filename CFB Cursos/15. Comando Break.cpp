#include <iostream>
using namespace std;

int main(){

    //Interrompe qualquer loop

	int cont;

	cont=0;
	while(cont < 1000){
        cout << cont << "\n";
        if (cont == 500){
            break;
        }
        cont++;
	}

	return 0;
}
