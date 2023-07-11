#include <stdio.h>
#include <string.h>

struct Student {
    char name[10];
    int age;
    int rollNo;
    float marks;
};

void main () {
    struct Student data[3];

    // data[1].age=21;
    for (int i = 0; i < 3; i++) {
        printf("Naam: ");
        gets(data[i].name);

        printf("Age: ");
        scanf("%d", &data[i].age);

        printf("Roll No: ");
        scanf("%d", &data[i].rollNo);

        printf("Marks: ");
        scanf("%f", &data[i].marks);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s\n", data[i].name);
        printf("%d\n", data[i].age);
        printf("%d\n", data[i].rollNo);
        printf("%.2f\n\n", data[i].marks);
    }

}