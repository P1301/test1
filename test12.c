
//1. Write a recursive function to print first N natural numbers

#include<stdio.h>

void natural(int);

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
     natural(num);
}

void natural(int num){
    if(num > 0){
        natural(num-1);
        printf("%d,",num);
    }
}
// ------------------------------------------------------------------------

// 2.Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>

void reverse_number(int);

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    reverse_number(num);
}

void reverse_number(int num){
    if(num>0){
        printf("%d,", num);
        reverse_number(num-1);
    }
}
// -------------------------------------------------------------------

// 3.Write a recursive function to print first N odd natural numbers.

#include<stdio.h>

void odd_natural_number(int);

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    odd_natural_number(num);
}

void odd_natural_number(int num){
    if(num>=1){
        if(num%2==0){
            num =num-1;
        }
        odd_natural_number(num-2);
        printf("%d,",num);
    }
}
// ----------------------------------------------------------

//4. Write a recursive function to print first N odd natural numbers in reverse order.

#include<stdio.h>

void reverse_odd_natural_number(int);

int main(){
    int num;
    printf("enter a number :"); 
    scanf("%d",&num);
    reverse_odd_natural_number(num);
}

void reverse_odd_natural_number(int num){
    if(num>=1){
        if(num%2==0){
            num = num-1;
        }
        printf("%d,",num);
        reverse_odd_natural_number(num-2);
    }
}
// ---------------------------------------------------------

//5. Write a recursive function to print first N even natural numbers.

#include<stdio.h>

void even_natural_number(int);

int main(){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    even_natural_number(num);
}

void even_natural_number(int num){
    if(num>=1){
        if(num%2!=0){
            num =num-1;
        }
        even_natural_number(num-2);
        printf("%d,",num);
    }
}
// ------------------------------------------------------------------

// 6.Write a recursive function to print first N even natural numbers in reverse order.

#include<stdio.h>

void reverse_even_natural_number(int);

int main(){
    int num;
    printf("enter a number :"); 
    scanf("%d",&num);
    reverse_even_natural_number(num);
}

void reverse_even_natural_number(int num){
    if(num>=2){
        if(num%2!=0){
            num = num-1;
        }
        printf("%d,",num);
        reverse_even_natural_number(num-2);
    }
}
// ------------------------------------------------------

//7. Write a recursive function to print squares of first N natural numbers.

#include<stdio.h>

void square_natural_number(int);

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    square_natural_number(num);
}

void square_natural_number(int num){
    if(num>=1){
        square_natural_number(num-1);
        printf("%d X %d= %d\n",num,num,num*num);
    }
}
// -----------------------------------------------------------------------

//8. Write a recursive function to print binary of a given decimal number.

#include<stdio.h>

void binary(int);

int main(){
    int num,rem;
    printf("enter a number :");
    scanf("%d",&num);
    binary(num);
    return 0;
}

void binary(int num){
    int rem;
    if(num>=1){
        rem = num%2;
        num = num/2;
        binary(num);
        printf("%d ",rem);
    }
}
// ---------------------------------------------------------------

// 9.Write a recursive function to print octal of a given decimal number

#include<stdio.h>

void octal(int);

int main(){
    int num,rem;
    printf("enter a number :");
    scanf("%d",&num);
    octal(num);
    return 0;
}

void octal(int num){
    int rem;
    if(num>=1){
        rem = num%8;
        num = num/8;
        octal(num);
        printf("%d",rem);
    }
}
// ----------------------------------------------------

//10. Write a recursive function to print reverse of a given number.

#include<stdio.h>

void reverse_number(int);

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    reverse_number(num);
    return 0;
}

void reverse_number(int num){
    int i,rem;
    if(num>0){
        i=num;
        rem = i%10;
        num = num/10;
        printf("%d",rem);
        reverse_number(num);
    }
}
// -----------------------------------------------------