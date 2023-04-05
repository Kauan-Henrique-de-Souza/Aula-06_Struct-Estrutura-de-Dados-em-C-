
#include <stdio.h>

int main()
{
    struct dados_de_aluno
    {
        char nome[50];
        float media;
        int ano;
    };
    
    struct dados_de_aluno aluno;
    printf("Digite o nome do aluno:");
    fgets(aluno.nome,50,stdin);
    printf("Digite a média escolar:");
    scanf("%f",&aluno.media);
    printf("Digite o ano escolar:");
    scanf("%d",&aluno.ano);
    
    printf("Nome ---->%s", aluno.nome);
    printf("Média ---->%f\n",aluno.media);
    printf("Ano---->%d\n",aluno.ano);

    return 0;
}
