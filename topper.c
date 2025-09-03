#include <stdio.h>
int main() {
    char names[5][30];   
    int marks[5];        
    int i, top = 0;
    for(i = 0; i < 5; i++) {
        printf("Enter name= ");
        scanf("%s", names[i]);
        printf("Enter marks= ");
        scanf("%d", &marks[i]);
        if(marks[i] > marks[top]) {
            top = i;
        }
    }
    printf("Topper is %s with %d marks\n", names[top], marks[top]);
    return 0;
}
