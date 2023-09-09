#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char c;
    float a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    cout<<"Enter operator (+,-,*,/,| (for absolute values))";
    cin>>c;
    if (c =='+'){
        cout<<"Sum : "<<a+b;
    }
    else if (c == '-'){
        cout<<"Difference : "<<a-b;
    }
    else if (c == '*'){
        cout<<"Product : "<<a*b;
    }
    else if (c == '/'){
        cout<<"Division : "<<a/b;
    }
    else{
        cout<<"Absolute value : "<<abs(a);
        cout<<"Absolute value : "<<abs(b);
    }

}