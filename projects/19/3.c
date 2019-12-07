#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[16];
    int age;
    int sex;
} people;

void input(people *data);
void output(people data);

int main(void)
{
    int i, count, datasize;
    people *data;

    datasize = 10;
    data = (people *)malloc(sizeof(people) * datasize);

    count = 0;
    while (1)
    {
        input(&data[count]);
        if (data[count].age == -1) break;
        count++;

        if (count >= datasize) {
            datasize += 10;
            data = (people *)realloc(data, sizeof(people) * datasize);
        }
    }

    for (i = 0; i < count; i++)
    {
        output(data[i]);
    }

    free(data);

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
    } else {
        printf("性別: 女性\n");
    }
    printf("\n");
}
