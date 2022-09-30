// 1.programme to print Hello Student.

#include<stdio.h>
int main(){
    printf("Hello Student");
    return 0;
}
// -------------------------------
// -----------------------

// 2.programme to print Hello in the first line and Students in the second line


#include<stdio.h>
int main(){
    printf("Hello\nStudents");
    return 0;
}
// -------------------------------
// -----------------------
// 3.programme to print MySirG in double quotes.

#include<stdio.h>
int main(){
    printf("\"MySirG\"");
    return 0;
}
// -------------------------------
// -----------------------

// 4.programme to find the area of the circle.

#include<stdio.h>
int main(){
    int rad;
    int area;
    printf("enter radius : ");
    scanf("%d",&rad);
    area = 3.14 * rad * rad;
    printf("Area of circle is %d having the radius %d",area,rad);
return 0;
}
// -------------------------------
// -----------------------

// 5.programme to find the length of string using printf function.

#include<stdio.h>
int main(){
    int x = printf("MySirG");
    printf("%d",x);
    return 0;
}
// -------------------------------
// -----------------------

// 6.programme to print name of the user in double quotes.

#include<stdio.h>
int main(){
char name[20];
printf("Enter your name: ");
fgets(name, 20, stdin);
printf("\"Hello,%s\"", name);
return 0;
}
// -------------------------------
// -----------------------

// 7.programme to print "%d" on the screen.

#include<stdio.h>
int main(){
    printf("%%d");
    return 0;
}
// -------------------------------
// -----------------------

// 8.programme to print "%n" on the screen.

#include<stdio.h>
int main(){
    printf("%%n");
    return 0;
}
// -------------------------------
// -----------------------

// 9.programme to print "\\" on the screen.

#include<stdio.h>
int main(){
    printf("\\\\");
    return 0;
}
// -------------------------------
// -----------------------

// 10. programme to print date in different format.

#include<stdio.h>
int main(){
    int d,m,y;
    printf("enter the date in this format: \"DD/MM/YYYY\":\n");
    scanf("%d %d %d",&d,&m,&y);

    printf("changed output format: Day- %d month- %d Year- %d",d,m,y);
    return 0;
}
// -------------------------------
// -----------------------

// 11. programme to print time in different format.

#include<stdio.h>
int main(){
    int H,T;
    printf("enter the time in this format: \"HH:MM\":\n");
    scanf("%d %d",&H,&T);
    printf("%d Hour and %d Minute",H,T);
    return 0;
}
// -------------------------------
// -----------------------

// 12.programme to find the output of below code.

#include<stdio.h>
int main(){
    int x = printf("inureon");
    printf("%d",x);
    return 0;
}
// this programme is used to find the lenght of a string.
// -------------------------------
// -----------------------

