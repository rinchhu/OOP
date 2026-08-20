// Create an equivalent for 4 function calculator

#include <iostream>
using namespace std;

double calculator(double n1, double n2, char ch)
{
    switch (ch)
    {
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        return n1 / n2;
    default:
        return 0000;
    }
}
int main()
{
    double n1, n2, ans;
    char op;
    int c = 0;;
    do
    {
        cout<<"Enter number 1 = ";
        cin>>n1;
        cout<<"Enetr number 2 = ";
        cin>>n2;
        cout<<"Enter operator : + , - , * , / "<< endl;
        cin>>op;
        cout<<"Ans is = "<<calculator(n1, n2, op)<<endl;
        c = c+1;
        cout<<"Enter 0 to continue "<<endl;
        cin>>c;

    } while (c == 0);
    

    return 0;
}