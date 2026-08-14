// A point on two dimensional plane can be represented by two no : x cordinate and y cordinate , write a program that uses structure call point to model a point , define three points and ask the user to input value to two of them then the third point is equal to the sum of two and display the value of the two point .
#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

void addpoints(point a, point b, point &c){
    c.x=a.x+b.x;
    c.y=a.y+b.y;
}

void displaypoints(point p){
    cout<<"x coordinate = "<<p.x;
    cout<<"y coordinate = "<<p.y;
}


int main()
{
    struct point p1;
    struct point p2;
    struct point p3;

    cout<<"A point on two dimensional plane can be represented by two no : x cordinate and y cordinate , write a program that uses structure call point to model a point , define three points and ask the user to input value to two of them then the third point is equal to the sum of two and display the value of the two point ."<<endl;
    cout<<"Enter x coordinate of p1= ";
    cin>>p1.x;
    cout<<"Enter y coordinate of p1= ";
    cin>>p1.y;

    cout<<"Enter x coordinate of p2= ";
    cin>>p2.x;
    cout<<"Enter y coordinate of p2= ";
    cin>>p2.y;


    addpoints(p1, p2 ,p3);
    displaypoints(p3);
    return 0;
}