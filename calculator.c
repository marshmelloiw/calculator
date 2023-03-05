#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of operation you want to calculate.\n1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n");
    scanf("%d", &num);
    int result;

    if(num==1){
        printf("Enter the numbers you want to sum up. Add 0 after you finish.\n");
        int a1;
        while(a1!=0){
            scanf("%d", &a1);
            result += a1;
        }
    printf("Summation: %d", result);
    }

    else if(num==2){
        printf("Enter the numbers you want to substract. Add 0 after you finish.\n");
        int s1;
        scanf("%d", &s1);
        result = s1;
        while(s1!=0){
            scanf("%d", &s1);
            result -= s1;
        }
    printf("Result is: %d", result);
    }

    else if(num==3){
        printf("Enter the numbers you want to multiply. Add 0 after you finish.\n");
        int m1;
        result = 1;
        while(1){
            scanf("%d", &m1);
            if(m1!=0)
                result *= m1;
            else
            break;
        }
        printf("Result is: %d", result);
    }

    else if(num==4){
        printf("Enter the number you want to divide and divine into. Add 0 after you finish.\n");
        int d[1];
        scanf("%d %d", &d[0], &d[1]);
        result = d[0]/d[1];
        printf("Result is: %d", result);
    }
}
