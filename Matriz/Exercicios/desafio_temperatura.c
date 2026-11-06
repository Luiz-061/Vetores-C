#include <stdio.h>

int main()
{
    float t[4][5];
    int i, j, k;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            if(i == 0) t[i][j] = 100;
            else t[i][j] = 20; 
        }
    }
   for(k = 1; k <= 100; k++){
     for(i = 1; i < 3; i++){
        for(j = 1; j < 4; j++){
          t[i][j] = (t[i-1][j] + t[i+1][j] + t[i][j-1] + t[i][j+1]) / 4;
        }
    }
   }
     
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%6.1f c", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}