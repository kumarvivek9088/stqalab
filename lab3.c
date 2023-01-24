
// * LAB 3

#include <stdio.h>
#include <stdbool.h>

void myfunc(int a,int b, int c) {
    bool b1 = true, b2 = true, b3 = true;
    b1=(a+b)>c;
    b2=(a+c)>b;
    b3=(b+c)>a;

    printf("--------------------\n");
    printf("| Conditions|Output|\n");
    printf("--------------------\n");
    printf("| a + b > c | %s |\n", b1 ? "True" : "False");
    printf("--------------------\n");
    printf("| c + a > b | %s |\n", b2 ? "True" : "False");
    printf("-------------------\n");
    printf("| b + c > a | %s |\n", b3 ? "True" : "False");
    printf("-------------------\n");

    if (b1 && b2 && b3) {
        if( a==b & b==c){
                printf("Equilateral triangle\n");
                printf("Testoutcome : - Pass\n");
            }
        else if(a==b^a==c^b==c){
            printf("Isosceles traingle\n");
            printf("Testoutcome : - Pass\n");

        }
        else{
            printf("Scalene Triangle\n");
            printf("Testoutcome : - Pass\n");
        }
    } 
    else {
        printf("invalid triangle\n");
        printf("Testoutcome : - Fails\n");
    }
}

int main() {
    int a, b, c;
    while (1){
        printf("Enter sides of triangle: -");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        myfunc(a, b, c);

    }
    
}