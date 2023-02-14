#include<stdio.h>
#include<string.h>
int main(){
    int ch;
    int id;
    char password[14];
    while (1){
        printf("1.Parents Login\n");
        printf("2.Student Login\n");
        printf("3.Admin Login\n");
        printf("4.Exam Login\n");
        printf("Enter your choice: -");
        scanf("%d",&ch);
        if (ch==2){
            printf("Enter student Id: -");
            scanf("%d",&id);
            printf("Enter password: -");
            scanf("%s",password);
            int result = strcmp(password,"vivek123");
            if (id==12345 && result==0){
                printf("\n=====================\nLogin successfully\n=====================\n");
            }
            else{
                printf("\n=====================\nInvalid Login,please check your id and password\n=====================\n");
            }
        } 
        else if (ch==1){
            printf("Enter parent Id: -");
            scanf("%d",&id);
            printf("Enter password: -");
            scanf("%s",password);
            int result = strcmp(password,"vivek123");
            if (id==12345 && result==0){
                printf("\n=====================\nLogin successfully\n=====================\n");
            }
            else{
                printf("\n=====================\nInvalid Login,please check your id and password\n=====================\n");
            }
        } 
        else if (ch==3){
            printf("Enter admin Id: -");
            scanf("%d",&id);
            printf("Enter password: -");
            scanf("%s",password);
            int result = strcmp(password,"vivek123");
            if (id==12345 && result==0){
                printf("\n=====================\nLogin successfully\n=====================\n");
            }
            else{
                printf("\n=====================\nInvalid Login,please check your id and password\n=====================\n");
            }
        } 
        else if (ch==4){
            printf("Enter exam Id: -");
            scanf("%d",&id);
            printf("Enter password: -");
            int result = strcmp(password,"vivek123");
            if (id==12345 && result==0){
                printf("\n=====================\nLogin successfully\n=====================\n");
            }
            else{
                printf("\n=====================\nInvalid Login,please check your id and password\n=====================\n");
            }
        }  
        }
        return 0;

}
