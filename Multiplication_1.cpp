#include<iostream>
using namespace std;
int main(void)
{   
    //Declaring Variables
    float num1,num2,i;
    double Multiply=1;
    //Taking numbers of input
    cout<<"How many numbers do you want to multiply?\n "<<'='<<' ';
    cin>>num1;
    for(i=1;i<=num1;i++)
    {
        cout<<"Input No "<<i<<" : "; 
       cin>>num2;
    //Multiplication Process
       Multiply=Multiply*num2;
    }
    //Printing the Value
    cout<<"The Result is = "<<Multiply;
}