#include <stdio.h>
typedef long int li;
int main(){
    int choice;
    printf("Select a choice: \n1> Addition.\n2> Multiplication.\n");
    scanf("%d", &choice);

    if(choice==1){
        li num1, num2;
        scanf("%ld %ld", &num1, &num2);
        long long int sum = num1 + num2;
        printf("The sum is %lld\n", sum);
    }
    else if(choice==2){
        li num1, num2;
        scanf("%ld %ld", &num1, &num2);
        long long int product = num1*num2;
        printf("The product is %lld\n", product);
    }
    else{
        printf("Invalid choice...:(");
    }
}