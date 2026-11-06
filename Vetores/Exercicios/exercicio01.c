#include <stdio.h>
int main(){
    int n[5];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Insira o numero %d: ", i);
        scanf("%d", &n[i]);
    }
    printf("Ordem inversa\n");
    for(i = 4; i >= 0; i--){
        printf("n[%d] = %d\n", i, n[i]);
        
    }
    return 0;
}