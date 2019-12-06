#include <stdio.h>

int func(void);
int hoge;

int main(void)
{
    int hoge = 32;
    func();
}

int func(void) {
    printf("%d\n", hoge);
}
