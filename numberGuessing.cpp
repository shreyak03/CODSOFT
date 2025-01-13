#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	
	cout<<"\n\t\t\t Welcome to NumberGuessing game!";
	cout<<"You will have to guess a number between 1 to 100.You will have limited choices based on the difficulty of the level you choose.GOOD LUCK!";
	while(1)
	{
		cout<<"\n Enter the difficulty level:\n";
		cout<<"1 for Easy\n";
		cout<<"2 for Medium\n";
		cout<<"3 for Difficult\n";
		cout<<"0 for END!\n";
		
		int difficultyChoice;
		cout<<"Enter your choice:";
		cin>>difficultyChoice;
		srand(time(0));
	    int secretNum=1+(rand()%100);
	    int playerChoice;
	    
		if(difficultyChoice==1)
		{
		    cout<<"\n You have 10 choices to find the secret number between 1 and 100!";
			int choicesLeft=10;
			int i;
			for(i=1;i<=10;i++)
			{
			    cout<<"\n\n Enter a number:";
				cin>>playerChoice;
				if(playerChoice==secretNum)
				{
					cout<<"Well played!! You won,"<<playerChoice<<"is the secret number!!"<<endl;
					cout<<"\t\t\t Thanks for playing....."<<endl;
					cout<<"Play again to enjoy!!\n\n"<<endl;
					break;					
				}
				else
				{
				   cout<<"Nope,"<<playerChoice<<"\tis not the secret number\n!!"<<endl;
				   if(playerChoice>secretNum)
				   {
				   	 cout<<"Nope,"<<playerChoice<<"\tis greater than the secret number\n!!"<<endl;
				   	 
				   }
				   else
				   {
				   	cout<<"Nope,"<<playerChoice<<"\tis smaller than the secret number\n!!"<<endl;
				   }
				   choicesLeft--;	
				   cout<<"\n Choices left:"<<choicesLeft;
				   if(choicesLeft==0)
				   {
				   	cout<<"You couldn't find the secret number,it was"<<secretNum<<"You lose!!!!\n\n";
				   	cout<<"Play again to WIN!!!!\n\n";
				   }
				}		
			}	
		}
		else if(difficultyChoice==2)
		{
			 cout<<"\n You have 7 choices to find the secret number between 1 and 100!";
			int choicesLeft=7;
			int i;
			for(i=1;i<=7;i++)
			{
			    cout<<"\n\n Enter a number:";
				cin>>playerChoice;
				if(playerChoice==secretNum)
				{
					cout<<"Well played!! You won,"<<playerChoice<<"\tis the secret number!!"<<endl;
					cout<<"\t\t\t Thanks for playing....."<<endl;
					cout<<"Play again to enjoy!!\n\n"<<endl;
					break;					
				}
				else
				{
				   cout<<"Nope,"<<playerChoice<<"is not the secret number\n!!"<<endl;
				   if(playerChoice>secretNum)
				   {
				   	 cout<<"Nope,"<<playerChoice<<"\tis greater than the secret number\n!!"<<endl;
				   	 
				   }
				   else
				   {
				   	cout<<"Nope,"<<playerChoice<<"\tis smaller than the secret number\n!!"<<endl;
				   }
				   choicesLeft--;	
				   cout<<"\n Choices left:"<<choicesLeft;
				   if(choicesLeft==0)
				   {
				   	cout<<"You couldn't find the secret number,it was"<<secretNum<<"You lose!!!!\n\n";
				   	cout<<"Play again to WIN!!!!\n\n";
				   }
				}		
			}	
		}
		else if(difficultyChoice==3)
		{
			 cout<<"\n You have 5 choices to find the secret number between 1 and 100!";
			int choicesLeft=5;
			int i;
			for(i=1;i<=5;i++)
			{
			    cout<<"\n\n Enter a number:";
				cin>>playerChoice;
				if(playerChoice==secretNum)
				{
					cout<<"Well played!! You won,"<<playerChoice<<"\tis the secret number!!"<<endl;
					cout<<"\t\t\t Thanks for playing....."<<endl;
					cout<<"\t\t\tPlay again to enjoy!!\n\n"<<endl;
					break;					
				}
				else
				{
				   cout<<"Nope,"<<playerChoice<<"\tis not the secret number\n!!"<<endl;
				   if(playerChoice>secretNum)
				   {
				   	 cout<<"Nope,"<<playerChoice<<"\tis greater than the secret number\n!!"<<endl;
				   	 
				   }
				   else
				   {
				   	cout<<"Nope,"<<playerChoice<<"\tis smaller than the secret number\n!!"<<endl;
				   }
				   choicesLeft--;	
				   cout<<"\n Choices left:"<<choicesLeft;
				   if(choicesLeft==0)
				   {
				   	cout<<"You couldn't find the secret number,it was"<<secretNum<<"You lose!!!!\n\n";
				   	cout<<"Play again to WIN!!!!\n\n";
				   }
				}		
			}	
		}
		else if(difficultyChoice==0)
		{
			exit(0);
		}
		else
		{
			cout<<"Wrong choice!!\n Enter valid choice tomplay the game!!{0,1,2,3}"<<endl;
		}
	}
	
	
	return 0;
}

