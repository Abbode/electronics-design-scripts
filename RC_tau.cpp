#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float tau,R,C=0,F,ttfc;
	bool op;
	system("clear");
	cout<<"welcome, please note garbage in garbage out"<<endl;
	cout<<"press 0 to calculate tau and frequency, OR 1 to calculate component value to get your desired time to fully charge"<<endl;
	cin>>op;
	if (op==0)
	{
		cout<<"enter R value (2.2*e6 is 2.2Meg)"<<endl;
		cin>>R;
		cout<<"enter C value(33*e-9 is 33n)"<<endl;
		cin>>C;
		tau=R*C;
		ttfc=5*tau;
		F=1/ttfc;
		cout<<"Tau is: "<<tau<<endl<<"time to fully charge the capacitor is: "<<ttfc<<" sec"<<endl;
		cout<<"frequency based on time to fully charge is: "<<F<<" Hz"<<endl;
	}
	else
	{
		cout<<"enter your desired time for full charging the capacitor in seconds (2e3 is 2K)"<<endl;
		cin>>ttfc;
		tau=ttfc/5;
		cout<<"enter '0' to calculate C value, OR '1' to calculate R value"<<endl;
		cin>>op;
		if (op==0)
		{
			cout<<"enter R value:"<<endl;
			cin>>R;
			C=tau/R;
			cout<<endl<<"C value should be: "<<C<<" F"<<endl;
		}
		else
		{
			cout<<"enter C value:"<<endl;
			cin>>C;
			R=tau/C;
			cout<<endl<<"R value should be: "<<R<<" ohm"<<endl;
		}
		
	}
	return 0;
}
