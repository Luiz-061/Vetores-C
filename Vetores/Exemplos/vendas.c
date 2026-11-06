#include <stdio.h>

int main(){
    float vendas[7] = {850, 1200, 970, 1500, 1100, 640, 1320};

    float total = 0;
    int i, bons = 0;

    for(i = 0; i < 7; i++){
        total+=vendas[i];
        if(vendas[i] > 1000){
            bons++;
        }
    }
    printf("Total das vendas: %.2f", total);
}