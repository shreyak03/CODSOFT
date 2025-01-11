#include<iostream>
using namespace std;
class Calculator
{
    float a,b;
    public:
    void input()
    {
        cout<<"\n Enter first number:";
        cin>>a;
        cout<<"\n Enter second number:";
        cin>>b;
    }
    float sum()
    {
        return a+b;
    }
    float difference()
    {
        return a-b;
    }
    float product()
    {
        return a*b;
    }
    float divide()
    {
        if(b==0)
        {
            cout<<"\n Division by zero not valid!";
            return 0;
        }
        else
        {
            return a/b;
        }
    }
}c;
int main()
{
    int choice;
    cout<<"\n Menu\nEnter 1 to add\nEnter 2 to subtract\nEnter 3 to multiply\nEnter 4 to divide\nEnter 0 to exit";
     
    do
    {
        cout<<"\n Enter your choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
               c.input();
               cout<<"\n Addition:"<<c.sum();
               break;
            case 2:
               c.input();
               cout<<"\n Subtraction:"<<c.difference();
               break;
            case 3:
               c.input();
               cout<<"\n multiplication:"
               <<c.product();
               break;
            case 4:
               c.input();
               cout<<"\n division:"<<c.divide();
               break;
        }
    }while(choice>=1 && choice<=4);
}
