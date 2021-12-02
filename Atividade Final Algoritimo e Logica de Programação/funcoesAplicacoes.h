#include <iostream>
#include <fstream>



// Estrutura de Alunos
struct Aluno {
	std::string nome;
	std::string matricula;
	float aep1;
	float prova1;
	float aep2;
	float prova2;
	float sub;
	float media;
	std::string status;
} typedef Aluno;

/**
* Esta função é chamada para exibir o menu
* na tela do usuário e retornar a opção 
* selecionada
* retorna o char digitada pelo usuário
*/
int menu ();


/**
* Esta função é chamada para permitir 
* o cadastro de um Aluno, retorna
* true caso o cadastro tenha ocorrido com sucesso
* ou false caso acontecer um problema
*/
bool cadastro(Aluno);

/**
* Esta função esta sendo usada
* para teste do "esqueleto do projeto"
*/
// void teste ();
