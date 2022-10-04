#include<iostream>
    using namespace std;
    int main()
    {
       float tax=6.75;
       int tip=20;
       float mael_cost=88.67;
       float total_tax=0;
       float tax_rate;
       float tax_amount;
       float total_bill;
       cout<<"The cost of meal is = "<<mael_cost<<endl;
       cout<<"The amount of tax = "<<tax<<endl;
       cout<<"The amount of tip = "<<tip<<endl;
       total_tax=tax+tip;
       tax_rate=total_tax/100;
       tax_amount=mael_cost*tax_rate;
       total_bill=tax_amount+mael_cost;
       cout<<"The total amount of the bill = "<<total_bill<<"$"<<endl;

        return 0;
    }