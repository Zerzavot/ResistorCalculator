//eee.h


class Formula1{
	private:
		int r1,r2,r3,result;
	public:

		Formula1(int,int,int);
		int getr1()const;
		int getr2()const;
		int getr3()const;
		int calculation();


};

class Formula2{
	private:
		float r1,r2,r3;
		float result;
	public:

		Formula2(float,float,float);
		float getr1()const;
		float getr2()const;
		float getr3()const;
		float calculation();


};

class Formula3{
	private:
		float fre,c;
		float xc;
		float pi=3.14;
		
	public:

		Formula3(float,float);
		float getfre()const;
		float getc()const;
		float getxc()const;
		float calculation();


};


































