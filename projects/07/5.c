#include <stdio.h>

int main(void)
{
    int year, remainder;
    printf("年を入力してください\n");
    scanf("%d", &year);

    remainder = year % 4;

    if (remainder == 0) printf("夏季オリンピックの開催年です\n");
    if (remainder == 2) printf("冬季オリンピックの開催年です\n");
    if (remainder == 1 || remainder == 3) printf("オリンピックの開催年ではありません\n");

    return 0;
}