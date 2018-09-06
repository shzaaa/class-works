#include<stdio.h>
#include<stdbool.h>
/*** Function Declarations ***/
void push();
void pop();
void display();
bool isEmpty();
int top, arr[50], numberOfElements;

int main(){
        top = -1;
        int choice;
        int runningFlag = 1;
        printf("Please enter required stack size\n");
        scanf("%d", &numberOfElements);
        while(runningFlag){
            printf("Choose the operation to be performed\n");
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. Display\n");
            printf("4. Exit\n");
            /*printf("");
            printf("");*/
            scanf("%d", &choice);
            switch(choice){
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    runningFlag = 0;
                    break;
                default:
                    printf("Chosen option invalid\n");
            }
        }
}

void push(){
    int value;
    if (top == numberOfElements-1){
        printf("Stack size limit reached. Please pop some values to push more\n");
        return;
    }
    printf("Enter the number to be pushed: ");
    scanf("%d", &value);
    arr[++top] = value;
}

void pop(){
    if(isEmpty()){
        printf("There are no elements in the stack\n");
    }else{
        printf("The popped element is %d\n", arr[top]);
        top--;
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

