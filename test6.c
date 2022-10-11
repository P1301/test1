// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
        }
        printf("Sum upto %d is %d\n",n,sum);
        return 0;
}
// -----------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    while(i<=n){
        sum = sum+i;
        i++;
    }
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}
// --------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    do{
    sum  = sum+i;
    i++;
    }
    while(i<=n);
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}

// 2. Write a program to calculate sum of first N even natural numbers.

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}
// -----------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,i=2;
    printf("enter the value of n :");
    scanf("%d",&n);
    while(i<=n){
        sum = sum+i;
        i=i+2;
    }
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}
// --------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,i=2;
    printf("enter the value of n :");
    scanf("%d",&n);
    do{
    sum  = sum+i;
    i=i+2;
    }
    while(i<=n);
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}

// 3. Write a program to calculate sum of first N odd natural numbers.

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}
// -----------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    while(i<=n){
        sum = sum+i;
        i=i+2;
    }
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}
// --------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    do{
    sum  = sum+i;
    i=i+2;
    }
    while(i<=n);
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}

// 4. Write a program to calculate sum of squares of first N natural numbers.

#include<stdio.h>
int main(){
    int n,sum=0,square,i;
  printf("enter the value of n :");
  scanf("%d",&n);
  for( i=1;i<=n;i++){
    square = i*i;
    sum=sum + square;
  }
  printf("%d\n",sum);
  return 0;
}
// ------------------------------------

#include<stdio.h>
int main(){
int n,sum=0,square,i=1;
  printf("enter the value of n :");
  scanf("%d",&n);
  while(i<=n){
    square=i*i;
    sum=sum+square;
    i++;
  }
  printf("%d\n",sum);
  return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,square,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    do{
        square=i*i;
        sum = sum+square;
        i++;
    }
    while(i<=n);
        printf("%d\n",sum);
        return 0;
}

// 5. Write a program to calculate sum of cubes of first N natural numbers.

#include<stdio.h>
int main(){
    int n,sum=0,cube,i;
  printf("enter the value of n :");
  scanf("%d",&n);
  for( i=1;i<=n;i++){
    cube = i*i*i;
    sum=sum + cube;
  }
  printf("%d\n",sum);
  return 0;
}
// ------------------------------------

#include<stdio.h>
int main(){
int n,sum=0,cube,i=1;
  printf("enter the value of n :");
  scanf("%d",&n);
  while(i<=n){
    cube=i*i*i;
    sum=sum+cube;
    i++;
  }
  printf("%d\n",sum);
  return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n,sum=0,cube,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    do{
        cube=i*i*i;
        sum = sum+cube;
        i++;
    }
    while(i<=n);
        printf("%d\n",sum);
        return 0;
}

// 6. Write a program to calculate factorial of a number.

#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
        printf("%d",fact);
        return 0;
}
// -------------------------------

#include<stdio.h>
int main(){
   int n,fact=1,i=1;
   printf("enter the value of n :");
   scanf("%d",&n);
   while(i<=n){
    fact = fact*i;
    i++;
   }
   printf("%d",fact);
   return 0;
}
// --------------------------------

#include<stdio.h>
int main(){
   int n,fact=1,i=1;
    printf("enter the value of n :");
    scanf("%d",&n);
    do{
      fact = fact*i;
      i++;
    }
    while(i<=n);
   printf("%d",fact);
    return 0;
}

// 7. Write a program to count digits in a given number.

#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0){
       n=n/10;
        count++;
    }
    printf("Digits are :%d",count);
    return 0;
}
// -----------------------------

// 8. Write a program to check whether a given number is a Prime number or
// not.

#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    printf("factors are :");
    for( i=1;i<=n;i++)
    {
        if(n%i==0){
            printf("%d,",i);
            count=count+1;
        }
    }
        printf("\n");
        if(count==2){
            printf("%d is a prime number");
        }
        else{
            printf("%d is not a prime number");
        }
    return 0;
}

// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main(){
    int i,j,a,b,p,q,sum=0;
    printf("enter num1 :");
    scanf("%d",&a);
    printf("enter num2 :");
    scanf("%d",&b);
    for( i=1;i<=b;i++){
        p=printf("%d\n",i*a);
    }
    for( j=1;j<=a;j++){
        q=printf("%d\n",j*b);
    }
    if(p==q){
        printf("LCM is %d");
    }
    return 0;
}

// 10. Write a program to reverse a given number.

#include <stdio.h>
int main() {
  int n, reverse = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  printf("Reversed number = %d", reverse);
  return 0;
}
