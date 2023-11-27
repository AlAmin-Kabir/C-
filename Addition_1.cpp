#include<iostream>
using namespace std;
int main(void)
{
    float num1,num2,i;
    double sum=0;
    cout<<"How many numbers do you want to add?\n "<<'='<<' ';
    cin>>num1;
    for(i=1;i<=num1;i++)
    {
        cout<<"Input No "<<i<<" : "; 
       cin>>num2;
       sum=sum+num2;
    }
    cout<<"The sum is = "<<sum;
}