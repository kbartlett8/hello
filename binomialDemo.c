/**
 *Kayla Barlett
 *Date: 2024-2-12
 *Shows how Pascal's Rule works, and allows to show the choose funication works
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "binomial.h"

int main(int argc, char *argv[]){
    if(argc != 3){
        return 1;
    }
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);

    if (k > n){
        return 1;
    }

    long **memory = malloc((n + 1) * sizeof(long *));

    for (int i = 0; i <= n; i++) {
        memory[i] = malloc((k + 1) * sizeof(long));
    }

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= k; j++){
            memory[i][j] = -1;
        }
    }

    long result = choose(n, k, memory);
    printf("%li\n", result);

    for (int i= 0; i <= n; i++){
        free(memory[1]);
    }

    free(memory);

  return 0;
}
