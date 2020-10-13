#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string arr[14][7];
	int i,j;
	char pause;
	string ticket;
	
	cout<<"three ticket types are available first,buisness and economy class";
	cout<<"\nFIRST CLASS:- Row 1-2";
	cout<<"\nBUISNESS CLASS:- Row 3-8";
	cout<<"\nECONOMY CLASS:- Row 9-13";
	cout<<"\nto stop program press p otherwise press anny character ";
	for(i=1;i<14;i++)
	{
		for(j=1;j<7;j++)
		{
			arr[i][j]="*";
		}
	}
	cout<<endl;
	arr[0][1]="A";arr[0][2]="B";arr[0][3]="C";arr[0][4]="D";arr[0][5]="E";arr[0][6]="F";arr[0][0]=" ";
	arr[1][0]="Row 1";arr[2][0]="Row 2";arr[3][0]="Row 3";arr[4][0]="Row 4";arr[5][0]="Row 5";arr[6][0]="Row 6";
	arr[7][0]="Row 7";arr[8][0]="Row 8";arr[9][0]="Row 9";arr[10][0]="Row 10";arr[11][0]="Row 11";arr[12][0]="Row 12";
	arr[13][0]="Row 13";
	
		
	while(pause != 'p')
	{
		cout<<"\ninter your ticket type :";
		cin>>ticket;
//		cout<<"type your desired seat :";
//		cout<<"\nrow number :";
//		cin>>i;
//		cout<<"column number :";
//		cin>>j;
		if(ticket=="first")
		{
			cout<<"type your desired seat :";
			cout<<"\nrow number :";
			cin>>i;
			cout<<"column number :";
			cin>>j;
			if((i>0)&&(i<3)&&(j>0)&&(j<7))
			{ 
				if(arr[i][j]=="X")
				{
					cout<<"this seat is already booked,ask another seat and ticket type"<<endl;
				}
				else
				{
					arr[i][j]="X";
					cout<<"your seat is confirmed";	
					cout<<"\nif costomer is no more press p to stop confirming seats otherwise press any character : ";
					cin>>pause;
				}
			}
			else
			cout<<"\nyour selected seat is not in first class,select in row 1-2";	
		}
		else if(ticket=="buisness")
		{
			cout<<"type your desired seat :";
			cout<<"\nrow number :";
			cin>>i;
			cout<<"column number :";
			cin>>j;
			if((i>2)&&(i<9)&&(j>0)&&(j<7))
			{
				if(arr[i][j]=="X")
				{
					cout<<"this seat is already booked,ask another seat and ticket type"<<endl;
				}
				else
				{
					arr[i][j]="X";
					cout<<"your seat is confirmed";	
					cout<<"\nif costomer is no more press p to stop confirming seats otherwise press any character : ";
					cin>>pause;
				}
			}
			else
			cout<<"\nyour selected seat is not in buisness class,select in row 3-8";
		}	
		else if(ticket=="economy")
		{
			cout<<"type your desired seat :";
			cout<<"\nrow number :";
			cin>>i;
			cout<<"column number :";
			cin>>j;
			if((i>8)&&(i<14)&&(j>0)&&(j<7))
			{
				if(arr[i][j]=="X")
				{
					cout<<"this seat is already booked,ask another seat ticket type"<<endl;
					
				}
				else
				{
					arr[i][j]="X";
					cout<<"your seat is confirmed";	
					cout<<"\nif costomer is no more press p to stop confirming seats otherwise press any character : ";
					cin>>pause;
				}
			}
			else
			cout<<"\nyour selected seat is not in economy class,select in row 8-13";
		}
		else
		cout<<"you ask for wrong ticket type";
	}
	
	for(i=0;i<14;i++)
	{
		for(j=0;j<7;j++)
		{
			cout<<"\t";
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;

	return 0;
}
