#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao;
	printf("Ola professor,\nX alunos nao estao matriculados.\nO que deseja fazer:\n");
	printf("1 Listar disciplinas\n");
	printf("2 Adicionar disciplina\n");
	printf("3 Remover disciplina\n");
	printf("4 Listar alunos sem disciplina\n");
	printf("5 Adicionar aluno\n");
	printf("6 Remover aluno\n");
	printf("7 Incluir aluno em disciplina\n");
	printf("8 Gerenciar disciplina\n");
	printf("9 Salvar alteracoes\n");
	printf("10 Sair\n");
	printf("Digite a opcao: ");
	scanf("%d", &opcao);
	return 0;
}