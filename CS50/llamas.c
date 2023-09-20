// population of llamas challenge
#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // Prompt the user to enter the number of llamas at thre start
    int start_llamas;
    do
    {
        start_llamas = get_int("What's your current llama population? ");
    }
    while (start_llamas < 9);

    // Prompt the user for the goal number of llamas
    int goal_llamas;
    do
    {
        goal_llamas = get_int("How many llamas would you like to have? ");
    }
    while (goal_llamas < start_llamas);

    // How many years to reach the goal?? 
    int years = 0;

    // Every year, a 1/3 of the current llamas is born and 1/4 pass away
    // 1/12 new lamas every year because 1/3 is new 1/4 is cut and 1/3 -1/4 = 1/12
    while (start_llamas < goal_llamas)
    {
        start_llamas += start_llamas / 12;
        years ++;
    }

    printf("It will take -- %i\n -- years!", years);

}


// trancation might be a problem in this code