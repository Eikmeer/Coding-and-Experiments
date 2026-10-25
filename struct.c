/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct student
{
    char name[50];
    int rollno;
    char course[50];
    char college[50];
};

int main()
{
    struct student s;
    
    printf("Enter student's name: ");
    scanf("%s", s.name);
    
    printf("Enter roll no: ");
    scanf("%d", &s.rollno);
    
    printf("Enter Course: ");
    scanf("%s", s.course);
    
    printf("Enter college: ");
    scanf("%s", s.college);
    
    printf("=====Student ID Card=====");
    
    printf("\nStudents Name:      %s\t||\n", s.name); 

    printf("Roll No:            %d\t\t||\n", s.rollno);   

    printf("Course:             %s\t\t||\n", s.course);   

    printf("College:            %s\t\t||\n", s.college); 
    
    printf("=========================");


    return 0;
}