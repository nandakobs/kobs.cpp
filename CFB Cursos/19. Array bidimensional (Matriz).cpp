#include <iostream>
using namespace std;

int main(){
	/* É um array de arrays, vetor de vetores.
	Fica de mais fácil entendimento quando você pensa que
	o primeiro indice representa Linhas e o segundo indice
	representa Colunas, como numa tabela. */

	int matriz[3][4];
	int l,c;

	/*matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;

	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;

	matriz[2][0]=2;
	matriz[2][1]=2;
	matriz[2][2]=2;
	matriz[2][3]=2;*/

	for(l=0; l<3; l++){
            for(c=0; c<4; c++){
                cin >> matriz[l][c];
            }
        }

	/* Poderiamos escrever todos esses valores usando FOR.
        for(l=0; l<3; l++){
            for(c=0; c<4; c++){
                cout << matriz[l][c] << " ";
            }
            cout << "\n";
        }

        Se quiser adicionar os valores pelo teclado fica assim:
        for(l=0; l<3; l++){
            for(c=0; c<4; c++){
                cin >> matriz[l][c];
            }
        }

	 */


	for(l=0;l<3;l++){
        for(c=0;c<4;c++){
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
	}

	return 0;
}
