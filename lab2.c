#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,b,c;
    while (1){
        printf("Enter value for a,b,c: -");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        bool cond1 = (a+b)>c;
        bool cond2 = (b+c)>a;
        bool cond3 = (c+a)>b;
        if (cond1 & cond2 & cond3){
            printf("valid triangle\n");
            if( a==b & b==c){
                printf("Equilateral triangle\n");
                printf("Testoutcome : - Pass\n");
            }
            else if(a==b ^ a==c ^ b==c){
                printf("Isosceles traingle\n");
                printf("Testoutcome : - Pass\n");

            }
            else{
                printf("Scalene Triangle\n");
                printf("Testoutcome : - Pass\n");
            }

        }
        else{
            printf("invalid triangle\n");
            printf("Testoutcome : - Fails\n");
        }
    }
    return 0;
}