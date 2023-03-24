#include "header.h"
#include <clocale>
#include <iostream>
#include <main.h>
#include <iomanip>

using namespace std;

int logic(int a, int b)
{
    int result;
    if(a+1<=b+3)
    {
        result = 1;
    }else{
            result = 0;
         }
    return result;
}

void SoftwareDeveloper()
{
    setlocale(LC_ALL,"ukr");
     cout<<"\n"
         <<"Fidria Maksim"
         <<"Фiдря Максим"
         <<"(c)ALL Rights Reserved";
}
double call610(double x, double y, double z)
{
    double S=s_calculation(x,y,z);
    cout<<"Десяткова система числення:\n";
    cout<<"x= "<<dec<<x<<endl;
    cout<<"y= "<<dec<<y<<endl;
    cout<<"z= "<<dec<<z<<endl;
    cout<<"S= "<<dec<<S<<endl;
    cout<<"Щіснадцяткова система числення:\n";
    cout<<"x=0x"<<hex<<x<<endl;
    cout<<"y=0x"<<hex<<y<<endl;
    cout<<"z=0x"<<hex<<z<<endl;
    cout<<"S=0x"<<hex<<S<<endl;

    return 0;
}

