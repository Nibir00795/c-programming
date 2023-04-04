#include <stdio.h>
    int main()
    {
        int input1;
        int input2;
        scanf("%d %d", &input1, &input2);
        int sum = input1 + input2;
        int sub = input1 - input2;
        int mult = input1 * input2;
        float div = input1 / (input2 * 1.0);
        printf("%d + %d = %d\n",input1, input2, sum);
        printf("%d - %d = %d\n",input1, input2, sub);
        printf("%d * %d = %d\n",input1, input2, mult);
        printf("%d / %d = %0.2f",input1, input2, div);

        return 0;
    }