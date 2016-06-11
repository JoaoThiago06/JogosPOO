// Tema 3 - Jogo de Corrida.
 #include <iostream>
 #include <string> // para usar a variável string
 #include <ctime>
 using namespace std;
 
 void imprimir_espacos(int total);
 
 int main() //função principal 
 {
 	bool sair = false;
    string competidor1; //variável string para os competidores
    string competidor2; //variável string para os competidores
 	int distancia1 = 0; //quantidade do espaço inicial
    int distancia2 = 0; //quantidade do espaço inicial
    int acabar;
    
    //Mostrar na tela o letreiro
    cout << "Corrida do If" << endl;
    
    cout << "Digite o nome do primeiro competidor:" << endl; //mostra na tela, e depois digitar o que foi solicitado 
 	cin >> competidor1; //salvar o que foi digitado
    //mesma coisa em baixo
 	cout << "Digite o nome do segundo competidor:" << endl;
    cin >> competidor2;
 
    while (sair==false)
 	{
        int total_espacos = 60;
		//calculo para gerar um numero aleatório
		srand((int)time(0));
		//Competidor 1
		total_espacos = rand() % 3 + 1;
		distancia1 = distancia1 + total_espacos;

        //Competidor 2
		total_espacos = rand() % 3 + 1;
		distancia2 = distancia2 + total_espacos;
		

	    cout << "CORRIDA DO IF:" << endl;

		cout << "LARGADA                                                      CHEGADA" << endl;
        
        //Fazendo o carrinho
		cout << "Primeiro Competidor:" << competidor1 << endl;
		imprimir_espacos(distancia1);
		cout << "  _  " << endl;
		imprimir_espacos(distancia1);
		cout << "-o-o>" << endl;
		cout << "____________________________________________________________________" << endl;//Imprimindo a pista 

																										

		cout << "Segundo Competidor:" << competidor2 << endl;
		imprimir_espacos(distancia2);
		cout << "  _  " << endl;
		imprimir_espacos(distancia2);
		cout << "-o-o>" << endl;
		cout << "____________________________________________________________________" << endl;//Imprimindo a pista 

																										  

		//Apagar o que aconteceu na rodada
		system("cls");


		//Se sair não limpa a tela.
		if (distancia1 >= 60 || distancia2 >= 60)
		{
			sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");

	}
    //para saber que ganhou a corrida
	if (acabar >= 60) cout << competidor1 << " Você ganhou XD" << endl;
	else if (acabar >= 60) cout << competidor2 << " Você ganhou XD" << endl;
	else cout << "Empate" << endl;	
	
	return 0;
    }

    void imprimir_espacos(int total) //retomando o função void
    {
	for (int quantidade_atual = 0; quantidade_atual < total; quantidade_atual++) //Laço de repetição
	{ 
		cout << " ";
	}
    }
