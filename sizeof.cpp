/*Write a C++ Program to Find Size of int, float, double and char in Your System
Your output should look something like this
Size of char: 1 byte Size of int: 4 bytes Size of float: 4 bytes Size of double: 8 bytes */

#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    double d;

    cout<<"Size of int: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Size of float: "<<sizeof(b)<<" bytes"<<endl;
    cout<<"Size of char: "<<sizeof(c)<<" bytes"<<endl;
    cout<<"Size of double: "<<sizeof(d)<<" bytes"<<endl;
}
