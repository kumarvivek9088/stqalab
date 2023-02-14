#include <stdio.h>
#include <string.h>
int check(char st[]){
    int countchr=0;
    int countno=0;
    for(int i=0;i<strlen(st);i++){
        if (st[i]>="A" & st[i]<="Z"){
            countchr++;
        }
        else{
            countno++;
        }
    }
    if (countno==4 && countchr==6){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char inp[10];
    printf("enter PAN card number: - ");
    scanf("%s",inp);
    int length = strlen(inp);
    if (length==10){
        if (check(inp)){
            printf("Valid PAN Card Number\n");
        }
        else{
            printf("invalid PAN Card\n");
        }

    }
    else{
        printf("PAN card is invalid\n");
    }

    return 0;

}