#include <iostream>
using namespace std;
#include "eee.h"

	Formula1::Formula1(int r01,int r02,int r03){ //Constructor
		r1=r01;
		r2=r02;
		r3=r03;
		cout<<"Resistors in Series\n";
	}

	int Formula1::getr1()const{return r1;}
	int Formula1::getr2()const{return r2;}
	int Formula1::getr3()const{return r3;}		

	int Formula1::calculation(){
		int a,b,c;
		a=getr1(); b=getr2(); c=getr3();
			
		result=a+b+c;
		return result;
	}
//-------------------------------------------------------------------------
	Formula2::Formula2(float r01,float r02,float r03){ //Constructor
		r1=r01;
		r2=r02;
		r3=r03;
		cout<<"Resistors in Parallel\n";
	}

	float Formula2::getr1()const{return r1;}
	float Formula2::getr2()const{return r2;}
	float Formula2::getr3()const{return r3;}		

	float Formula2::calculation(){
		float a,b,c;
		a=getr1(); b=getr2(); c=getr3();
			
		result=float( a*b + a*c + b*c )/ float( a+b+c );
		return result;
	}

//-------------------------------------------------------------------------

	Formula3::Formula3(float fre1,float c1){ //Constructor
		fre=fre1;
		c=c1;
		cout<<"Capacitive Reactance (Pi=3.14)\n";
	}

	float Formula3::getfre()const{return fre;}
	float Formula3::getc()const{return c;}
	float Formula3::getxc()const{return xc;}		

	float Formula3::calculation(){
		float fe,ce;
		fe=getfre(); ce=getc(); 
			
		xc=float (1)/ float( 2*pi*fe*ce );
		return xc;
	}

//-------------------------------------------------------------------------












