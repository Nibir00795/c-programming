#include <stdio.h>
    int main()
    {
        int input1;
        scanf("%d", &input1);
        if (input1 >= 10000 ) {
            printf("Gucci Bag");
            if (input1 > 20000 ) {
            printf("\nGucci Belt");
        }
        }
        else if (input1 >= 5000 ) {
            printf("Levis Bag");
        } 
        else {
            printf("Something");
        }
        return 0;
    }