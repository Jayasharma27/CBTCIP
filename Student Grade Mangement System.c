

#include<stdio.h>
#include<stdlib.h>
struct student
{
int roll;
char name[50];
int subject1,subject2,subject3,subject4,subject5;
float avearage;
float lowest;
float highest;
int total;

};
struct student*s;
char getGrade(float avearage)
{
if(avearage>=80&&avearage<=100)
return'A';
else if(avearage>=70)
return'B';
else if(avearage>=60)
return'C';
else if(avearage>=50)
return'D';
else
return'F';

}
int main()
{
    int i,n;
    printf("Enter no. of students");
    scanf("%d",&n);
    s=(struct student*)malloc(n*sizeof (struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter Roll no of%d student",(i+1));
        scanf("%d",&s[i].roll);
        printf("Enter name of%d student\n",(i+1));
        scanf("%s",s[i].name);
        
        printf("Enter subject1 of%d student\n",(i+1));
        scanf("%d",&s[i].subject1);
        printf("Enter subject2 of%d student\n",(i+12 ));
        scanf("%d",&s[i].subject2);
        printf("Enter subject3 of%d student\n",(i+1));
        scanf("%d",&s[i].subject3);
        printf("Enter subject4 of%d student\n",(i+1));
        scanf("%d",&s[i].subject4);
        printf("Enter subject5 of%d student\n",(i+1));
        scanf("%d",&s[i].subject5);

        //Calculate Total and Average.
           s[i].total=s[i].subject1+s[i].subject2+s[i].subject3+s[i].subject4+s[i].subject5;
           s[i].avearage= s[i].total/5;
           
          //Calculate Lowest And Highest
           s[i].lowest=s[i].subject1;
           s[i].highest=s[i].subject1;
           if(s[i].subject2<s[i].lowest)
           s[i].lowest=s[i].subject2;
           if(s[i].subject2>s[i].highest)
           s[i].highest=s[i].subject2;
           if(s[i].subject3<s[i].lowest)
           s[i].lowest=s[i].subject3;
           if(s[i].subject3>s[i].highest)
          s[i].highest=s[i].subject3;
          if(s[i].subject4<s[i].lowest)
           s[i].lowest=s[i].subject4;
           if(s[i].subject4>s[i].highest)
          s[i].highest=s[i].subject4;
             if(s[i].subject5<s[i].lowest)
           s[i].lowest=s[i].subject5;
           if(s[i].subject5>s[i].highest)
          s[i].highest=s[i].subject5;
         
   } 
 printf("\nYou have entered:\n");
    printf("!-----------------------------------------------------------------------------------------------------!\n");
    printf("Roll No |    Name  | English | Hindi| Maths| Science| Sanskrit| Total |Lowest|Highest| Average | Grade\n");
    for(i=0;i<n;i++)
    {
        char grade=getGrade(s[i].avearage);
    printf("  %d    |   %s   |    %d  |  %d   |   %d |   %d  |   %d  |   %d  |  %.2f  |  %.2f |  %.2f  | %c  \n"
    ,s[i].roll,s[i].name,s[i].subject1,s[i].subject2,
    s[i].subject3,s[i].subject4,s[i].subject5,s[i].total,s[i].lowest,s[i].highest,s[i].avearage,grade);
    
    }

free(s);
return 0;
}
