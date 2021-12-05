#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b) ; //conditional operator
    *a = sum;
    *b = absDifference; 
}    


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}