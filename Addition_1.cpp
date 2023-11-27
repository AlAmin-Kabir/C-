#include<iostream>
using namespace std;
int main(void)
{    
    //Declaring variables
    float num1,num2,i;
    double sum=0;
    //Taking number of inputs
    cout<<"How many numbers do you want to add?\n "<<'='<<' ';
    cin>>num1;
    for(i=1;i<=num1;i++)
    {
        cout<<"Input No "<<i<<" : "; 
       cin>>num2;
    //Addition
       sum=sum+num2;
    }
    //Printing the sum
    cout<<"The sum is = "<<sum;
}
