#include <stdio.h>

int main(void)
{
    int c;
    printf("Vector Dimension: ");
    scanf("%i", &c);


    int M[c];

    for (int i = 0; i < c; i++)
    {
        printf("Row %i: ", i+1);
        scanf("%i", &M[i]);
    }

    int n;

    printf("Scalar: ");
    scanf("%i", &n);

    int B[c];

    for (int j = 0; j < c; j++)
    {
        B[j] = n * M[j];
        printf("[%i]\n", B[j]);

    }

}