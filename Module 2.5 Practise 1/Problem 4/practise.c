#include <stdio.h>
    int main()
    {
        int input1;
        scanf("%d", &input1);
        if (input1 > 0) {
            printf("positive");
        }
        else if (input1 < 0) {
            printf("negative");
        } 
        else {
            printf("zero");
        }
        return 0;
    }