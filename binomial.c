/**
 *Kayla Bartlett
 *Date: 2024-2-12
 *Defining the funication needed for binomialDemo
 *Uses  Recursion and memory to make the process smooth
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "binomial.h"

long choose(int n, int k, long **memory){
    if (k == 0 || k == n){
        return 1;
    }
    if (memory[n][k] != -1){
        return memory[n][k];
    }
        memory[n][k] = choose( n - 1, k, memory) + choose(n - 1, k - 1, memory);
        return memory[n][k];
}

