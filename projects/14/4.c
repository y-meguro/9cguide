#include <stdio.h>

int main(void)
{
    char first_name[10], last_name[10];
    printf("名字を入力してください\n");
    scanf("%9s", last_name);
    printf("名前を入力してください\n");
    scanf("%9s", first_name);

    printf("%s %s\n", last_name, first_name);

    return 0;
}
