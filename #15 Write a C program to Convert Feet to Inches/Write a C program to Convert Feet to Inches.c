#include<stdio.h>
#include<conio.h>
void main()
{
    int feet,inch=12;
    printf("Write a C Program to Convert Feet to Inches\n");
    printf("Enter the value of Feet");
    scanf("%d",&feet);
    printf("%d Feet = %d Inches",feet,feet*inch);
    getch();
}
