#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // L1 Ex1
    printf("Press 'any' key. \n");
    putch(getch());
    getch();
    
    //newline
    // L1 Ex2
    char s[200];
    printf("\nPlease input a chareter string and press ENTER\n");
    gets(s);
    printf("\nThe character string is\n");
    puts(s);
    getch();

    // L1 Ex3
    int a;
    float b, c;
    printf("\nPlease input the integer value of a=");
    scanf("%5d",&a);
    printf("\nPlease input the value of the real number b=");
    scanf("%5f",&b);
    c=a+b;
    printf("\nthe value of the sum c=a+b is: %6.3f\n",c);
    getch();

    // L1 Ex4
    char s1[100], q[100];
    int a1, b1;
    float c1, d;
    printf ("\nInput on the same row values for integer a and real c\n\
            separated by a whitespecs character\n\
            and followed by ENTER\n");
    gets(s1);
    sscanf(s1,"%d %f", &a1, &c1);
    printf("\n a=%4d c=%8.3f\n", a1, c1);
    sprintf(q,"%4d %8.3f\n", a1, c1);
    sscanf(q,"%d %f",&b1,&d);
    printf("\n b=%5d d=%9.4f\n",b1,d);
    getch();

    //L1 Ex5
    putchar(getchar());
    putchar('\n');
    getch();

    return 0;
}
