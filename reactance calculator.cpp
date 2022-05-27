#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float f0,componentValue,X;
	const float pi=3.141592653589793238462643;
	char componentType;
	int E;
	system("clear");
	cout<<"Reactance calculator"<<endl<<"please note that garbage in garbage out, 1e3=1k and 1e-3=1m"<<endl;
	START:
	cout<<"enter frequency in Hertz"<<endl;
	cin>>f0;
	cout<<"enter component type [C for capacitor or L for inductor]"<<endl;
	cin>>componentType;
	cout<<"enter 1 to calculate reactance or 2 to calculate capacitance/inductance"<<endl;
	cin>>E;
	if (E==1)
	{
		cout<<"enter "<<componentType<<" value:"<<endl;
		cin>>componentValue;
		if (componentType == 'C' | componentType == 'c' )
		{
			X=1/(2*pi*f0*componentValue);
		}
		else if (componentType == 'L' | componentType == 'l' )
		{
			X=2*pi*f0*componentValue;
		}
		else cout<<"garbage"<<endl;
		cout<<endl<<"Reactance is:  "<<X<<"  Ohms"<<endl<<endl;
	}
	else if (E==2)
	{
		cout<<"enter the impedance value you want to get in Ohms"<<endl;
		cin>>X;
		if (componentType == 'C' | componentType == 'c' )
		{
			componentValue=1/(2*pi*f0*X);
			cout<<"capacitance C = "<<componentValue<<" F"<<endl;
		}
		else if (componentType == 'L' | componentType == 'l' )
		{
			componentValue=X/(2*pi*f0);
			cout<<"inductance L = "<<componentValue<<" H"<<endl;
		}
	}
	else cout<<"garbage"<<endl;
	cout<<endl<<"are you finished? (type 1 for yes or 0 to start another calculation)"<<endl;
	cin>>E;
	if (E==0)
	goto START;
	return 0;
}
