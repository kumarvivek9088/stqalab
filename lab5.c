#include <stdio.h>
#include <string.h>
int check(char st[]){
    int countchr=0;
    int countno=0;
    for(int i=0;i<strlen(st);i++){
        if (st[i]>=65 && st[i]<=90){
            countchr=countchr+1;
        }
        else{
            countno=countno+1;
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
        int t = check(inp);
        if (t==1){
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