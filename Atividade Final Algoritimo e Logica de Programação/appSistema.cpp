#include "funcoesAplicacoes.cpp"

int main () {
	int opcao = 0;
	int qtdeAluno = 1; 
	Aluno aluno [100]
	do {
	   opcao = menu();	
	   switch (opcao) {
	   		case 1:
	   			cadastro();
	   		break;
	   		case 2:
	   			medias();
	   		break;
	   		case 3:
	   			finaliza()
	   		default:
	   			std::cout << "Opcao invalida Tente Novamente!\n";
	   }
	} while(opcao != 3);	
}
