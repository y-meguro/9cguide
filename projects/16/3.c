#include <stdio.h>

typedef struct {
    char name[16];
    int age;
    int sex;
} people;

void input(people *data);
void output(people data);

int main(void)
{
    people data[3];

    for (int i = 0; i < 3; i++)
    {
        input(&data[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        output(data[i]);
    }

    return 0;
}

void input(people *data)
{
    printf("名前を入力してください\n");
    scanf("%s", data->name);
    printf("年齢を入力してください\n");
    scanf("%d", &data->age);
    printf("性別を入力してください。男性の場合は0、女性の場合は1を入力してください。\n");
    scanf("%d", &data->sex);
    printf("\n");
}

void output(people data)
{
    printf("名前: %s\n", data.name);
    printf("年齢: %d\n", data.age);
    if (data.sex == 0) {
        printf("性別: 男性\n");
    } else if (data.sex == 1) {
        printf("性別: 女性\n");
    }
}
