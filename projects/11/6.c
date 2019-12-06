#include <stdio.h>

int calc_olympic(int);

int main(void)
{
    int year, num;
    printf("年を入力してください\n");
    scanf("%d", &year);

    num = calc_olympic(year);

    switch (num)
    {
    case 0:
        printf("夏季オリンピックの開催年です\n");
        break;
    case 1:
        printf("冬季オリンピックの開催年です\n");
        break;
    case 2:
        printf("オリンピックの開催年ではありません\n");
        break;
    }

    return 0;
}

int calc_olympic(year) {
    int remainder, num;

    remainder = year % 4;
    if (remainder == 0) {
        return 0; /* 夏季 */
    } else if (remainder == 2) {
        return 1; /* 冬季 */
    } else {
        return 2; /* 開催年ではない */
    }
}
