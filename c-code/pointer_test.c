#include<stdio.h>

int main() {
    int age = 21;
    int *p = &age;
    printf("age: %d\n", age);
    printf("&age: %p\n", &age);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);
    printf("&p: %p\n", &p);
}
