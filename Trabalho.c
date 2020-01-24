#include <stdio.h>
#include <stdlib.h>

typedef struct _disciplina{
	char disciplina[3];
	int N_alunos;
} Disciplina;
Disciplina* CriarLista (){
	Disciplina* disciplinas = (Disciplina*)malloc(sizeof(Disciplina));
	if (disciplinas == NULL){
		printf("Sem memoria disponivel!\n");
		exit(0);
	}
	return disciplinas;
}

void ListarDisciplina(FILE *arquivo, Disciplina *disciplinas){
	rewind(arquivo);
	printf("Disciplina   Aluno\n");
	while(fscanf(arquivo, "%s %d", disciplinas->disciplina, &disciplinas->N_alunos) != EOF){
		printf("%s           %d\n", disciplinas->disciplina, disciplinas->N_alunos);
	}
}

int main(){
	int opcao;
	FILE *arqNome;
	Disciplina *disciplinas = CriarLista();
	if ((arqNome = fopen("Nome.txt","at+")) == NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		return 0;
	}
	while(1){
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
			ListarDisciplina(arqNome, disciplinas);
		}
		if (opcao == 10){
			fclose(arqNome);
			exit(0);
		}
		printf("Pressione enter para voltar");
		fflush(stdin);
		getchar();
		system("cls || clear");
	}
	return 0;
}
