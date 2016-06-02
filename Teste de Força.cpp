//Meu primeiro código em C++ 
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int A = 4, D = 1;
	int dano = 4-1;

	//imprimindo na tela
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "\nDigite o nome do jogador 2:" << endl;
	cin >> jog2;
	
	while (sair == false) {

		cout << " o                    o" << endl;
		cout << ".T./                \\.T." << endl;
		cout << " ^                    ^" << endl;
		cout << jog1 << "                " << jog2 << endl;
		cout << "Vida: " << vida1 << "           " << "Vida: " << vida2 << endl;
	    cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;

		system("pause");


		int dado7;

		// Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		// Gera um número aleatório entre 1 a 7, Primeiro Jogador
		dado7 = rand() % 7 + 1;
	   
	    if (dado7 > 4)
	    {
			vida1 = vida1 - dano;
			cout << jog1 << "Dano:" << - dano<< endl;
			cout << jog2 << "Acertou!" << endl;
			cin.get();
		}
			else if (dado7 <= 4)
		{

			cout << jog2 << "Errou!" << endl;
			cin.get();

		}
		
		// Gera um número aleatório entre 1 a 7, Segundo Jogador
		dado7 = rand() % 7 + 1;
		
		if (dado7 > 4)
		{
        	vida2 = vida2 - dano;
			cout << jog1 << "Dano:" << - dano << endl;
			cout << jog2 << "Acertou!" << endl;
			cin.get();
		}
			else if (dado7 <= 4)
		{

			cout << jog2 << "Errou!" << endl;
			cin.get();

		}
		
	  system("cls");
		
		// se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se continuar entao limpa a tela
		else system("cls");
	}


	cout << "Fim de jogo!" << endl;

	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;

}
