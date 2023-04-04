#include <stdio.h>
    int main()
    {
        int input1;
        scanf("%d", &input1);
        if (input1 % 2 == 0) {
            printf("even");
        }
        else {
            printf("odd");
        }
        return 0;
    }