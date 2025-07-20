#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"---EXP-2 Program to check size of data types---"<<endl;
   
    int a;
    float b;
    char c;
    double d;
    string s;
    bool q;
   
    cout<<"Enter an integar: ";
    cin>>a;
    cout<<"Integer is "<<a<<" and it's size is "<<sizeof(a)<<" bytes"<<endl;
     
    cout<<"Enter a decimal number: ";
    cin>>b;
    cout<<"Decimal number is "<<b<<" and it's size is "<<sizeof(b)<<" bytes"<<endl;
   
    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Character is "<<c<<" and it's size is "<<sizeof(c)<<" bytes"<<endl;
   
    cout<<"Enter a number with a bigger decimal : ";
    cin>>d;
    cout<<"The bigger decimal is "<<d<<" and it's size is "<<sizeof(d)<<" bytes"<<endl;
   
    cout<<"Enter a sting: ";
    cin>>s;
    cout<<"String is "<<s<<" and it's size is "<<sizeof(s)<<" bytes"<<endl;
   
    cout<<"Enter a boolean value: ";
    cin>>q;
    cout<<"Boolean value is "<<q<<" and it's size is "<<sizeof(q)<<" bytes"<<endl;    

   
    return 0;
}