#include<iostream>
using namespace std;
class Calculator
{
    float num1,num2;
    public:
    void input()
    {
        cout<<"\n Enter first number:";
        cin>>num1;
        cout<<"\n Enter second number:";
        cin>>num2;
    }
    float sum()
    {
        return num1+num2;
    }
    float difference()
    {
        return num1-num2;
    }
    float product()
    {
        return num1*num2;
    }
    float divide()
    {
        if(num2==0)
        {
            cout<<"\n Division by zero not valid!";
            return;
        }
        else
        {
            return num1/num2;
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
