#include <stdio.h>

void find_min_and_max(int array[], int *min, int *max);

int main(void)
{
    int i, array[10], min, max;
    do {
        printf("%d番目の数値を入力してください\n", i + 1);
        scanf("%d", &array[i]);
        i++;
    } while(array[i - 1] != -1);

    find_min_and_max(array, &min, &max);

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}

void find_min_and_max(int array[], int *min, int *max)
{
    int i = 0;
    *min = 100;
    *max = 0;

    while (array[i] != -1) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
        i++;
    }
}
