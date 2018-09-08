#include<stdio.h>
#include<stdbool.h>
#include "stack.h"

int main(){
    char word[MAX];
    printf("Please Enter the string to be evaluated\n");
    fgets(word, MAX, stdin);
    int i;

    for (i = 0; word[i] != '\0'; i++){
        char letter = word[i];
        if (letter == '('){
            push(letter);
        }else if (letter == ')'){
            bool returnVal = pop();
            if (!returnVal){
                printf("Paranthesis are not balanced\n");
                break;
            }
            /*
            if(!pop()){
                printf("Paranthesis are not balanced\n");
                break;
            }
            */
        }
    }
    if (!isEmpty()){
        printf("Paranthesis are not balanced\n");
    }else{
        printf("Paranthesis are balanced\n");
    }
    
}


