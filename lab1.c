#include <stdio.h>
#include <stdbool.h>

bool testCheckFunc(int arr[], int min, int max, int size){
    int flag =0;
    
    for (int i=0; i < size; i++){
        if(arr[i] >= min && arr[i] <= max){
            flag++;
            printf("test case %d passed \n",i+1);
            continue;
        }else {
            printf("test case %d failed with num %d \n",i+1,arr[i]);
        }
    }
    
    return flag > 0 ? false : true;
    
}
int main()
{
    int arr[100];
    for (int i=0;i<7;i++){
        printf("enter values: -");
        scanf("%d",&arr[i]);
    }
    int size =7;
    
    int min = 12;
    int max = 59;

    bool a = testCheckFunc(arr, min, max, size);
    if (a==true){
        printf("all test pass");
    }else {
        printf("some tests failed");
    }
    
    return 1;
}
