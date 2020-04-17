#include <stdio.h>

void main() {

//Character pointer..
//char *charptr;
//Integer pointer..
//int *intptr;
//Declaring multiple pointers in a single line...
//int *ptr1 *ptr2;


// %d is the int value of the varibles which will result in 50.
	{
char a = '2';
char b = 50;
printf("Character a is %d .\n Character b is %d .\n",a,b);
	}
// Here we have made use of minimum scopes using { } which similar to that of a subshell. REASON:- We needed to use a and b same variables again within the same .c file hence had to do it.
// Checkout https://stackoverflow.com/questions/45387465/how-to-undeclare-delete-variable-in-c for more information.


char a = '2';
char b = 50;
printf("Character a is %c .\n Character b is %c .\n",a,b);



}
