#include <stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE]={2,3,4,6,7,8,1,5,9,10};
    printf("%s %15s %20s \n", "ELEMENT", "VALUE", "BAR CHART");


    for( size_t i=0 ; i<SIZE; ++i)
    {
        printf("%6zu %15d %11s", i, a[i],"" );

        for (int j = 1; j <= a[i]; ++j)
        {
            printf("%c", '*');
        
    }
    puts("");
}
}