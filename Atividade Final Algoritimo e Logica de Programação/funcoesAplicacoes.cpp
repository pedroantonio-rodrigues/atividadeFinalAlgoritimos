#include "funcoesAplicacoes.h"

int menu(){
	int opcao = 0;
		std::cout << "Selecione uma opcao: " << "\n"; 
		std::cout << " 1 --- Cadastrar Aluno --- " << "\n";
		std::cout << "2 --- Medias --- " << "\n";
		std::cout << "3 --- Finalizar --- " << "\n";
		std::cin >> opcao;
		system("cls");
	return opcao;
}
bool cadastraAluno (Aluno aluno){
	std::ofstream arquivo;
	arquivo.open("database.csv", std::fstream::app);
	if (!arquivo.is_open()){
		std::cout << "Arquivo não encontrado \n ";
		return false;
	}
		arquivo << aluno.nome << ";" 
			<< aluno.matricula << ";"
			<< aluno.aep1 << ";"
			<< aluno.prova1 << ";"
			<< aluno.aep2 << ";"
			<< aluno.prova2 << ";"
			<< aluno.sub << ";"
			<< aluno.media << ";"
			<< aluno.status << "\n";
	
	arquivo.close();
	return true;
	
}

void perguntaAluno(Aluno aluno){
	std::ifstream arquivo;
	arquivo.open("database.csv",std::fstream::app);
	
	std::cout << "---- CADASTRO DE ALUNOS E NOTAS ----" << "\n";
		std::cout << "Digite o nome do aluno: "; 
		std:: getline(std::cin, aluno.nome);
		std::cout << "digite a matricula do aluno: ";
        std::cin <<  aluno.matricula;
        std::cout << "Digite a nota da AEP1: ";
        std::cin << aluno.aep1;
		std::cout <<  "Digite a nota da primeira prova: ";
		std::cin << aluno.prova1;
		std::cout << "Digite a nota da AEP1: ";
        std::cin << aluno.aep2;
		std::cout <<  "Digite a nota da primeira prova: ";
		std::cin << aluno.prova2;	
		 	
}
float medias(Aluno aluno){
	std::cout << "---- MEDIAS ----" << "\n";
	std::ofstream arquivo;
	arquivo.open("database.csv",std::fstream::app);
	
	float media = 0;
	
	float notaPrimeiroBimeste(std::fstream::app);{
		return aluno.aep1 + aluno.prova1;
	}
	float notaSegundoBimestre(std::fstream::app);{
		return aluno.aep2 + aluno.prova2;
	}
	 
	 media = (notaPrimeiroBimeste + notaSegundoBimestre) / 2;
	 arquivo.close();
	return media;	
}
 int finaliza(Aluno aluno){
	std::cout << "---- FINALIZA ----" << "\n";
	std::ofstream arquivo;
	arquivo.open("database.csv",std::fstream::app);
	std::cout << aluno.status;
	arquivo.close();
	return 0;
}

