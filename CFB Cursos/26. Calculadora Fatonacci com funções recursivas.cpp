#include <iostream>
#include <stdlib.h>
using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main(){

	int op, valor, res;
	char sair;
    start:
	cout << "Seja bem-vinde ao Fatonacci! \nGostaria de realizar qual operacao? \n[1]Fatoracao [2]Fibonacci\n";
    cin >> op;
    system("cls");
    if(op==1){
        cout << "Calculadora de Fatoriais Iniciada...\n(insira um numero)\n";
        cin >> valor;
        res=fatorial(valor);
        system("cls");
        cout << "O fatorial de " << valor << " tem valor de " << res << endl;
    }else if(op==2){
        cout << "Sequencia de Fibonacci Iniciada...\n(insira um valor)\n";
        cin >> valor;
        system("cls");
        cout << "Fibonacci com " << valor << " valores: \n";
        for(int i=0; i<valor; i++){
            cout << fibonacci(i+1) << "  " << endl;
        }
    }else {
        cout << "Operacao invalida!\n";

    }
    system("pause");
    system("cls");
    cout << "Deseja fazer mais alguma operacao?[s/n]";
    cin >> sair;
    if(sair=='S' || sair=='s'){
        system("cls");
        goto start;
    }else {
    system("exit");
    }


	return 0;
}

int fatorial (int n){
    //4!=4*3*2*1
    if(n==0){
        return 1;
    }
    return n*fatorial(n-1);
}

int fibonacci (int n){
    //0,1,(0+1)1,(1+1)2,(1+2)3;(2+3)5,(3+5)8,...
    if(n==1 || n==2){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
