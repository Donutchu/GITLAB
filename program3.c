#include<stdio.h>

void main()
{
     int saying = 0;
     int i =0;
     int stY = 0;    int ndY = 0;
     printf("How many year we know each other : ");
     scanf("%d",&stY);
     printf("How many year from first time, I say that I love U : ");
     scanf("%d",&ndY);
     printf("Then do you know ... even today i still love u\n");

     for(i=0 ; i<(ndY-stY) ; i++)
     {
        printf("I Love U \n");
        saying++;
     }
     saying = saying-1;
     printf("Saying like first time , i love u for %d and %d years more <3\n", saying, saying);

}
