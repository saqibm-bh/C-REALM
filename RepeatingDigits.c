//Reversing Array using reverse loop

#include <stdio.h>
int main(void)
{
    int seen[10] = {0};
    int N;
    printf("Enter The Number: ");
    scanf("%d", &N);

int rem;
    while (N>0)
    {
    rem = N%10;

    if (seen[rem] == 1 )
    {
        break;
    }
    seen[rem]=1;
    N=N/10;
    }
    if (N>0)
    {
        printf("The Number has Repeating Digits");
    }
    else
    printf("No, the digits are not repeating");

    
}

    



