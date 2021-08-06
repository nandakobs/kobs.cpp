#include <iostream>
using namespace std;

/*Sempre que eu tiver uma função que chama a si
	mesma, isso se chama recursividade
*/

//SEM recursividade
/*void contador (int num);

int main(){

	contador(10);

	return 0;
}

void contador (int num){
    for(int i=0; i<=num; i++){
        cout << i << "\n";
    }

}
*/

//COM recursividade

void contador (int num, int cont=0);

int main(){

	contador(20);
	//veja bem aqui tamo determinando o valor de num

	return 0;
}

void contador (int num, int cont){
     cout << cont << "\n";
     if(num > cont){
        contador(num, ++cont);
     }
}
