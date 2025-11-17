#include <stdio.h>
 /*name:shreeraj pisal
      div:c     branch:comps
      uin:251P041
      roll no.  :38*/
struct student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct student s[5];
    int i, topper = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter name, roll number and total marks of student %d:\n", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("\nTopper:\n");
    printf("Name: %s\n", s[topper].name);
    printf("Roll Number: %d\n", s[topper].roll);
    printf("Marks: %d\n", s[topper].marks);

    return 0;
}
