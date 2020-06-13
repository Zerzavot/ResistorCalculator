//Main.cpp
#include <iostream>
using namespace std;
#include "eee.h"

int main(){
int choose;

bool flag;

do{
cout<<"-----------------------------------"<<endl;
cout<<" Choose the formula group\n";
cout<<  "0. EXIT (press 0)\n"<<
	"1. Resistors in Series (press 1)\n"<<
	"2. Resistors in Parallel(press 2)\n"<<
	"3. Capacitive Reactance(press 3)\n";
cout<<"-----------------------------------"<<endl;

cin>>choose;

	switch(choose)
	{
		case 1:{
			int first,second,third;
			int result;
			cout<<"Enter 3 parameter(r1,r2,r3)"<<endl;
			cin>>first>>second>>third;
			Formula1 f1(first,second,third);

			result= f1.calculation();
			cout<<"Result is: "<<result<<endl;
			flag=true;
			break;
		}

		case 2:
		{	
			float first,second,third;
			float result;
			cout<<"Enter 3 parameter(r1,r2,r3)"<<endl;
			cin>>first>>second>>third;
			Formula2 f2(first,second,third);

			result= f2.calculation();
			cout<<"Result is: "<<result<<endl;
		 	flag=true;
			break;
		}


		case 3:
		{	
			float first,second;
			float result;
			cout<<"Enter 2 parameter(frequency,capacitance)"<<endl;
			cin>>first>>second;
			Formula3 f3(first,second);

			result= f3.calculation();
			cout<<"Xc is: "<<result<<endl;
			flag=true;
			break;
		}

		

		default:
            		flag=false;

	}
}while(flag);

return 0;
}

