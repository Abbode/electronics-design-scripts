#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float f0,componentValue,pi=3.141592653589793238462643,X;
	char componentType;
	system("clear");
	cout<<"Reactance calculator"<<endl<<"please note that garbage in garbage out"<<endl;
	cout<<"enter frequency in Hertz"<<endl;
	cin>>f0;
	cout<<"enter C for capacitor or L for inductor"<<endl;
	cin>>componentType;
	if (componentType == 'C' | componentType == 'c' )
	{
		cout<<"enter "<<componentType<<" value:"<<endl;
		cin>>componentValue;
		X=1/(2*pi*f0*componentValue);
	}
	else if (componentType == 'L' | componentType == 'l' )
	{
		cout<<"enter "<<componentType<<" value:"<<endl;
		cin>>componentValue;
		X=2*pi*f0*componentValue;
	}
	else cout<<"garbage"<<endl;
	cout<<endl<<"Reactance is:  "<<X<<"  Ohms"<<endl<<endl;
	return 0;
}
