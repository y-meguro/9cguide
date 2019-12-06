#include <stdio.h>

int main(void)
{
    int data[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d番目の数字を整数で入力してください\n", i + 1);
        scanf("%d", &data[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", data[9 - i]);
    }

    return 0;
}
