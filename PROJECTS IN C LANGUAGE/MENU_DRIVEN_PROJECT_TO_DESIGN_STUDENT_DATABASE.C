#include <stdio.h>
#include <conio.h>
#include <string.h>
int Make_Entry(int);
int Display(int);
int Search(int n);
void Due_Fee(int);
void Section(int);
void Details(int);
void Mainmenu();
void ex();
typedef struct student {
long int SAP_ID;
int Roll_No;
char name[50];
char section[2];
int year_of_birth;
char Department[20];

int Due_Fee;
int year_of_admission;
int marks;
}stud[100];

int main(){
    int pw;
    printf("-----------------------------------------------------\n");
    printf("  WELCOME TO OUR PROJECT  \n");
    printf("\n");
    printf(" Menu Driven to design student's Database\n");
    printf("-----------------------------------------------------\n");
    printf("Enter Password:");
    scanf("%d",&pw);
    if(pw==123){
        printf("BINGO\n");
        Mainmenu();
    }  
    else{
    printf("-----------------------------------------------------\n");
    printf("OOP! INCORRECT PASSWORD (:\n");
    printf("\n");
    printf("Please try again!!!\n");
    printf("-----------------------------------------------------\n");
    }
    ex();
    return 0;
}
void Mainmenu(){
printf("-----------------------------------------------------\n");
printf("Welcome to our Project\n");
printf("-----------------------------------------------------\n");
int choice,x,n;
stud s;
printf("Enter Number of Students:\n");
scanf("%d",&x);
printf("Enter Student Info:\n");
Make_Entry(x);
printf(" 1. To Display the entered data \n\n 2. To search a student by their SAP_ID\n\n ");
printf(" 3. To Display students with Due Fee \n\n 4. To Print Students of any desired section \n\n");
printf(" 5. To Display SAP_ID ,Name ,Section ,Marks \n");
printf(" 6. To exit\n\n");
printf("Please enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("-----------------------------------------------------\n");
Display(x);
printf("-----------------------------------------------------\n");
break;
case 2:
printf("-----------------------------------------------------\n");
n=Search(x);
printf("-----------------------------------------------------\n");

if(n==-1){
    printf("No such student");
}
else{
printf("-----------------------------------------------------\n");
printf("Index of Searched Student: %d",n+1);
printf("\n-----------------------------------------------------\n");
}
break;
case 3:
printf("-----------------------------------------------------\n");
Due_Fee(x);
printf("-----------------------------------------------------\n");
break;
case 4:
printf("-----------------------------------------------------\n");
Section(x);
printf("-----------------------------------------------------\n");
break;
case 5:
printf("-----------------------------------------------------\n");
Details(x);
printf("-----------------------------------------------------\n");
case 6:
printf("-----------------------------------------------------\n");
ex();
printf("\n-----------------------------------------------------\n");
break;

default:
  printf("-----------------------------------------------------\n");
  printf("Enter correct input");
  printf("-----------------------------------------------------\n");
  break;
}

}
int Make_Entry(int n){
    stud s;
    int i;
    for(i=0;i<n;i++){
    printf("Enter SAP_ID of Student %d:",i+1);
    scanf("%ld",&s[i].SAP_ID);
    printf("Enter Roll No. of Student :");
    scanf("%d",&s[i].Roll_No);
    printf("Enter Name of Student :");
    scanf("%s",s[i].name);
    printf("Enter Section :");
    scanf("%s",s[i].section);
    printf("Enter Year of Birth : ");
    scanf("%d",&s[i].year_of_birth);
    printf("Enter Department :");
    scanf("%s",s[i].Department);
    printf("Enter Due Fee : ");
    scanf("%d",&s[i].Due_Fee);
    printf("Enter Year of Admission :");
    scanf("%d",&s[i].year_of_admission);
    printf("Enter Marks :");
    scanf("%d",&s[i].marks);
    }
}
int Display(int n){
    stud s;
    int i;

    for(i=0;i<n;i++){
    printf(" Details of Student: %d\n",i+1);
    printf(" SAP_ID of Student: %ld\n",s[i].SAP_ID);
    printf(" Roll No. of Student:%d\n",s[i].Roll_No);
    printf(" Name of Student:%s\n",&s[i].name);
    printf(" Section: %s\n",s[i].section);
    printf(" Year of Birth: %d\n",s[i].year_of_birth);
    printf(" Department : %s\n",s[i].Department);
    printf(" Due Fee: %d\n",s[i].Due_Fee);
    printf(" Year of Admission: %d\n",s[i].year_of_admission);
    printf(" Marks: %d\n",s[i].marks);
    }
}
int Search(int n){
    int i;
    stud s;
    int sap;
    printf("Enter Sap_Id of a student:");
    scanf("%d",&sap);
    for(i=0;i<n;i++){
        if(s[i].SAP_ID==sap){
             printf(" Roll No. of Student:%d\n",s[i].Roll_No);
             printf(" Name of Student: %s\n",s[i].name);
            return i;
        }
    }
    return -1;
}
void Due_Fee(int n){
stud s;
int i;
for(i=0;i<n;i++){
    if(s[i].Due_Fee >0){
    printf(" SAP_ID of Student: %ld\n",s[i].SAP_ID);
    printf(" Name of Student: %s\n",s[i].name); 
    }

}
}
void Section(int n){
stud s;
int i,result;
char c[2];

printf("Enter a Section from which you want Name of Students:");
scanf("%s",&c);

for(i=0;i<n;i++){
    result=strcmp(s[i].section,c);
    if(result==0){
    printf(" Roll No. of Student:%d\n",s[i].Roll_No);
    printf(" SAP_ID of Student: %ld\n",s[i].SAP_ID);
    printf(" Name of Student: %s\n",s[i].name);

    }
}

}
void Details(int n){
    stud s;
    int i;
    for(i=0;i<n;i++){
    printf(" SAP_ID of Student: %ld\n",s[i].SAP_ID);
    printf(" Name of Student: %s\n",s[i].name);
    printf(" Section: %s\n",s[i].section);
    printf(" Marks: %d\n",s[i].marks);
    }
}
void ex(){
	printf("Thanks for using our project\n");
    printf("\n Prepared By: Mizaan ur Rehman ,Aman Singh, Lakshya Rastogi,Yash Yadav, Aditya Chauhan ");
}
