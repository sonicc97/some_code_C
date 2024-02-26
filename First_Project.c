#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void main() {
    int p;
    p = 12;
    int m = 323;

    float gpa = 33.0;
    char grade = 'B';
    char name[] = "Hey, what's up?";
    int year = 26;

    printf("Your gpa is :%f\n", gpa);
    printf("Your grade is %c \n", grade);
    printf("Say name %s\n", name);
    printf("You are %d years old!\n", year);

    char number = 120;
    long long int hi = 12345931293020;

    printf("%lld\n", hi);
    printf("%c\n", number);


    int array[7] = {12,15,6,2,7,8};
    printf("%d", array);
}
int main ()
{
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   for ( i = 0; i < 5; i++ )
   {
    for ( j = 0; j < 2; j++ )
    {
        printf("a[%d][%d] = %d\n", i,j, a[i][j] );
    }
   }
   return 0;
}
int main() {
float item1 = 2.03;
float item2 = 10.01;
float item3 = 100.01;

printf("Item 1 is : $%.2f\n", item1);
printf("Item 2 belong to: $%.2f\n", item2);
printf("And item3 is: $%.3f\n", item3);

float x = 5;
float y = 10;

float pi = x * y;

printf("The number is %f", pi);
}

int main() {

    int age;
    char name[25];
    printf("What's your name\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("Koliko imate godina?\n");
    scanf("%d",&age);

    printf("Tvoje ime je %s", name);
    printf("Ti imas %d godina", age);


    return 0;
}