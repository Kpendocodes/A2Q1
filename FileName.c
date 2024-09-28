//. Write a program that asks the user to enter an integer 
// and then prints all the integers starting at the value entered by the user up to a value 16 more
// than the value entered by the user. (That is, if the user were to input 20, the
//	output runs from 20 to 36 (inclusive).) Be sure to separate each output value
//by a newline.


//keno-prog71990-fall24-week04

#include < stdio.h>
#define CRT_NO_SECURE_WARNINGS
int main(void) {

	int num1;
		//input;

		printf("please enter a integer: \n");
		scanf_s("%d",&num1);
		
		
		for (int i = num1  ; i <= num1+ 16 ; i++){
			printf("%d\n", i);
			
			
		}

		return 0;
	// output 
	
}
