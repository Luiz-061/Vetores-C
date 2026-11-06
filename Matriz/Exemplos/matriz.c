#include <stdio.h>

int main()
{
    float t[4][5];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            if(i == 0) t[i][j] = 100;
            else t[i][j] = 20;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%6.1f", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
