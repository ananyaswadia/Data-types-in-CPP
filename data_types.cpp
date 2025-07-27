#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"---Program to check size of data types---"<<endl;
   
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



/*   OUTPUT 
---Program to check size of data types---
Enter an integar: 5
Integer is 5 and it's size is 4 bytes
Enter a decimal number: 9.8
Decimal number is 9.8 and it's size is 4 bytes
Enter a character: a
Character is a and it's size is 1 bytes
Enter a number with a bigger decimal : 8.9467567544
The bigger decimal is 8.94676 and it's size is 8 bytes
Enter a sting: hello
String is hello and it's size is 32 bytes
Enter a boolean value: 1
Boolean value is 1 and it's size is 1 bytes
*/
