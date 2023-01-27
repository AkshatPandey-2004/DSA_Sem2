#include <stdio.h>
struct student {
    char firstName[50];
    int studentid;
    float percentage;
};

int main() {
    struct student s[5];
    int i;
    printf("\t\tEnter information of students:\n");
    for (i = 0; i < 5; ++i) {
        printf("\nEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("\nEnter the Student ID: ");
        scanf("%d",&s[i].studentid);
        printf("\nEnter Percentage: ");
        scanf("%f", &s[i].percentage);
    }
    printf("\n\t\tDisplaying Information:\n");
    for (i = 0; i < 5; ++i) {
        printf("\nStudent ID: %d\n",s[i].studentid);
        printf("\nFirst name: ");
        puts(s[i].firstName);
        printf("\nPercentage: %f", s[i].percentage);
        printf("\n");
    }
    return 0;
}
