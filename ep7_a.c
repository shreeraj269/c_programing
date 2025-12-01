/*
shreeraj pisal
FE Computers
DIV C
UIN 251P041
Roll no.:38
*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];

    printf("The largest element is %d", max);
    return 0;
}
