/*-------------------------------------------------------
*		       Teach Yourself C++
*
* Exercise 1.1 :-
*
*    Create function called **sroot()** that returns the 
*    square root of its argument. Overload **sroot()**
*    three ways: int, double and float. Use sqrt() func. 
\*.-------------------------------------—---------------*/


#include <iostream>

//sqrt from math.h
#include <math.h>

using namespace std;

int sroot(int num)		   //int form
{				   
     return sqrt(num);
}

double sroot(double num)	   //double form
{
     return sqrt(num);
}

float sroot(float num)	   //float form
{
     return sqrt(num);
}


int main()
{
     int a;
     double b;
     float c;

     //Greetings
     cout << "**********************************" << endl;
     cout << "      Program to demonstrate       " << endl;
     cout << "      Function Overloading...      " << endl;
     cout << "**********************************\n" << endl;


     cout << "Enter an int, double and a float\n" << endl;

     cin >> a >> b >> c;

     //Calling the functions and writing to cout with newline char
     //^^^^^^^ ^^^ ^^^^^^^^^ ^^^ ^^^^^^^ ^^ ^^^^ ^^^^ ^^^^^^^ ^^^^

     cout << "\nRoot of int: " << sroot(a) << "\nRoot of double: " << sroot(b) << "\nRoot of float: " << sroot(c) << endl;

     return 0;
}
