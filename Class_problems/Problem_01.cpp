#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int roll_no;

public:
    void getdata(string a, int b)
    {
        name = a;
        roll_no = b;
    }
    void displaydata()
    {
        cout << "Name = " << name << endl;
        cout << "Roll no = " << roll_no << endl;
    }
};

int main()
{
    student s1;
    cout << "Create a class student which holds private data (name,roll_no.). Write two member function [get.data(), display.data()] to take input and display info respectively" << endl;
    s1.getdata("Ritesh", 222);
    s1.displaydata();

    return 0;
}