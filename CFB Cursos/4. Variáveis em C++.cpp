#include <iostream> 
//#inclui bibliotecas <comandos básicos do c++> 

using namespace std; //organizar e procurar bibliotecas std=standard,padrão

/*Você pode chamar os comandos cout <<, cin >>, e suas classes desse modo:

std :: cout << "Exemplo";

std :: cin >> Exe;

Mas se você declarar a linha using namespace std; você ganhará tempo escrevendo apenas assim:

cout << "Exemplo";

cin >> Exe; */

int main(){ //main= corpo principal
	
	//Isso é um comentario de uma linha
	/*isso
	é
	um
	comentario
	de varias linhas*/
	
	/*Variaveis tem de ter TIPO e NOME;
	TIPO NOME = VALOR;*/

	int vidas=0; //variavel do tipo inteiros ou seja de valores inteiros. Ex: 10, 25
	char letra='B'; //uma variavel do tipo char ela recebe uma letra, um character, ela tem o tamanho de 1 bite. EX: 'F'
	char letras[120]; //essa chave é um vetor que permite que você utilize o numero de caracteres descrito ali, mesmo q seja com char
	double decimal=5.2; //recebe numeral com casas decimais, tipo real. Ex: 2.5 ou 2.49999999
	float decimal2=5.2; //identico ao double porém com precisão menor, ou seja se receber numeros mt quebrados ele arredonda 2.499999 vira 2.5
	bool vivo=true; // 1 = true e 2 = false
	string nome="Fernanda"; //diferente de char recebe textos Ex: "Fernanda"
	
	/*o valor de uma variavel pode ser mudado a qualquer momento, assim como no CSS o que vem por ultimo é o que prevalece.
	se eu quisesse alterar o valor agora poderia usar, por exemplo:
	vidas=100; */
	
	//cout imprime resultados/valores
	//cin insere valores do teclado e atribui na variavel escolhida
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	
	
	cout << "\nVidas: " << vidas ; // "\n"  significa quebra de linha quando imprime
	cout << "\nLetra: " << letra ;
	cout << "\nDinheiro: " << decimal ;
	cout << "\nNome: " << nome ;
	
	//cout << vivo << "\n";
	
	/* pode imprimir varias variaveis num cout só:
	cout << vidas << "\n" << letra << "\n" << decimal << "\n" << vivo << "\n" << nome << "\n"; */
	
	
	return 0; //retorno esperado para int main
}
