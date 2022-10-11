// 1. Write a program to print MySirG N times on the screen.

#include<stdio.h>
int main(){
    int n;
    printf("enter how many times do you want to print MySirG on screen :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("MySirG \n");
    }
    return 0;
}
// ---------------------------------

#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter how many times do you want to print MySirG on screen :");
    scanf("%d",&n);
    while(i<=n){
        printf("MySirG\n");
        i++;
    }
    return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter how many times do you want to print MySirG on screen :");
    scanf("%d",&n);
    do{
        printf("MySirG\n");
        i++;
    }
    while(i<=n);
    return 0;
}

// 2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}
// ---------------------------------

#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter value for n :");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter value for n :");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}

// 3. Write a program to print the first N natural numbers in reverse order.

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    for(n;n>=1;n--){
        printf("%d\n",n);
    }
    return 0;
}
// ---------------------------------

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    while(n){
        printf("%d\n",n);
        n--;
    }
    return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    do{
        printf("%d\n",n);
        n--;
    }
    while(n);
    return 0;
}

// 4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter value for n :");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
// -------------------------------------

#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter value for n :");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i=i+2;
    }
    while(i<=n);
    return 0;
}

// 5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
        if(n%2==0){
            n=n-1;
            for(int i=n;i>=1;i=i-2){
                printf("%d\n",i);
            }
        } 
        else{
            for(int i=n;i>=1;i=i-2){
                printf("%d\n",i);
            }
        }  
    return 0;
}

// 6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){
        printf("%d\n",i);
        }
        return 0;
}
// ---------------------------------

#include<stdio.h>
int main(){
    int n,i=2;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
// ---------------------------------

#include<stdio.h>
int main(){
    int n,i=2;
    printf("Enter the value of n :");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i=i+2;
    }
    while(i<=n);

}

// 7. Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n :");
    scanf("%d",&n);
    if(n%2==0){
        for(int i=n;i>=2;i=i-2){
            printf("%d\n",i);
        }
    }
    else{
        if(n%2 !=0){
            n=n-1;
            for(int i=n;i>=2;i=i-2){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}

// 8. Write a program to print squares of the first N natural numbers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
    return 0;
}

// 9. Write a program to print cubes of the first N natural numbers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i*i*i);
    }
    return 0;
}

// 10. Write a program to print a table of N.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}
// -----------------------------
//  --------------------------------

