#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout <<"Enter two numbers you want to do arithmatics calculations for." <<endl;
    cout<<"First number:" <<endl;
    cin>>x;
    cout<<"Second number:" <<endl;
    cin>>y;
 
    char choice;
    cin>>choice;

    switch (choice)
    {
    case '+' :
        cout<<" x+y " <<"=" << x+y <<endl;
        break;

    case '-' :
        cout<<" x-y " <<"=" << x-y <<endl;
        break;
    
    case '*' :
    cout<<" x*y " <<"=" << x*y <<endl;
    break;

    case '/' :
        cout<<" x/y " <<"=" << x/y <<endl ;
        break;

    
    default:
    cout<<"Invalid choice!";
        break;
    }

}