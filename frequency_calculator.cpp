#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	system("clear");
	int E;
	float f0,lambda,period;
	const float c0=299792458;
	//float* R {new float [numberOfResistors]  } ;
	/*
	to do:
	-- adding channle width and number
	and calculating sub carriers right
	and left of main carrier f0
	
	-- maybe add multi medium Epsilon and
	Mewo to calculate it's velocity of
	electro-magnatic waves
	*/
	cout<<"enter 1 to transform frequency, 2 to transform period or 3 to transform wave length"<<endl;
	cin>>E;
	if (E==1)
	{
		cout<<"enter signal frequency (e3 is k and e-3 is m)"<<endl;
		cin>>f0;
		period=1/f0;
		lambda=c0/f0;
		cout<<"period = "<<period<<" s"<<endl<<"wave length = "<<lambda<<" m"<<endl;
	}
	else if (E==2)
	{
		cout<<"enter signal period in second (e-3 is m and e3 is k)"<<endl;
		cin>>period;
		f0=1/period;
		lambda=c0/f0;
		cout<<"frequency = "<<f0<<" Hz"<<endl<<"wave length = "<<lambda<<" m"<<endl;
	}
	else
	{
		cout<<"enter signal wave length (e3 is k and e-3 is m)"<<endl;
		cin>>lambda;
		f0=c0/lambda;
		period=1/f0;
		cout<<"frequency = "<<f0<<" Hz"<<endl<<"period = "<<period<<" s"<<endl;
	}
	return 0;
}
