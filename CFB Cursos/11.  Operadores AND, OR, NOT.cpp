#include <iostream>
using namespace std;

int main(){
        /* AND (&&) = Operador lógico onde o valor de
        resposta da operação é verdadeiro
        se todas as variaveis de entrada forem
        verdadeiras */

        /* OR (||) = Operador lógico onde o valor de
        resposta da opera~ção é verdadeiro se
        pelo menos uma das variaveis de entrada
        for verdadeira */

        int num, num2;
        num=8;
        num2=9;

        if(num>4 && num<7){
            cout << "\n\nValor aceito\n";
        }else{
            cout << "\n\nValor NAO aceito\n";
        }

        if(num2<3 || num2>8){
                cout << "\n\nValor Disponivel\n\n";
        }else{
            cout << "\n\nValor Indisponivel\n\n";
        }

    /* 1 2 3 4  5 6 7 8 9 10 12 13 14 15 16 17 18 19 20
    3 a 6
    10 a 14
    16 a 19*/
    int num3=12;
    if( (num3>3 && num3<=6) || (num3>9 && num3<15) || (num3>15 && num3<20) ){
            cout << "\n\nQuero sim\n\n";
    }else{
        cout << "\n\nQuero naum\n\n";
    }

    /* NOT(!) = Operação de negação. Se não for...
     if(num == 1)  /  if(num)
    if(mum == 0)  /  if(!num)
    if(num != 1)  /  if(!num)*/

    int num4=1; //lembrando 1=true, 0=false
    if(!num4){ //ou seja, se NUM não for verdadeiro ou seja, nesse caso,1
        cout << "\n\nVou ao clube\n\n";
    }else{
        cout << "\n\nVou ao cinema\n\n";
    }

 	 return 0;
}
