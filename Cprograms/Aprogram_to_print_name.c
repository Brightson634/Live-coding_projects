#include <stdio.h>
#include <stdlib.h>

/* run this program using the editor of your choice with a C/C++ compiler*/

int main(){

int age;
char name[50];
char date[20];
printf("This program will print Names, Date of birth and Age from the user\n");
printf("Please enter the Names \n");
scanf("%s",&name);
printf("Please enter the DOB \n");
scanf("%s",&date);
printf("Please enter the Age \n");
scanf("%d",&age);
printf("Your details are:\n%s\n%s\n%d\n",name,date,age);

	return 0;
}