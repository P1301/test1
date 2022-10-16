// 1. Write a program which takes the month number as an input and display
// number of days in that month

#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    switch(n){
        case 1:printf("JANUARY-31days");
        break;
        case 2:printf("FEBRUARY-28/29days");
        break;
        case 3:printf("MARCH-31days");
        break;
        case 4:printf("APRIL-30days");
        break;
        case 5:printf("MAY-31days");
        break;
        case 6:printf("JUNE-30days");
        break;
        case 7:printf("JULY-31days");
        break;
        case 8:printf("AUGUST-31days");
        break;
        case 9:printf("SEPTEMBER-30days");
        break;
        case 10:printf("OCTOBETR-31days");
        break;
        case 11:printf("NOVEMBER-30days");
        break;
        case 12:printf("DECEMBER-31ays");
        break;
    }
    return 0;
}
// ------------------------------------------------------------

 // 2. Write a menu driven program with the following options:

#include<stdio.h>
int main(){
    int n,a,b;
    printf("\n1.ADDITION");
    printf("\n2.SUBTRACTION");
    printf("\n3.MULTIPLICATION");
    printf("\n4.DIVISION");
    printf("\n5.EXIT\n");
    printf("enter a number between 1 and 5 :");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("You Selected Addition programme\n");
        printf("enter two numbers :");
        scanf("%d %d",&a,&b);
        printf("Addition is %d",a+b);
        break;
                
        case 2:
        printf("You Selected subtraction programme\n");
        printf("enter two numbers :");
        scanf("%d %d",&a,&b);
        printf("subtraction is %d",a-b);
        break;

        case 3:
        printf("You Selected multiplication programme\n");
        printf("enter two numbers :");
        scanf("%d %d",&a,&b);
        printf("multiplication is %d",a*b);
        break;
                
        case 4:
        printf("You Selected division programme\n");
        printf("enter two numbers :");
        scanf("%d %d",&a,&b);
        printf("Quotient is %d",a/b);
        break;
                
        case 5:
        break;
    }
    return 0;
}
// -------------------------------------------------------------------

// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.

#include<stdio.h>
int main(){
    int n;
    printf("enter a number between 1 and 7 :");
    scanf("%d",&n);
    switch(n){
        case 1:printf("MONDAY\n");
        printf("Namaste in Hindi. ");
        break;
        case 2:printf("TUESDAY\n");
        printf("Sata Sri Akal in Punjabi.");
        break;
        case 3:printf("WEDNESDAY\n");
        printf("Nomoshkar in Bangla");
        break;
        case 4:printf("THURSDAY\n");
        printf("Aadab in Kashmiri.");
        break;
        case 5:printf("FRIDAY\n");
        printf("Parnam in Magadhi.");
        break;
        case 6:printf("SATURDAY\n");
        printf("Namaskar in Marathi.");
        break;
        case 7:printf("SUNDAY\n");
        printf("Vanakkam in Tamil.");
        break;
        default:
        printf("invalid data");
    }
    return 0;
}
// ----------------------------------------------------------------

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit.

