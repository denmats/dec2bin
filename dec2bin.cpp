#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int Ndec,Vbin;
int i=0;
int res[200];

int main()
{
    cout << "Put down any decimal number to convert it to binary number: ";
    cin>> Ndec;
    system("CLS");
    cout<<"Your decimal number is "<<Ndec<<endl;

    do
    {
        Vbin=Ndec%2; // at first check remainder
        Ndec=Ndec/2; //at second dividing decimal number by 2

        res[i]=Vbin;
        i++;

    }while(Ndec);

    //write out results of our calculation
    cout<<"The decimal number is equal binary number: ";
    for(int j=i-1; j>=0; j--)
    {
        cout<<abs(res[j]); //using function "abs()" for show finish result without minus before 1 in the binary number
    }
    cout<<endl;

    return 0;
}
