#include <iostream>
#include <math.h>

using namespace std;

int main ()

{
    float f0,input,result;
    float pi=3.141592654;
    char component;
    system("clear");
    cout<<"PASSIVE RC FIRST ORDER FILTER CALCULATOR"<<endl; 
    cout<<"please enter the cutoff frequency in Hertz"<<endl;
    cin>>f0;
    cout<<"enter the component type that you know it's value (R for resistor or C for capacitance)"<<endl;
    cin>>component;
    cout<<"enter the known component value: (note that you can use 2.2e3 as 2.2K or 2.2e-3 as 2.2m)"<<endl;
    cin>>input;
    result=1/(2*pi*f0*input);
    if (component=='c' | component=='C' )
        cout<<"R value is: "<<result<<" ohms"<<endl;
    else if (component=='r' | component=='R' )
        cout<<"C value is: "<<result<<" Farad"<<endl;
    else cout<<"the other component value is: "<<result<<endl;
    return 0;
}
