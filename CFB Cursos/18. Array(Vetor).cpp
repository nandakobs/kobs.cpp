#include <iostream>
using namespace std;

int main(){
	/* Array (tbm conhecidos como vetores) são
	uma coleção de variaveis de mesmo tipo.
	Quando informo uma Array digo:
	tipo nome[tamanho/posições/variaveis/indice];
	int carros[5];

	Cada posição pode receber um valor - exemplo:
	int vetor[6];
	é o mesmo que:
	int vetor0, vetor1, vetor2, vetor3, vetor4;
	[sempre começando de 0] */

	int vetor[5];

	//Armazenando valores
	vetor[0]=10;
	vetor[1]=20;
	vetor[2]=30;
	vetor[3]=40;
	vetor[4]=50;
	//vetor[5]=60; esse estaria ERRRADO pois são contados 5 elementos (a partir de zero) e não de 1 a 5.
	// ou poderia escrever td na mesma linha: int vetor[5]={10,20,30,40,50};

	cout << vetor[2] << "\n";
	cout << vetor[4] << "\n";
	//caso vc tente imprimir uma posição inexistente o programa gera erro (n°s aleatorios) q chamamos de lixo.

	//Forma simplificada de ler tds os dados do array

	int i;

	for(i=0; i<5; i++){
        cout << vetor[i] << "\n";
	}

	/*Suponhamos que eu mude o valor do array, para não precisar me preocupar com ter de mudar o valor
	em outros luagres q ele é citado, por exemplo, no FOR acima, podemos fazer duas coisas:

        Sizeof
                for(i=0; i<sizeof(); i++){
                    cout << vetor[i] << "\n";
                }
           Temos que ter certo cuidado com ao usar Sizeof porque na verdade ele vai retornar
           o tamanho do tipo. Por exemplo: Se eu indicar i<sizeof(vetor), ele vai me indicar
           o tamanho em bytes desse array, no caso aqui como é um valor de int, e o int tem
           o valor de 4 bytes. Ele vai me falar aqui que o valor de vetor é 20 (pois são 5
           posições e 4x5=20) Então pra dar certo precisamos dividir por 4.
               for(i=0; i<sizeof(vetor)/4; i++){
                    cout << vetor[i] << "\n";
                }
           Porém, não é recomendável dividir por 4 para achar o número de posições no vetor,
           pois aparentemente dependendo do SO cada posição pode ter um tamanho maior que 4 bytes.
           Para fazer um código que funcione em qualquer SO é simples, ao invés de usar 4, basta
           ler o tamanho de uma das entradas, como a primeira entrada por exemplo:
                    sizeof(vetor) / sizeof(vetor[0])

        Segunda Forma
            A segunda forma é criar uma variavel para definir o tamanho. Exemplo:
                int tam=5;
                int vetor[tam]
                for(i=0; i<tam; 1++}{
                    cout << vetor[i] << "\n";
                }
            Utilizando assim não podemos declarar os valores das posições diretamente na array.


	  */

	return 0;
}
