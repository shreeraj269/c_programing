#include <stdio.h>

struct student{
int roll_no;
char name[20];
float marks;
};
int main(){
struct student s1 = {04,"Faisal",78};
printf("Roll No.:%d\n", s1.roll_no);
printf("Name:-%s\n", s1.name);
printf("Makrs:%f23\n", s1.marks);

return 0;
}
