void verificar(Lista *li_1, Lista *li_2){    
    Lista *no1 = NULL; //criando nó 1
    no1 = li_1->prox; //inicializando o nó 1 no primeiro elemento da lista 1
    
    Lista *no2 = NULL; //criando o nó 2
    no2 = li_2->prox; //inicializando o nó 2 no primeiro elemento da lista 2
    
    int iguais = 0; //variável para verificar se as listas são iguais
    
    //encontrar o tamanho da lista 1 e o tamanho da lista 2 e comparar, pois se for diferente as listas ja nao sao iguais
    
    int tam1 = 0, tam2 = 0; //declarando as variaveis para encontrar o tamanho de cada lista
    
    while (no1 != NULL){ //fazendo um while para percorrer toda a lista 1 e encontrar o tamanho dela
        tam1++;
        no1 = no1->prox;
    }
    
    while (no2 != NULL){ //fazendo um while para percorrer toda a lista 2 e encontrar o tamanho dela
        tam2++;
        no2 = no2->prox;
    }

    if (tam1 != tam2){
        printf("Diferentes!");
    }
    
    no1 = li_1->prox; //reapontando o no 1 pro primeiro elemento da lista 1
    no2 = li_2->prox; //reapontando o no 2 para o primeiro elemento da lista 2
    
    while (no1 != NULL && no2 != NULL){ //fazendo um while percorrendo ambas as listas inteiras (ou seja, enquanto os elementos não forem NULL vai continuar percorrendo)
        if (no1->numero == no2->numero){ //se o elemento atual de no 1 for igual ao elemento atual de no 2 aumenta uma quantidade na variavel "iguais"
            iguais++;
        }
        no1 = no1->prox; //atualizando a posicao dos nos
        no2 = no2->prox;
    }
    
    if (iguais == tam1){ //se a quantidade de "iguais" for igual ao tamanho da lista 1 (consequentemente igual ao tamanho da lista 2), então eles são iguais
        printf("Iguais!");
    }
    else{
        printf("Diferentes!");
    }

}