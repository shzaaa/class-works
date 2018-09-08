#include "stack.h"
int top = -1, arr[MAX], numberOfElements = MAX;

bool push(char letter){
    if (top == numberOfElements-1){
        printf("Stack size limit reached.\n");
        return false;
    }
    arr[++top] = letter;
    return true;
}

bool pop(){
    if(isEmpty()){
        return false;
    }else{
        top--;
        return true;
    }
}

bool isEmpty(){
    if(top < 0){
        return true;
    }else{
        return false;
    }
}

void display(){
    int i;
    printf("Elements in stack are:\n");
    for (i = top; i > -1; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
