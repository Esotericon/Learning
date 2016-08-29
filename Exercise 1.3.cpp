/*-------------------------------------------------------
*		       Teach Yourself C++
*
* Exercise 1.3 :-
*
*    Create function called **min()** that returns the
*    smaller of the two numeric arguments. Overload 
*    **min()** three ways: char, int and double.
\*.-------------------------------------—---------------*/

#include <iostream>

using namespace std;


/* Int form of min() function **
** ^^^ ^^^^ ^^ ^^^^^ ^^^^^^^^ */

int min(int num1, int num2)
{
     if (num1 < num2)
     {
	   return num1;
     }
     else if (num2 < num1)
     {
	   return num2;
     }
     else
	   return (num1 + num2);	     //In case both are equal. (for checking) All case proof.
}

/* Double form of min() function **
** ^^^^^^ ^^^^ ^^ ^^^^^ ^^^^^^^^ */

double min(double num1, double num2)
{
     if (num1 < num2)
     {
	   return num1;
     }
     else if (num2 < num1)
     {
	   return num2;
     }
     else
	   return (num1 + num2);	     //In case both are equal. (for checking) All case proof.
}

/* Char form of min() function **
** ^^^^ ^^^^ ^^ ^^^^^ ^^^^^^^^ */

char min(char num1, char num2)
{
     if (num1 < num2)
     {
	   return num1;
     }
     else if (num2 < num1)
     {
	   return num2;
     }
     else
	   return (num1 + num2);	     //In case both are equal. (for checking) All case proof.
}

int main()
{
     //Greetings
     cout << "***********************************" << endl;
     cout << "      Program to demonstrate       " << endl;
     cout << "      Function Overloading..	" << endl;
     cout << "       (finding minimum)		" << endl;   
     cout << "***********************************\n" << endl;
     
     cout << "Enter   1 to compare Integers,\n\t2 to compare Doubles,\n\t3 to compare Chars\n" << endl;
     int choice;
     cin >> choice;

     if (choice == 1)
     {
	   cout << "Enter two Integers separated by a space\n" << endl;	   //Asking input from user
	   int a = 0, b = 0;				          //Initialize int variables
	   cin >> a >> b;					   //Taking input...

	   if (min(a, b) == a + b)			   //Checking Equal Numbers Inputted?? 
	   {
		 cout << "\nEntered Digits are Equal\n" << endl;
	   }
	   else
	   {
		 cout << "\nThe Smaller Digit is... " << min(a, b) << endl;
	   }
     }
     else if (choice == 2)
     {
	   cout << "Enter two Doubles separated by a space\n" << endl;	   //Asking input from user
	   double a = 0, b = 0;				   //Initialize double variables
	   cin >> a >> b;					   //Taking input...

	   if (min(a, b) == a + b)			   //Checking Equal Numbers Inputted?? 
	   {
		 cout << "\nEntered Digits are Equal\n" << endl;
	   }
	   else
	   {
		 cout << "\nThe Smaller Number is... " << min(a, b) << endl;
	   }
     }
     else if (choice == 3)
     {
	   cout << "Enter two Chars separated by a space\n" << endl;	   //Asking input from user
	   char a = 0, b = 0;				   //Initialize char variables
	   cin >> a >> b;					   //Taking input...

	   if (min(a, b) == a + b)			   //Checking Equal Numbers Inputted?? 
	   {
		 cout << "\nEntered Characters are Equal\n" << endl;
	   }
	   else
	   {
		 cout << "\nThe Smaller Character is... " << min(a, b) << endl;
	   }
     }
     else
     {
	   cout << "\nInvalid selection.\nPlease restart the program." << endl;		//outputting invalid message
     }
     

     return 0;
}