#include<stdio.h>
int main(){

        int n,side1,side2,side3,height,base,hypotenuse;
    printf("\n1.ISOCELES TRIANGLE");
    printf("\n2.RIGHT ANGLE TRIANGLE");
    printf("\n3.EQUILATERAL TRIANGLE");
    printf("\n4.EXIT\n");
    printf("enter a number between 1 and 4 :");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("enter side1 :");
        scanf("%d",&side1);
        printf("enter side2 :");
        scanf("%d",&side2);
        printf("enter side3 :");
        scanf("%d",&side3);
        if((side1==side2 || side2==side3 || side3==side1) &&
         (side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
         && (side1==side2 && side1 != side3 && side2 != side3)||
          (side2==side3 && side2 != side1 && side1 != side3)||
           (side1==side3 && side2 != side3 && side2 != side1)){
            printf("ISOCELES TRIANGLE");
        }
        else{
            printf("not a ISOCELES TRIANGLE");
        }
        break;
        
        case 2:
        printf("enter hypotenuse:");
        scanf("%d",&hypotenuse);
        printf("enter height:");
        scanf("%d",&height);
        printf("enter base:");
        scanf("%d",&base);
        if(height*height + base*base == hypotenuse*hypotenuse){
            printf("RIGHT ANGLE TRIANGLE");
        }
        else{
            printf("not a RIGHT ANGLE TRIANGLE");
        }
        break;

        case 3:
        printf("enter side1 :");
        scanf("%d",&side1);
        printf("enter side2 :");
        scanf("%d",&side2);
        printf("enter side3 :");
        scanf("%d",&side3);
        if(side1==side2 && side2==side3 && side3==side1){
            printf("EQUILATERAL TRIANGLE");
        }
        else{
            printf("not a EQUILATERAL TRIANGLE");
        }
        case 4:
        break;
    }
    return 0;
}
// --------------------------------------------------------------------------------

// 5. program to Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

#include<stdio.h>
int main(){
    printf("\n1.good");
    printf("\n2.better");
    printf("\n3.best");
    printf("\n4.invalid\n");
    int n;
    printf("enter number between 1 and 4 : ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("good");
        break;

        case 2:
        printf("better");
        break;

        case 3:
        printf("best");
        break;

        case 4:
        printf("invalid");
         break;
    }
    return 0;
}
// ------------------------------------------------------------------------

// 6. Program to check whether a year is a leap year or not. Using switch
// statement.




// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>
int main(){
    int n;
    printf("enter units :");
    scanf("%d",&n);
    switch(n){
        case 1 ... 50:
        printf("%0.3f",n*0.50*1.2);
        break;

        case 51 ... 150:
        printf("%0.3f",n*0.75*1.2);
        break;       
        
        case 151 ... 250:
        printf("%0.3f",n*1.20*1.2);
        break;

        case 251 ... 99999999:
        printf("%0.3f",n*1.50*1.2);
        break;
    }
    printf("\nNOTE : An additional surcharge of 20%% is added to the bill. ");
    return 0;
}
// ------------------------------------------------------------------------------------------------

// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.

#include <stdio.h>
int main(){
    int number;
    // char  '-'
    printf("enter a  number :");
    scanf("%d",&number);
    switch(number>0){
        case 1:
        printf("%d",-number);
        break;

        case 0:
        switch(number<0){
            case 1:
            printf("%d",-number);
        break;
        }
    }
return 0;

}
// ------------------------------------------------------------------------------------


// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.

#include<stdio.h>
int main(){
    int even;
    printf("enter a even number :");
    scanf("%d",&even);
    switch(even%2==0){
        case 1:
        printf("%d is the upper nearest odd number of %d",even+1,even);
        break;
    }
    return 0;
}
// ------------------------------------------------------------------------------------------

    
// 10. C program to find all roots of a quadratic equation using switch case.

#include<stdio.h>
#include<math.h>
int main(){
    float squareRoot,a,b,c,D,root1,root2,imaginery;
    printf("enter a :");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c :");
    scanf("%f",&c);

    D=b*b-4*a*c;
    squareRoot= sqrt(D);

    switch(D>0){
        case 1:
        root1=((-b+squareRoot)/(2*a));
        root2=((-b-squareRoot)/(2*a));
        printf("roots are real and distinct: %0.2f %0.2f",root1,root2);
        break;

        case 0:
        switch(D<0){
            case 1:
            root1 = root2 = -b/(2*a);
            imaginery = sqrt(-D)/(2*a);
            printf("roots are distinct and complex: %f+i%0.2f %f-i%0.2f",root1,imaginery,root2,imaginery);
        break;

        case 0:
        root1=root2=  -b/(2 * a);
        printf("roots are real and equal: %0.2f %0.2f",root1,root2);
        break;
        }
    }
    return 0;
}

