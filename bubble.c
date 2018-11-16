#include <stdio.h>

typedef int BOOL;
#define true 1
#define false 0

void bubbleSort03(int arr[],int len);
void bubbleSort04(int *arr,int len);
void swap(int *a,int *b);

int main(int argc, const char * argv[]) {

    int array[7] = {150,111,1000,99,300,10,189};
    bubbleSort03(array, 7);
    for (int i = 0; i < 7; i++) {
        printf("%d ",array[i]);
    }

    return 0;
}

void bubbleSort03(int *arr,int len){

    int temp;
    for (int i = 0; i < len; i++){
        for (int j = 1; j < len - i; j++) {
            if (arr[j - 1] > arr[j]) {

                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSort04(int *arr,int len){

    BOOL flag = true;
    int temp;
    while (flag) {
        flag = false;
        for (int i = 1; i < len; i++) {
            if (arr[i - 1] > arr[i]) {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                flag = true;
            }
        }
        len--;
    }
}

void swap(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
