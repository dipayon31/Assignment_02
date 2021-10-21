#include <stdio.h>
#include <string.h>
#include "myheader(UNARY).h"

int main(){
    int choice;
    printf("Select a choice: \n1> Addition.\n2> Multiplication.\n");
    scanf("%d", &choice);

    if(choice==1){
        char unary1[1000], unary2[1000];
        scanf("%s %s", unary1, unary2);

        if(valid_or_not(unary1)==1 && valid_or_not(unary2)==1){
            strcat(unary1, unary2);
            printf("The sum is %s\n", unary1);
            printf("\n");
        }
    }
    else if(choice==2){
        char unary1[1000], unary2[1000];
        scanf("%s %s", unary1, unary2);

        if(valid_or_not(unary1)==1 && valid_or_not(unary2)==1){
            printf("The product is ");
            for(int i=0; i<strlen(unary2); i++){
                printf("%s", unary1);
            }
            printf("\n");
        }
    }
    else{
        printf("Invalid choice...:(");
    }
}