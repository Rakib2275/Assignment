/*Write a program in C++ to print the sum of two numbers.
Sample Output:
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
*/
//w3resource
#include<iostream>
using namespace std;

int main()
{
    int num1=40;
    int num2=30;
    int sum,sub,multi,divi,ava;

    sum=num1+num2;
    sub=num1 - num2;
    multi=num1*num2;
    divi=num1 / num2;
    ava=sum/2;


    cout<<"The sum is: "<<sum<<endl;
    cout<<"The sub is: "<<sub<<endl;
    cout<<"The multi is: "<<multi<<endl;
    cout<<"The divi is: "<<divi<<endl;
    cout<<"The ava is: "<<ava<<endl;

}

