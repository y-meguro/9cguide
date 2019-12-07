#include <stdio.h>

int calc_olympic(int);

enum {
    SUMMER,
    WINTER,
    NONE
};

int main(void)
{
    int year, num;
    printf("年を入力してください\n");
    scanf("%d", &year);

    num = calc_olympic(year);

    switch (num)
    {
    case SUMMER:
        printf("夏季オリンピックの開催年です\n");
        break;
    case WINTER:
        printf("冬季オリンピックの開催年です\n");
        break;
    case NONE:
        printf("オリンピックの開催年ではありません\n");
        break;
    }

    return 0;
}

int calc_olympic(year) {
    int remainder;

    remainder = year % 4;
    if (remainder == 0) {
        return SUMMER;
    } else if (remainder == 2) {
        return WINTER;
    } else {
        return NONE;
    }
}
