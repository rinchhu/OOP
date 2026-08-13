#include <iostream>
using namespace std;

double power(double n, int p = 2);

int main()
{
    int n,p;
    cout<<"Raisig a no n to power p is the same as multipliying n by itself p time . Write a function called power() that takes double value for n, and an int value for p and return result as a doubke value .Use default arguments of 2 for p, so if argument is omited the number is squared . Write main() function to get values from user as input"<< endl;
    cout<<"Enter a no = ";
    cin>>n;
    cout<<"enter power = ";
    cin>>p;
    if (p==0)
    {
        cout<<"Ans is = "<<power(n,2)<<endl;
    }
    else{
        cout<<"Ans is = "<<power(n,p)<<endl;
    }
    
    return 0;
}

double power(double n, int p = 2){ // double power(double n, int p =2 ) , 
    int mul=1;
    for (int i = 0; i < p; i++)
    {
        mul = mul*n;
    }
    return mul;
}