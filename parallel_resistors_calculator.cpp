#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int numberOfResistors;
    int counter=1;
    float result=1.0,sum=0.0;
    system("clear");
    cout<<"PARALLEL RESISTORS CALCULATOR"<<endl;
    cout<<"enter the --NUMBER-- of parallel resistors"<<endl;
    cin>>numberOfResistors;
    float* R {new float [numberOfResistors]  } ;
    for (int i=0 ; i < numberOfResistors ; i++)
        {
            cout<<"please enter the value of resistor number "<<counter<<endl;
            cin>>R[i]; // a problem here , this is only once executed!
            counter++;
        }
    for (int i=0 ; i < numberOfResistors ; i++)
    {
        sum = sum + R[i];
        result = result*R[i];
    }
    result = result/sum ;
    cout<<"the value of the equivalent parallel resistor is: "<<result<<endl;
    delete[] R;
    return 0;
}
