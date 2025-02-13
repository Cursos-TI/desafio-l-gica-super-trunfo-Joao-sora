#include <stdio.h>

int main(){

    int pontoturistico, pib;
    float area, populacao;
    char cidade[60], pais[30], estado[60];
    int pontoturistico1, pib1;
    float area1, populacao1;


        printf("Carta 1A01\n");
        
        printf("Código do pais: \n");
        scanf("%s", &pais);

        printf("Código do estado: \n");
        scanf("%s", &estado);

        printf("Código da cidade: \n");
        scanf("%s", &cidade);

        printf("Populacao: \n");
        scanf("%f", &populacao);

        printf("Area: \n");
        scanf("%f", &area);

        printf("PIB: \n");
        scanf("%d", &pib);

        printf("Pontos Turisticos: \n");
        scanf("%d\n", &pontoturistico);

            printf("Pais: %s\n", pais); 
            printf("Cidade: %s\n", cidade);
            printf("Estado: %s\n", estado);
            printf("Area: %f\n", area); // utlizar para comparação
            printf("PIB: %d\n", pib);  // utlizar para comparação
            printf("População: %f\n", populacao);  // utlizar para comparação
            printf("Ponto Turistico: %d\n", pontoturistico);  // utlizar para comparação

    
    printf("Carta 1A02\n");
        
        printf("Código do pais: \n");
        scanf("%s", &pais);

        printf("Código do estado: \n");
        scanf("%s", &estado);

        printf("Código da cidade: \n");
        scanf("%s", &cidade);

        printf("Populacao: \n");
        scanf("%f", &populacao1);

        printf("Area: \n");
        scanf("%f", &area1);

        printf("PIB: \n");
        scanf("%d", &pib1);

        printf("Pontos Turisticos: \n");
        scanf("%d\n", &pontoturistico1);

            printf("Pais: %s\n", pais); 
            printf("Cidade: %s\n", cidade);
            printf("Estado: %s\n", estado);
            printf("Area: %f\n", area1); // utlizar para comparação
            printf("PIB: %d\n", pib1);  // utlizar para comparação
            printf("População: %f\n", populacao1);  // utlizar para comparação
            printf("Ponto Turistico: %d\n", pontoturistico1);  // utlizar para comparação

    if (area > area1){
        printf("Carta 1A01 tem a area maior\n"); 
}   else {
        printf("Carta 1A02 tem a area maior\n");
}
    if (pib > pib1){
        printf("Carta 1A01 tem o maior PIB\n"); 
}   else {
        printf("Carta 1A02 tem  o maior PIB\n");
}
    if (populacao > populacao1){
        printf("Carta 1A01 tem a população maior\n"); 
}   else {
        printf("Carta 1A02 tem a populção maior\n");
}
if (pontoturistico > pontoturistico1){
        printf("Carta 1A01 tem mais pontos turisticos\n"); 
}   else {
        printf("Carta 1A02 tem mais pontos turisticos\n");        
}

 return 0;   
}