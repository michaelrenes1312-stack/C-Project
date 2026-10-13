/*
PROJECT:grading system
DESCRIPTION:A system to grade student doing
           ICT at a college based on formative and
            summative marks
Author:Angela kimaru
Date:13/10/2026

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int formative_marks, summative_marks, total_marks;
  char grade, student_name [50],comment[20];
  printf("CDACC GRADING SYSTEM\n");

  //capture inputs
printf("Enter student name:");
  fgets(student_name,50,stdin);
  do{
  printf("Enter formative marks(0-50):");
  scanf("%d",&formative_marks);
  if(formative_marks<0 || formative_marks> 50){
    printf("invalid marks.Try again\n");
  }
  }while(formative_marks<0 || formative_marks>50);
  do{
  printf("Enter summative marks(0_5):");
  scanf("%d",summative_marks);
  if(summative_marks <0 || summative_marks> 50){
        printf("invalid marks.Try again\n");
}
}while(summative_marks<0 || summative_marks>50);
  total_marks = formative_marks + summative_marks;
  //marks declaration
                   if(total_marks ==49){
                      total_marks=50;


  }
 // check for technical fail
  if(formative_marks <25 || summative_marks<25){
        total_marks = 49;
}
 //find the grade
 if(total_marks>70) grade ='A';
 else if(total_marks >=60) grade ='B';
 else if (total_marks >=50) grade='C';
 else grade ='D';
 switch(grade)
{
case  'A':
    strcpy(comment,"mastery");
            break;
case   'B':
   strcpy(comment,"proficient");
            break;
case  'C':
    strcpy(comment,"competent");
            break;
case  'D':
    strcpy(comment,"not yet competent");
            break;
default:
    strcpy(comment,"M.M");
            break;
}
 //output
 printf("student name: %s\n",student_name);
 printf("total marks:%d\n",total_marks);
 printf("grade:%c\n",grade);
 printf("comment: %s\n",comment);
return 0;

}

