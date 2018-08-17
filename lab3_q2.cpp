//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare two int variables and two float variables
	int n1,n2;
	float fl1,fl2;
	//input values of int variables
	cout<<"Enter two integer values - ";
	cin>>n1>>n2;
	//for the two int variables, calculate and display their sum
	cout<<"SUM - "<<n1+n2<<endl;
	//their difference
	cout<<"DIFFERENCE - "<<n1-n2<<endl;
	//their product
	cout<<"PRODUCT - "<<n1*n2<<endl;
	//the quotient of their division
	cout<<"QUOTIENT - "<<n1/n2<<endl;
	//the remainder of their division
	cout<<"REMAINDER - "<<n1%n2<<endl;
	//input values of the two float variables
	cout<<"Enter two float values - ";
	cin>>fl1>>fl2;
	//then for the two float variables, calculate their sum
	cout<<"SUM - "<<fl1+fl2<<endl;
	//their difference
	cout<<"DIFFERENCE - "<<fl1-fl2<<endl;
	//their product
	cout<<"PRODUCT - "<<fl1*fl2<<endl;
	//the quotient of their division
	cout<<"QUOTIENT - "<<fl1/fl2<<endl;
	/* and the remainder :P ; EDIT-Error displayed while compiling the program
	lab3_q2.cpp: In function ‘int main()’:
lab3_q2.cpp:35:28: error: invalid operands of types ‘float’ and ‘float’ to binary ‘operator%’
  cout<<"REMAINDER - "<<fl1%fl2<<endl; 
                            ^
	Hence this part of the code was removed	
	*/
	cout<<"Remainder? Nice try. Not possible.";
	cout<<"That's All Folks!";
}
		
