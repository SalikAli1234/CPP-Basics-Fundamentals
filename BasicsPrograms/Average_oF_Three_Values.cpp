/*Program to display the Average of three variables*/
#include<iostream>
using namespace std;
int main()
{

    int num1=5;
    float num2=8.9;
    double num3=9.888;
    double average=0;//Intiliaze to zero to overwrite the garbage value
    average=(num1+num2+num3)/3;//Parantesis are used to discarge the priority order of division
    cout<<"Number 1 = "<<num1<<endl;
    cout<<"Number 2 = "<<num2<<endl;
    cout<<"Number 3 = "<<num3<<endl;
    cout<<"The average of these three numbers = "<<average<<endl;
    return 0;

}