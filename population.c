/**
 * Author: Kayla Bartlett
 * Date: 2024-09-27
 * A program that gives location, air distance, and destination.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  int main(int argc, char **argv) {


    if (argc != 4) {
    printf("ERROR: needs inital population, geometric rate, and artihmetric rate.\n");
    return 1;
  }

    int intialPopulation = atoi(argv[1]);
    double geometricRate = atof(argv[2]);
    double arithmeticRate = atof(argv[3]);
    double arithmetic = intialPopulation + arithmeticRate;

    if(intialPopulation <=0){
      printf("Error can't be negative!\n");
      return 2;
    }

    printf("Initial Population: %d\n", intialPopulation);
    printf("Year   Geometric Arithmetic Average\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    for(int i=1; i<=10; i++){

      double geometric = round((intialPopulation * geometricRate) + intialPopulation);
      intialPopulation=arithmetic;
      double average = round((geometric + arithmetic)/2);


      printf("%d  %.0f   %.0f   %.0f \n", i, geometric, arithmetic, average);
      arithmetic = intialPopulation + arithmeticRate;
      intialPopulation = geometric;
    }

return 0;
  }
