using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter number 3: ";
    cin>>num3;

    if(num1>num2 && num1>num3)
    {cout <<num1<< "is largest";}

    if(num2>num1 && num2>num3)
    {cout <<num2<< "is largest";}

    if(num3>num2 && num3>num1)
    {cout <<num3<< "is largest";}

    return 0;

}