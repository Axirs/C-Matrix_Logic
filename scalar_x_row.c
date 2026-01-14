#include <stdio.h>

int main(void)
{
    int d;
    printf("Row Dimension: ");
    scanf("%i", &d);


    int R[d];

    for (int i = 0; i < d; i++)
    {
        printf("Entry %i: ", i+1);
        scanf("%i", &R[i]);

    }

    int r;
    printf("Scalar: ");
    scanf("%i", &r);

    int B[d];

    for (int j = 0; j < d; j++)
    {
        B[j] = r * R[j];
    }

    printf("[");
    for (int k = 0; k < d; k++)
    {
        if (k < d-1)
        {
            printf("%i ", B[k]);
        }
        else
        {
            printf("%i", B[k]);
        }
    }
    printf("]\n");


}

