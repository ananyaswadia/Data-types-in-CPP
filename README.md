# Data-types-in-CPP
A discussion on the basic data types C++ has to offer.

Aim: To learn and implement data types in C++.

Tool: V S Code or any IDE.

Theory: 
🔹 int (Integer)
Stores whole numbers (no decimals)
Example: int age = 20;

🔹 char (Character)
Stores a single character
Enclosed in single quotes ('A', '5')
Example: char grade = 'A';

🔹 double
Stores decimal numbers with double precision (more accurate than float)
Example: double pi = 3.14159;

🔹 string
Stores a sequence of characters (words or sentences)
Requires #include <string>
Example: string name = "Ananya";

🔹 float
Stores decimal numbers with single precision
Less accurate than double, uses less memory
Example: float temp = 36.6f; (note the f)

🔹 bool (Boolean)
Stores true or false
Used in conditions and logic
Example: bool isPassed = true;




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

Conclusion: We learnt about the basic data types supported by C++ and how to use them .
