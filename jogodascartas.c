#include <string.h>
#include <stdio.h>

char nome_estado[50];
char nome_cidade[50];
int codigo, populacao, qnt_turisticos;
float tamanho_cidade, PIB;


int main(){

    printf("---------------------------------------------------------------------------------------\n");
    printf("Boas vindas jogador, crie duas cartas com informações de estados reais para iniciarmos!\n");
    printf("---------------------------------------------------------------------------------------\n");

    printf("---------------------------------------------------------------------------------------\n");
    printf("Inclua essas informações e esteje ciente o código das cidade vão de 01 a 04! Aproveite!\n");
    printf("---------------------------------------------------------------------------------------\n");

    printf("Crie a sua 1° carta \n");
    printf("Nome do estado:");
    fgets(nome_estado, sizeof(nome_estado), stdin);

    // Remove o '\n' que o fgets traz do Enter
    nome_estado[strcspn(nome_estado, "\n")] = '\0';

    printf("Nome da cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);

    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    printf("Código da carta:");
    scanf("%d", &codigo);

    printf("População total:");
    scanf("%d", &populacao);

    printf("Área total da cidade:");
    scanf("%f", &tamanho_cidade);

    printf("PIB total:");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos existem:");
    scanf("%d", &qnt_turisticos);



    
    
    printf("1° Carta:");
    printf("Nome do Estado: %s\n", nome_estado);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Código: %s", nome_estado); printf("%02d\n", codigo); // %02d força com que o 0 no inicio do código apareça no printf
    printf("População total: %d\n", populacao);
    printf("Tamanho total da cidade: %.2f\n", tamanho_cidade);
    printf("PIB total: %.2f\n", PIB);
    printf("Quantidade de pontos turísticos: %d\n", qnt_turisticos);


    return 0;

}