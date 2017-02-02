#include <stdio.h>
#include <cs50.h>

int bottleNumber(int time)
{
    return (time * 192)/16;
}

int main(void)
{
    printf("How many minutes do you take a shower?\n");
    int time = GetInt();
    
    int bottles = bottleNumber(time);
    printf("Minutes Showered: %d\n16oz Bottles: %d\n", time, bottles);
}
