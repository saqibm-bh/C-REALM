#include <stdio.h>
#define FREQUENCY_SIZE 5   //Defining Array Sizes
#define ELEMENT_SIZE 20

int main(void)
{
    int a[ELEMENT_SIZE]={0, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};
    printf("%s %15s\n", "ELEMENT", "FREQUENCY");  // display results

    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = {0};


    for( size_t i=0 ; i<ELEMENT_SIZE; ++i)
    {
      ++frequency[a[i]];
    }
    
   // output the frequencies in a tabular format
   for (size_t element = 0; element <= FREQUENCY_SIZE; ++element) {
    printf("%6zu%12d\n", element, frequency[element]); } 

   
}