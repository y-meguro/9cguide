/* people.h */
#ifndef _PEOPLE_
#define _PEOPLE_

#include <stdio.h>

typedef struct {
    char name[16];
    int age;
    int sex;
} people;

extern void input(people *data);
extern void output(people data)

#endif
