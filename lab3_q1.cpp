//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare variables of int, float, char, bool (boolean), and double (large decimal) 		types and assign arbitrary values to them
	int n=12;
	float fl=1.337;
	char ch='S';
	bool b=0;
	double dbl=1.76862;
	//print the values of all the variables
	cout<<"INT VALUE - "<<n<<endl<<"FLOAT VALUE - "<<fl<<endl<<"CHARACTER VALUE - "<<ch<<endl<<"BOOLEAN VALUE - "<<b<<endl<<"DOUBLE VALUE - "<<dbl<<endl;
//find the sizes of all the variables:
	cout<<"Sizes of - "<<endl;
	//int type
	cout<<"int - "<<sizeof(n)<<" bytes"<<endl;
	//float type
	cout<<"float - "<<sizeof(fl)<<" bytes"<<endl;
	//char type
	cout<<"char - "<<sizeof(ch)<<" bytes"<<endl;
	//bool type
	cout<<"bool - "<<sizeof(b)<<" bytes"<<endl;
	//double type
	cout<<"double - "<<sizeof(dbl)<<" bytes"<<endl;
	//La fin!
}

