// 2012082

#include <stdio.h>
#include <string.h>
#include "myheader.h"
int main(){
    int choice;
    printf("Select a choice: \n1> Addition.\n2> Multiplication.\n");
    scanf("%d", &choice);

    if(choice==1){
        char roman1[100], roman2[100];
        scanf("%s %s", roman1, roman2);
        li num1 = roman_to_decimal(roman1);
        li num2 = roman_to_decimal(roman2);

        if(num1!=-1 && num2!=-1){
            li sum = num1 + num2;
            printf("The sum is ");
            decimal_to_roman(sum);
            printf("\n");
        }
    }
    else if(choice==2){
        char roman1[100], roman2[100];
        scanf("%s %s", roman1, roman2);
        li num1 = roman_to_decimal(roman1);
        li num2 = roman_to_decimal(roman2);

        if(num1!=-1 && num2!=-1){
            li product = num1 * num2;
            printf("The product is ");
            decimal_to_roman(product);
            printf("\n");
        }
    }
    else{
        printf("Invalid choice...:(");
    }
    return 0;
}