#include <cs50.h>
#include <stdio.h>


int main(void) {
    
    int startSize, endSize;
    int years;
    int total;
    
    do
    {
        startSize = get_int("Start Size: ");
    }
    while (startSize < 9);
    do
    {
        endSize = get_int("End Size: ");
    }
    while (endSize < startSize);
    /*if  (startYear == endYear) {
        return years;*/
    
    for (years = 1; startSize <= endSize; years++) {
           if  (startSize == endSize) {
               printf("Years: %i\n", years - 1);
               break;
           }
         else 
        {
            float birth = (startSize / 3);
            float death = (startSize / 4);
            startSize = (startSize + birth - death);
            
        }
        if (startSize >= endSize) {
            printf("Years: %i\n", years);
        }
    }
}



