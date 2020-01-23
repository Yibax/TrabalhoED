#include <stdio.h>
#include <stdlib.h>

void ListarDisciplina(FILE *arquivo){
	char nome[30];
	while(fscanf(arquivo, "%s", nome) != EOF){
		printf("%s\n", nome);
	}
	fclose(arquivo);
}

int main(){
	int opcao;
	FILE *arqNome;
	if ((arqNome = fopen("Nome.txt","rt")) == NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		return 0;
	}
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
	if (opcao == 1){
		ListarDisciplina(arqNome);
	}
	return 0;
}