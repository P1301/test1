
// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float circle_area(float);

int main(){
    float radius,AREA;
    printf("enter radius of a circle : ");
    scanf("%f",&radius);
    AREA = circle_area(radius);
    printf("Area is : %0.2f sq. units",AREA);
    return 0;
}

float circle_area(float radius){
    float area;
    area = (3.1428571429)*(radius*radius);
    return area;
}

// ----------------------------------------------------------------------------------------------------


// 2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float s_interest(float,float,float);

int main(){
    float principle,rate,time,simple_interest;
    printf("enter principle : ");
    scanf("%f",&principle);    
    printf("enter rate : ");
    scanf("%f",&rate);    
    printf("enter time : ");
    scanf("%f",&time);
    simple_interest = s_interest(principle,rate,time);
    printf("simple interest is : %0.2f",simple_interest);
    return 0;
}
float s_interest(float principle,
                float rate,
                float time){
    float s_interest;
    s_interest = (principle*rate*time)/100;
    return s_interest;
}
// ------------------------------------------------------------------------------------------------------


// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>
int check_eo(int);

int main(){
    int num,check;
    printf("Enter a  number : ");
    scanf("%d",&num);
    check  = check_eo(num);
    printf("%d",check);
    return 0;

}
int check_eo(int num){
    int eo_number;
    if(eo_number%2==0){
       return 1;
    }
    else{
        return 0;
    }
}
// ------------------------------------------------------------------------------------------------


// 4. Write a function to print first N natural numbers (TSRN).

#include<stdio.h>
void N_number(int);

int main(){
    int num,digit,number;
    printf("enter number : ");
    scanf("%d",&num);
    N_number(num);
    return 0;
}

void N_number(int num){
    for(int i=1;i<=num;i++){
        printf("%d,",i);
    }
}
----------------------------------------------------------------------------------------------------

// 5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
void odd_n(int);

int main(){
    int num;
    printf("enter num : ");
    scanf("%d",&num);
    odd_n(num);
    return 0;
}

void odd_n(int num){
    int i=1;
    while(i<=num){
        printf("%d,",i);
        i=i+2;
    }
}
--------------------------------------------------------------------------------------------------------------

// 6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int fact_n(int);

int main(){
    int num,factorial;
    printf("enter num : ");
    scanf("%d",&num);
    factorial = fact_n(num);
    printf("%d",factorial);
    return 0;
}

int fact_n(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial = factorial*i;
    }
        return factorial;
}
// --------------------------------------------------------------------------------------------

// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int combination(int,int);

int main(){
    int n,r,formula;
    printf("enter value of n : ");
    scanf("%d",&n);
    printf("enter value of r : ");
    scanf("%d",&r);

    formula = combination(n,r);
    printf("%d",formula);
    return 0;
}

int combination(int n, int r){
    int fact1 = 1,m,p,formula,o,fact2 = 1,fact3 = 1;
    for(int i=1;i<=n;i++){
        fact1 = fact1*i;
    }
        m=fact1;
    for(int j=1;j<=r;j++){
        fact2 = fact2*j;
    }
        p=fact2;
    for(int k=1;k<=(n-r);k++){
        fact3 = fact3*k;
    }
        o=fact3;
    formula=  (m)/(p*o);
    return formula;
}
// --------------------------------------------------------------------------------------------

// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int permutation(int ,int);
int main(){
    int p,r,result;
    printf("enter value of p : ");
    scanf("%d",&p);
    printf("enter value of r : ");
    scanf("%d",&r);
    result = permutation(p,r);
    printf("%d",result);
}

int permutation(int n,int r){
    int formula,fact1=1,fact2=1;
    for(int i=1;i<=n;i++){
        fact1=fact1*i;
    }

    for(int i=1;i<=r;i++){
        fact2=fact2*i;
    }

    formula = fact1/fact2;
    return formula;

}
// ----------------------------------------------------------------------


// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)


// ------------------------------------------------------------------------

// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN).

#include<stdio.h>
void primefactors(int);

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    primefactors(num);
    return 0;
}

void primefactors(int num){
    // int count;
    for(int i=2;num>1;i++){
        while(num % i == 0){
            printf("%d,",i);
            num = num/i;
        }
    }
}

					


