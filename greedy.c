#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)  
{
    float change;
    int coins, cents;


   
    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (change < 0);

  
    cents = (int) round(change * 100);

   
    coins = 0;

 
    coins += cents / 25;
    cents %= 25;


    coins += cents / 10;
    cents %= 10;

   
    coins += cents / 5;
    cents %= 5;

    
    coins += cents;


    printf("%i\n", coins);

    return 0;
}