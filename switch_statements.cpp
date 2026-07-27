#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter thr first number:";
    cin>>a;
    cout<<"Enter thr second number:";
    cin>>b;
    char op;
    cout<<"Enter the operation:";
    cin>>op;
    switch(op){
        case '+':cout<<(a+b)<<endl;
                 break;
        case '-':cout<<(a-b)<<endl;
                 break;
        case '*':cout<<(a*b)<<endl;
                 break;
        case '/':cout<<(a/b)<<endl;
                 break;
        case '%':cout<<(a%b)<<endl;
                 break;
        default: cout<<"Enter a valid operation"<<endl;
    }
}