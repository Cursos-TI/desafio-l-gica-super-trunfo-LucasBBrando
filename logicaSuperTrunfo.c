#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
unsigned int numCidade1 = 1,numCidade2 = 2;
char cidade1[50], cidade2[50];
unsigned int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
unsigned int pontosTuristicos1, pontosTuristicos2;
float dencidadePopulacao1;// = (float) populacao1 / area1
float pibCapita1;// = pib1 / (float) populacao1;
float somaTotal1;// = populacao1 + area1 + pib1 + pontosTuristicos1;
float dencidadePopulacao2;// = (float) populacao2 / area2;
float pibCapita2;// = pib2 / (float)populacao2;
float somaTotal2;// = (float) populacao2 + area2 + pib2 + (float)pontosTuristicos2;

// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio    unsigned int numCidade1 = 1,numCidade2 = 2;
void entradaDados(int x){//Coleta de dados para carta-completo

    printf("Insira o nome da Cidade:\n");
    if (x == 1){
        scanf("%s",&cidade1);
    }else if(x == 2){
        scanf("%s",&cidade2);
    }

    printf("Insira o numero da População:\n");
    if(x == 1){
        scanf("%u",&populacao1);
    }else if(x == 2){
        scanf("%u",&populacao2);
    }

    printf("Insira o tamanho da Área da Cidade:\n");
    if(x == 1){
        scanf("%f",&area1);
    }else if(x == 2){
        scanf("%f",&area2);
    }

    printf("Insira o PIB:\n");
    if(x == 1){
        scanf("%f",&pib1);
    }else if(x == 2){
        scanf("%f",&pib2);
    }

    printf("Insira os Pontos Turisticos da Cidade:\n");
    if(x == 1){
        scanf("%d",&pontosTuristicos1);
    }else if(x == 2){
        scanf("%d",&pontosTuristicos2);
    }
}

void exibirCarta(){
    //Primeira carta
    printf("Primeira Carta Inserida!!\n \n");
    printf("*Cod: %d \n*Nome da Cidade: %s\n*População: %d\n",numCidade1, cidade1, populacao1);
    printf("*Área: %.2f \n*PIB da Cidade: $%.2f \n*Pontos turisticos: %d \n \n", area1, pib1, pontosTuristicos1);

    printf("*PIB per Capita: %.2f \n*Dencidade Populacional: %.2f \n \n", pibCapita1, dencidadePopulacao1);
    printf("**SUPER PODER: %.0f** \n \n", somaTotal1);
        
    //Segunda carta 
    printf("Segunda Carta Inserida!!\n \n");
    printf("*Cod: %d \n*Nome da Cidade: %s\n*População: %d\n",numCidade2, cidade2, populacao2);
    printf("*Área: %.2f \n*PIB da Cidade: $%.2f \n*Pontos turisticos: %d \n \n", area2, pib2, pontosTuristicos2);

    printf("*PIB per Capita: %.2f \n*Dencidade Populacional: %.0f \n \n", pibCapita2, dencidadePopulacao2);
    printf("**SUPER PODER: %.0f** \n \n", somaTotal2);

}

void coletarComparacao(){
    //Preparar para escolher comparacao	
    int atributo;
    printf("Escolha qual dos atributos deseja comparar: \n");
    printf("1. População! \n");
    printf("2. Área! \n");
    printf("3. PIB! \n");
    printf("4. Pontos Turisticos! \n");
    printf("5. PIB per Capita! \n");
    printf("6. Dencidade Populacional! \n");
    printf("7. Super Poder! \n");
    printf("Escolha o atributo: ");
    scanf("%d", &atributo);
    
    switch (atributo)
    {
        case 1:
            if(populacao1 > populacao2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
        case 2:
            if(area1 > area2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
        case 3:
            if(pib1 > pib2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
        case 4:
            if(pontosTuristicos1 > pontosTuristicos2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
        case 5:
            if(pibCapita1 > pibCapita2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
        case 6:
            if(dencidadePopulacao1 > dencidadePopulacao2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
        case 7:
            if(somaTotal1 > somaTotal2){
                printf("A cidade %s tem maior população que a cidade %s\n", cidade1, cidade2);
            }else{
                printf("A cidade %s tem maior população que a cidade %s\n", cidade2, cidade1);
            }
            break;
    default:
        printf("Erro:Atributo não encontrado\n");
        break;
    }
    
}

int main() {
// Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    printf("*****BEM VINDO AO SUPER TRUNFO *****\n");
    //menu de opções
    int menu = 1;

    printf("Menu de Opções: \n");
    printf("1 - para Iniciar Jogo\n");
    printf("2 - para Sair\n");
    scanf("%d", &menu);
    switch (menu){
    case 1:
        printf("***VAMOS AGORA COLOCAR AS INFORMAÇÕES*** \n\n");
        
        printf("PRIMEIRA CARTA!! \n \n");
        entradaDados(1);
        printf("\nSEGUNDA CARTA!! \n \n");
        entradaDados(2);
        //Variaveis de atributos
        dencidadePopulacao1 = (float) populacao1 / area1;
        pibCapita1 = pib1 / (float) populacao1;
        somaTotal1 = populacao1 + area1 + pib1 + pontosTuristicos1;
        dencidadePopulacao2 = (float) populacao2 / area2;
        pibCapita2 = pib2 / (float)populacao2;
        somaTotal2 = (float) populacao2 + area2 + pib2 + (float)pontosTuristicos2;

        // Comparação de Cartas:
        // Desenvolva a lógica de comparação entre duas cartas.
        // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        // Exemplo:
        // if (populacaoA > populacaoB) {
        //     printf("Cidade 1 tem maior população.\n");
        // } else {
        //      printf("Cidade 2 tem maior população.\n");
        // }
        // Exibição dos Resultados:
        // Após realizar as comparações, exiba os resultados para o usuário.
        // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
        // Exemplo:
        // printf("A cidade vencedora é: %s\n", cidadeVencedora);
        
        printf("\n \n \n");
        printf("##AGORA AS CARTAS## \n \n");
        exibirCarta();

        //primeira carta - colocar a comparação- concluid

        //char* resultComparacao1 = (pibCapita1 > pibCapita2) ? "Primeira cidade ganhou" : "Segunda cidade ganhou";
        //char* resultComparacao2 = (dencidadePopulacao1 < dencidadePopulacao2) ? "Primeira cidade ganhou" : "Segunda cidade ganhou";
        //char* resultComparacao3 = somaTotal1 > somaTotal2 ? "Primeira cidade ganhou" : "Segunda cidade ganhou";
        
        //Comparações das cartas
        printf("COMPARACAO!\n\n");
        coletarComparacao();
        //printf("*PIB PER CAPITA: %s\n", resultComparacao1);
        //printf("*DENCIDADE POPULACIONAL: %s\n", resultComparacao2);
        //printf("*SUPER PODER: %s\n", resultComparacao3);
        break;
    default:
        printf("Saindo do jogo...\n");
        break;
    }
   

    return 0;
