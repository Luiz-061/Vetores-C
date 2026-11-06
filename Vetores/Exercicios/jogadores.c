#include <stdio.h>

int main(){
    int jogador[5];
    int maior = 0;
    int total = 0;
    int maisdez = 0;
    int i;

    for(i = 0; i < 5; i++){
        printf("Pontos jogador %d: ", i);
        scanf("%d", &jogador[i]);
        total+=jogador[i];
        if(jogador[i] > 10){
            maisdez++;
        }
        if(jogador[i] > maior){
            maior = jogador[i];
        }
    }

    printf("Total de pontos dos jogadores: %d\n", total);
    printf("Quantidade de jogadores com mais de 10 pontos: %d\n", maisdez);
    printf("Jogador com maior ponto: %d", maior);
    return 0;
}