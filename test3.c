#include<stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>=0){
        printf("positive number");
    }
    else{
    printf("non-positive number");
    }
    return 0;
}

// -----------------
// 2.program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%5==0){
        printf("number is
        divisible by 5.");
    }
    else{
        printf("number is not divisible by 5.");
    }
    return 0;
}
// ----------------

// 3.program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
if(n%2==0){
    printf("entered number is even");
    }
    else{
        printf("entered number is odd");
    }
    return 0;
}
// ============================

// 5.programme to whether a given digit is a three-digit number or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter a three digit number only :");
    scanf("%d",&num);
    if(num > 99 && num<1000){
    printf("you entered a three digit number");
    }
    else{
        printf("you entered a wrong digit");
    }
    return 0;
}
// ------------------------

// 6.program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main(){
    int n,m;
    printf("enter number 1 :");
    scanf("%d",&n);
        printf("enter number 2 :");
    scanf("%d",&m);
    if(n>m){
        printf("number 1 is greater than number 2");
        }
        else if(m>n){
        printf("number 2 is greater than number 1");
        }
        else if(m == n){
        printf("number 1 is equal to number 2");
        }
    return 0;
}
// ----------------------

// 8.program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int leapyear;
    printf("enter a Year :");
    scanf("%d",&leapyear);
    if(leapyear % 4 == 0){
        printf("LEAP YEAR");
    }
        else{
            printf("not a LEAP YEAR");
        }
        return 0;   
}
// -------------

// 9.program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number 1 :");
    scanf("%d",&a);
    printf("enter a number 2 :");
    scanf("%d",&b);
    printf("enter a number 3 :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("number %d is greatest among all",a);
        }
    else if(b>a && b>c){
        printf("number %d is greatest among all",b);
    }
    else if(c>a && c>b){
        printf("number %d is greatest among all",c);
        }
    else if(a==b && b==c && c==a){
        printf("all numbers are equal");
        }
    return 0;
}
// ===============

// 10. program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
#include<conio.h>
int main(){
    float sp,cp,amount,x,y;
    printf("Enter cost price of article:");
    scanf("%f",&cp);
    printf("Enter selling price of article:");
    scanf("%f",&sp);
    if(cp>sp){
        amount = ((cp-sp)/cp)*100;
        printf("you have a loss of %f",amount);
        printf("%%");
    }
    else if(sp>cp){
         amount = ((sp-cp)/cp)*100;
        printf("you have a loss of %f",amount);
        printf("%%");
    }
    return 0;
}
// --------------

// 11.program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include<stdio.h>
int main(){
    int marks1, marks2, marks3, marks4,  marks5;
    printf("enter marks of subject 1 :");
    scanf("%d",&marks1);
    printf("enter marks of subject 2 :");
    scanf("%d",&marks2);
    printf("enter marks of subject 3 :");
    scanf("%d",&marks3);
    printf("enter marks of subject 4 :");
    scanf("%d",&marks4);
    printf("enter marks of subject 5 :");
    scanf("%d",&marks5);
    if(marks1>=33 && marks2>=33 && marks3>=33 && marks4>=33 && marks5>=33){
        printf("PASSED");
    }
    else if(marks1<33 || marks2<33 || marks3<33 || marks4<33 || marks5<33)
    {
      printf("FAILED");
    }
    return 0;
}

// -----------------



// 13.program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main(){
    int x;
    printf("enter number :");
    scanf("%d",&x);
    if(x%3==0 && x%2==0){
        printf("Number is divisible by both 2 & 3 ");
    }
    else{
        printf("Number is not divisible by both 2 & 3 ");
    }
    return 0;
}
// ---------------




// 14.program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main(){
    int x;
    printf("enter number :");
    scanf("%d",&x);
    if(x%3==0 || x%7==0){
        printf("Number is divisible by 3 or 7 ");
    }
    else{
        printf("Number is not divisible  both 3 or 7 ");
    }
    return 0;
}
// ------------------

// 15.program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if(number>0){
        printf("POSITIVE NUMBER");
    }
    if(number==0){
        printf("EQUAL TO ZERO");
    }
    if(number<0){
        printf("NEGATIVE NUMBER");
    }
    return 0;
}

// -----------------

// 17.program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side 1 : ");
    scanf("%d",&a);
    printf("Enter side 2 : ");
    scanf("%d",&b);
    printf("Enter side 3 : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("VALID TRIANGLE");
    }
    else{
        printf("NOT A VALID TRIANGLE");
    }
    return 0;
}
// ------------------

// 18.program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main(){
    int month;
    printf("enter month number :");
    scanf("%d",&month);
    if(month==1){
        printf("number of days: 31");
    }
        if(month==2){
        printf("number of days: 28");
    }
        if(month==3){
        printf("number of days: 31");
    }
        if(month==4){
        printf("number of days: 30");
    }
        if(month==5){
        printf("number of days: 31");
    }
        if(month==6){
        printf("number of days: 30");
    }
        if(month==7){
        printf("number of days: 31");
    }
        if(month==8){
        printf("number of days: 31");
    }
        if(month==9){
        printf("number of days: 30");
    }
        if(month==10){
        printf("number of days: 31");
    }
        if(month==11){
        printf("number of days: 30");
    }
        if(month==12){
        printf("number of days: 31");
    }
    return 0;
}



