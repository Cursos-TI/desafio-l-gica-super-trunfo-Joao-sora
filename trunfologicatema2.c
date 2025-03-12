#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(){

         // primeiro número representa paises
         // 1 letra representa estado
         // 0 mais um "número" representa cidade
        int criacao;
        int pontoturistico, pib, pontoturistico1, pib1, comparacao, AI;
        float area, densidadep, media, area1, densidadep1, media1; 
        char cidade[60], cidade1[60], estado[35], city[35], pais[35], pais1[35], city1[35], estado1[35];
        unsigned int populacao, populacao1;
        double capital, capital1;
        srand(time(0));
        repete:
        printf("\n##### MENU GERAL DO SUPER TRUNFO #####\n");
        printf("\n1- Iniciar o jogo.\n");
        printf("2- Regras do jogo.\n");
        printf("3- Visualização das cartas cadastradas.\n");
        printf("4- Menu de comparação.\n");
        printf("5- Sair do jogo.\n");
        printf("Escolha sua opção: ");
        scanf("%d", &criacao);

        switch (criacao)
        {
        case 1:
        printf("\nOlá jogador\t\n\n");
        printf("Abaixo vamos cadastrar suas cartas!!!\t\n\n");
   
        // Criação da carta 1
        printf("---Carta 1---\n\n");

        printf("Informe o codigo do Pais (Um numero de 1 a 10): ");
        scanf("%s", &pais);
        //fflush(stdin);
        printf("Informe o codigo do estado (Uma letra de A a H): ");
        scanf("%s", &estado);
        getchar();
        printf("Informe o codigo da cidade (Um numero de 01 a 04): ");
        scanf("%s", &city);
        //fflush(stdin);
        
        printf("Codigo da carta: %s%s%s\n", pais, estado, city);
        
        printf("Nome da Cidade:(sem espaço!!!) ");
        scanf("%s", &cidade);
        //fflush(stdin);
         //fgets(cidade, 60, stdin);
        //printf("CIDADE: %s", cidade);

        printf("Populacao: ");
        scanf("%umil hab.", &populacao);

        printf("Area: ");
        scanf("%fKm²", &area);

        printf("PIB: ");
        scanf("%d", &pib);

        printf("Pontos Turisticos: ");
        scanf("%d", &pontoturistico);

        densidadep = populacao/area;
        capital = pib/populacao;
    
        printf("Densidade populacional: %2.f(hab/Km²) \n", densidadep);
        printf("PIB per capita: %.2f\n", capital);
        
        //criação da carta 2
        printf("\n---Carta 2---\n\n"); 

        
        printf("Informe o codigo do Pais (Um numero de 1 a 10): ");
        scanf("%s", &pais1);
        printf("Informe o codigo do estado (Uma letra de A a H): ");
        scanf("%s", &estado1);
        getchar();
        printf("Informe o codigo da cidade (Um numero de 01 a 04): ");
        scanf("%s", &city1);
        
        printf("Codigo da carta: %s%s%s\n", pais1, estado1, city1);

        printf("Nome da cidade:(sem espaço!!!) ");
        scanf("%s", &cidade1);
        //fgets(cidade, 60, stdin);
        //printf("Cidade %s ", cidade1);

        //implemantação da população, area, pib, etc... via numero secreto
        printf("Digite 0 para prosseguir\n");
        scanf("%d", &AI);
        
        switch (AI)
        {
        case 0:
                      populacao1 <= 50;
                      populacao1 = rand() % 1000;
                printf("Populacao: %u mil hab.\n", populacao1);
                      
                      area1 <= 100;
                      area1  = rand() % 1000;
                printf("Area: %fKm²\n", area1);
        
                       pib1 <= 100;
                       pib1 = rand() % 1000;
                printf("PIB: %d Bilhões de reais\n", pib1);
        
                       pontoturistico1 = rand() % 100;
                printf("Pontos Turisticos: %d\n", pontoturistico1);
                
                        densidadep1 = populacao1/area1;
                        capital1 = pib1/populacao1;
        
                printf("Densidade populacional: %.2f(hab/Km²)\n", densidadep1);
                printf("PIB per capita: %.2f\n", capital1); goto repete;
        
        break; 
        }        
                break;
        case 2: //Regras do jogo
               printf("\nRegra 1: Ao criar suas cartas não utilizar caracteres especias.\n");
               printf("Regra 2: Para o bom funcionamento do jogo seguir os passos inseridos no menu.\n");
               printf("Regra 3: Não ultrapassar o limite permitido de 1.000 ao inserir as informações da população, área, PIB e não ultrapassar \no limite permitido de 100 para os pontos turisticos.\n");
               printf("Regra 4: Utilizar o terminal para inserção de dados, comparação e conclusão do jogo.\n");
               printf("Regra 5: Após finalizar o cadastro das cartas, utilizar os dados cadastrados para comparação onde o maior vence, exceto com densidade populacional onde o menor vencer.");
               printf("Após essas intruções, retorne para o menu, um bom jogo e se divirta!!!\n"); goto repete; 
                break;
        case 3: //Dados gerais das cartas cadastradas
        (media = (float) pontoturistico + pib + area + populacao + densidadep + capital / 6);

        printf("\n---\tDados Gerais Cadastrados Carta 1---\n");

                printf("\nNome da Cidade: %s\n", cidade);    
                printf("Area: %f Km²\n", area); // utlizar para comparação
                printf("PIB: %d Bilhões de reais\n", pib);  // utlizar para comparação
                printf("População: %u mil hab.\n", populacao);  // utlizar para comparação
                printf("Ponto Turistico: %d na sua cidade\n", pontoturistico);  // utlizar para comparação
                printf("Densidade populacional: %.2f hab/Km²\n", densidadep);
                printf("PIB per capita: %.2f\n", capital);
                printf("Super Trunfo: %.1f (power card)\n", media); // media total

                 (media1 = (float) pontoturistico1 + pib1 + area1 + populacao1 + densidadep1 + capital1 / 6);

        printf("\n---\tDados Gerais Cadastrados Carta 2---\n");

                printf("\nNome da Cidade: %s\n", cidade1);
                printf("Area: %f Km²\n", area1); // utlizar para comparação
                printf("PIB: %d Bilhões de reais\n", pib1);  // utlizar para comparação
                printf("População: %u mil hab.\n", populacao1);  // utlizar para comparação
                printf("Ponto Turistico: %d na sua cidade\n", pontoturistico1);  // utlizar para comparação
                printf("Densidade populacional: %.2f hab/Km²\n", densidadep1);
                printf("PIB per capita: %.2f\n", capital1);
                printf("Super Trunfo: %.1f(power card)\n", media1);goto repete;// media total
                break;
                atualiza:
        case 4: //comparação das cartas cadastradas
        printf("\n!!!Jogador, agora vamos utilizar as informações cadastradas anteriormente para declararmos um vencedor!!!\n");

        printf("\n***Hora de escolher o atributo para comparação, que vença o melhor***\t\n\n");

        printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar PIB: Digite 2 !\n");
        printf("Comparar população: Digite 3 !\n");
        printf("Comparar pontos turisticos: Digite 4 !\n");
        printf("Comparar densidade populacional: Digite 5 !\n");
        printf("Comparar PIB per capita: Digite 6 !\n");
        printf("Comparar Super Trunfo: Digite 7 !\n");
        scanf("%d", &comparacao);

        // parte selecionada para comparação das cartas via terminal

        switch (comparacao)
                {
                case 1: // primeira comparação no case 1 
    if (area > area1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1);
}  else if (area < area1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1);
}   else {
                printf("\nHouve um empate!!!\n");
}
                reecomparacao:
                printf("\nEscolha uma segunda opção para comparação: \n");
        
        printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar PIB: Digite 1 !\n");
        printf("Comparar população: Digite 2 !\n");
        printf("Comparar pontos turisticos: Digite 3 !\n");
        printf("Comparar densidade populacional: Digite 4 !\n");
        printf("Comparar PIB per capita: Digite 5 !\n");
        printf("Comparar Super Trunfo: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao)
                {
                        case 1: // segunda comparação dentro do case 1
                        if (pib > pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1); goto repete;
                }   else if (pib < pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2:
                        if (populacao > populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1); goto repete;
                }   else if (populacao < populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3: 
                        if (pontoturistico > pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1); goto repete;
                }   else if (pontoturistico  < pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1); goto repete;        
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                        if (densidadep < densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1); goto repete;
                }   else if (densidadep > densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5: 
                        if (capital > capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); goto repete;
                }    else if (capital < capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;  

                        case 6:
                        if (media > media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1); goto repete;
                }    else if (media < media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break; 
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao;
                        break;
                } 
        break; // final segunda comoparação case 1

                case 2: // primeira comparação do case 2
    if (pib > pib1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1);
}   else if (pib < pib1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1);
}   else {
                printf("\nHouve um empate!!!\n");
}
                reecomparacao1:
                printf("\nEscolha uma segunda opção para comparação: \n");

                printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar população: Digite 2 !\n");
        printf("Comparar pontos turisticos: Digite 3 !\n");
        printf("Comparar densidade populacional: Digite 4 !\n");
        printf("Comparar PIB per capita: Digite 5 !\n");
        printf("Comparar Super Trunfo: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao) 
                {
                        case 1: // segunda comparação do case 2
                        if (area > area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1); goto repete;
                }  else if (area < area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2: 
                        if (populacao > populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1); goto repete;
                }   else if (populacao < populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3:
                        if (pontoturistico > pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1); goto repete;
                }   else if (pontoturistico  < pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1); goto repete;        
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                        if (densidadep < densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1); goto repete;
                }   else if (densidadep > densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5:
                        if (capital > capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); goto repete;
                }    else if (capital < capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;  

                        case 6:
                        if (media > media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1); goto repete;
                }    else if (media < media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break; 
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao1;
                        break;
                }
        break; // final segunda comparação case 2
                case 3: // primeira comparação do case 3
    if (populacao > populacao1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1);
}   else if (populacao < populacao1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); 
}   else {
                printf("\nHouve um empate!!!\n");
}
                reecomparacao2:
                printf("\nEscolha uma segunda opção para comparação: \n");

                printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar PIB: Digite 2 !\n");
        printf("Comparar pontos turisticos: Digite 3 !\n");
        printf("Comparar densidade populacional: Digite 4 !\n");
        printf("Comparar PIB per capita: Digite 5 !\n");
        printf("Comparar Super Trunfo: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao)
                {
                        case 1: // segunda comparação do case 3
                        if (area > area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1); goto repete;
                }  else if (area < area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2: 
                        if (pib > pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1); goto repete;
                }   else if (pib < pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3:
                        if (pontoturistico > pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1); goto repete;
                }   else if (pontoturistico  < pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1); goto repete;        
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                    if (densidadep < densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1); goto repete;
                }   else if (densidadep > densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5:   
                    if (capital > capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); goto repete;
                }    else if (capital < capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;  

                        case 6:   
                    if (media > media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1); goto repete;
                }    else if (media < media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break; 
                
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao2;
                        break;
                }

        break; // final da segunda comparação do case 3
                case 4: // primeira comparação case 4
    if (pontoturistico > pontoturistico1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1);
}   else if (pontoturistico  < pontoturistico1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1);
}   else {
                printf("\nHouve um empate!!!\n");
}
                reecomparacao3:
                printf("\nEscolha uma segunda opção para comparação: \n");

                printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar PIB: Digite 2 !\n");
        printf("Comparar população: Digite 3 !\n");
        printf("Comparar densidade populacional: Digite 4 !\n");
        printf("Comparar PIB per capita: Digite 5 !\n");
        printf("Comparar Super Trunfo: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao)
                {
                        case 1: // segunda comparação do case 4
                        if (area > area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1); goto repete;
                }  else if (area < area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2: 
                        if (pib > pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1); goto repete;
                }   else if (pib < pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3: 
                        if (populacao > populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1); goto repete;
                }   else if (populacao < populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                        if (densidadep < densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1); goto repete;
                }   else if (densidadep > densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5:   
                    if (capital > capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); goto repete;
                }    else if (capital < capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;  

                        case 6:   
                    if (media > media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1); goto repete;
                }    else if (media < media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break; 
                
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao3;
                        break;
                }

        break; // final da segunda comparação do case 4
                case 5: // primeira comparação do case 5
    if (densidadep < densidadep1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1);
}   else if (densidadep > densidadep1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1);
}   else {
                printf("\nHouve um empate!!!\n");
}
                reecomparacao4:
                printf("\nEscolha uma segunda opção para comparação: \n");

                printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar PIB: Digite 2 !\n");
        printf("Comparar população: Digite 3 !\n");
        printf("Comparar pontos turisticos: Digite 4 !\n");
        printf("Comparar PIB per capita: Digite 5 !\n");
        printf("Comparar Super Trunfo: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao)
                {
                        case 1: // segunda comparação case 5
                        if (area > area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1); goto repete;
                }  else if (area < area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2: 
                        if (pib > pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1); goto repete;
                }   else if (pib < pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3: 
                        if (populacao > populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1); goto repete;
                }   else if (populacao < populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                        if (pontoturistico > pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1); goto repete;
                }   else if (pontoturistico  < pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1); goto repete;        
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5:   
                    if (capital > capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); goto repete;
                }    else if (capital < capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;  

                        case 6:   
                    if (media > media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1); goto repete;
                }    else if (media < media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break; 
                
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao4;
                        break;
                }
        break; // final da segunda comparação do case 5
                case 6: // primeira comparação do case 6
    if (capital > capital1){ 
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); 
}    else if (capital < capital1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1);
}    else {
                printf("\nHouve um empate!!!\n"); 
}
                reecomparacao5:
                printf("\nEscolha uma segunda opção para comparação: \n");

                printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar PIB: Digite 2 !\n");
        printf("Comparar população: Digite 3 !\n");
        printf("Comparar pontos turisticos: Digite 4 !\n");
        printf("Comparar densidade populacional: Digite 5 !\n");
        printf("Comparar Super Trunfo: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao)
                {
                        case 1: // segunda comparação case 6
                        if (area > area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1); goto repete;
                }  else if (area < area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2: 
                        if (pib > pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1); goto repete;
                }   else if (pib < pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3: 
                        if (populacao > populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1); goto repete;
                }   else if (populacao < populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                        if (pontoturistico > pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1); goto repete;
                }   else if (pontoturistico  < pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1); goto repete;        
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5:   
                        if (densidadep < densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1); goto repete;
                }   else if (densidadep > densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 6:   
                    if (media > media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1); goto repete;
                }    else if (media < media1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break; 
                
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao5;
                        break;
                }

        break;  // final da segunda comparação case 6
                case 7: // primeira comparação case 7
    if (media > media1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade, pais, estado, city, media >= media1);
}    else if (media < media1){
                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais Super Trunfo %d\n", cidade1, pais1, estado1, city1, media <= media1);
}    else {
                printf("\nHouve um empate!!!\n"); 
}
                reecomparacao6:
                printf("\nEscolha uma segunda opção para comparação: \n");

                printf("\n----------- MENU DE COMPARAÇÃO -----------\n\n");
        printf("Comparar area: Digite 1 !\n");
        printf("Comparar PIB: Digite 2 !\n");
        printf("Comparar população: Digite 3 !\n");
        printf("Comparar pontos turisticos: Digite 4 !\n");
        printf("Comparar densidade populacional: Digite 5 !\n");
        printf("Comparar PIB per capita: Digite 6 !\n");
        scanf("%d", &comparacao);

                switch (comparacao)
                {
                        case 1:
                        if (area > area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a area maior %d\n", cidade, pais, estado, city, area >= area1); goto repete;
                }  else if (area < area1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a area maior %d\n", cidade1, pais1, estado1, city1, area <= area1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 2: 
                        if (pib > pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o maior PIB %d\n", cidade, pais, estado, city, pib >= pib1); goto repete;
                }   else if (pib < pib1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o maior PIB %d\n", cidade1, pais1, estado1, city1, pib <= pib1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 3: 
                        if (populacao > populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem a maior população %d\n", cidade, pais, estado, city, populacao >= populacao1); goto repete;
                }   else if (populacao < populacao1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a maior população %d\n", cidade1, pais1, estado1, city1, populacao <= populacao1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 4:
                        if (pontoturistico > pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade, pais, estado, city, pontoturistico >= pontoturistico1); goto repete;
                }   else if (pontoturistico  < pontoturistico1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem mais pontos turisticos %d\n", cidade1, pais1, estado1, city1, pontoturistico <= pontoturistico1); goto repete;        
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 5:   
                        if (densidadep < densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s -bcodigo %s%s%s tem a densidade menor %d\n", cidade, pais, estado, city, densidadep <= densidadep1); goto repete;
                }   else if (densidadep > densidadep1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem a densidade menor %d\n", cidade1, pais1, estado1, city1, densidadep >= densidadep1); goto repete;
                }   else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;

                        case 6:   
                        if (capital > capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 1 - Cidade 1: %s - codigo %s%s%s tem o PIB per capita melhor %d\n", cidade, pais, estado, city, capital >= capital1); goto repete;
                }    else if (capital < capital1){
                                printf("\nCarta 1 - Cidade 1: %s - codigo da carta %s%s%s\n", cidade, pais, estado, city);
                                printf("Carta 2 - Cidade 2: %s - codigo da carta %s%s%s\n", cidade1,pais1, estado1, city1);
                                printf("\nCarta 2 - Cidade 2: %s - codigo %s%s%s tem o PIB per capital melhor %d\n", cidade1, pais1, estado1, city1, capital <= capital1); goto repete;
                }    else {
                                printf("\nHouve um empate!!!\n"); goto repete;
                }
                        break;  
                
                default:
                        printf("Opção invalida, favor inserir novamente!\n"); goto reecomparacao6;
                        break;
                }

        break; 
default:
                printf("\nOpção invalida, favor inserir novamente!\n"); goto atualiza;
        break;
                }
                break;
        case 5:
                printf("Encerrando o sessão...\n");
                break;
        default:
                printf("Opção invalida, favor inserir novamente!\n"); goto repete;
                break;
            }

}

int main (){

        printf("\n\nBem Vindo ao Super Trunfo.\n");
        menu();
        
                //parte de comparação geral de todos os atributos.

                /*printf("\nCarta com a maior area: %d\n", area >= area1);
                printf("Carta com o maior PIB: %d\n", pib >= pib1);
                printf("Carta com a maior populacão: %d\n", populacao >= populacao1);
                printf("Carta com o maior ponto turistico: %d\n", pontoturistico >= pontoturistico1);
                printf("Carta com a menor densidade populacional: %d\n", densidadep <= densidadep1);
                printf("Carta com o maior PIB per capita: %d\n", capital >= capital1);
                printf("Carta com o maoir Trunfo (power card): %d\n", media >= media1); 

    if (media >= media1) {
        printf ("Carta 1 codigo %s%s%s ganhou\n", pais, estado, city);
}   else {
        printf("Carta 2 codigo %s%s%s ganhou\n", pais1, estado1, city1);
}
*/
 return 0;   
}