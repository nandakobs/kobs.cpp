#include <iostream>
#include <string.h> //para fazer a comparação de string
#include <stdlib.h>

using namespace std;

    /* Quando digitamos o nome do programa
    no prompt por exemplo, eu posso enviar
    um valor e esse valor pode ser tratado
    aqui dentro do programa através de 2
    argumentos padrões que são o argc e o argv

    Na função main nós temos aqui disponivel
    duas variaveis q vão servir de propriedades
    q são padrões, a primeira é uma inteira
    que se chama argc q vai guardar a
    quantidade de parametros informados.
    E o segundo é um parametro do tipo char
    que ele é um ponteiro chamado argv q tbm
    é uma matriz*
    Basicamente cada elemento dessa matriz
    quando eu digitar um argumento
    ele vai apontar pro argumento digitado e
    vai ficar armazenado nessa matriz  */

int main(int argc, char *argv[]){
  // o 1° armazena quantidade de argumentos
  // o 2° armazena os argumentos

  /*quando utilizamos argc e argv no main
  ele automaticamente faz com q o primeiro
  parametro/argumento seja o nome do programa. */

 // cout << argv[0] << "\n\n";
  /* sendo assim argv[1] [aka a segunda posição
  pq matriz começa em 0] imprime o 1° valor q
  vc digitar
    */
//fessor usando cmd na aula

if(argc>1){
 //temos que negar strcmp pq o valor Zero é false no IF
    if(!strcmp(argv[1], "sol")){
    /* strcmp faz uma comparação entre 2 strings
     se as strings forem iguais retorna o valor 0/positivo
     se diferentes ele retorna maior ou menor q zero
     maior q zero quando a 1° string for maior q a 2°
     menor q zero quando a 1° string for menor q a 2° */
     cout << "Vou ao clube. \n\n";
    }else if(!strcmp(argv[1], "nublado")){
        cout << "Vou ao cinema. \n\n";
    }else{
        cout << "Vou ficar em casa. \n\n";
        /*ou seja, se o usuario n digitar
        nem sol nem nublado, imprimi ir pra casa */
    }
}

    system("pause");

	return 0;
}
