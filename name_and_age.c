#include <stdio.h>
int main() {
    char name[30];
    int age;
    printf("Enter your name ");
    scanf("%s", name);
    printf("Enter your age ");
    scanf("%d", &age);
    printf("hello your name is = %s,  and your age= %d \n", name, age);
    return 0;
}
