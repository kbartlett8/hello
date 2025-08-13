/**
 * Author: Kayla Bartlett
 * Date: 2024-09-05
 * A program that gives location, air distance, and destination.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

  int main(int argc, char **argv) {

 double latitudeA, longitudeA;
 double latitudeB, longitudeB;
 double distance;

  printf("Please input latitude and longitude of distances: \n");
   scanf("%lf %lf %lf %lf", &latitudeA, &longitudeA, &latitudeB, &longitudeB);



latitudeA = latitudeA/180 * (M_PI);
longitudeA = longitudeA/180 * (M_PI);

latitudeB = latitudeB/180 * (M_PI);
longitudeB = longitudeB/180 * (M_PI);

distance = 6371 * acos(sin(latitudeA) * sin(latitudeB) + cos(latitudeA) * cos(latitudeB) * cos(longitudeB - longitudeA));

  printf("Location Distance\n");
  printf("========================\n");
  printf("Origin: (%lf, %lf )\n", latitudeA, longitudeA);
  printf("Destination: (%lf, %lf)\n", latitudeB, longitudeB);
  printf("Air distance is %lf\n", distance);

return 0;
}
