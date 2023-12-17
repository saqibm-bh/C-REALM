//Reversing Array using reverse loop

#include <stdio.h>
int main(void)
{
    int arr[8];

    printf("Enter Size of Array:");
    scanf("%d");
    printf("\v");

    for (int i = 0; i < 8; i++)  //Populating Array
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    //Printing Array

    printf("Original Array is: {");
    for (int i = 0; i < 8; i++)
    {
        printf("%d \t", arr[i]);
        }
    printf("} \n \n");
    
    //Reversing Array

printf("Reverse Array is: {");
    for (int i = 7; i>=0; i--)
    {
        printf("%d \t", arr[i]);
        }
    printf("}");
    

}