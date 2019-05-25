#include<iostream>
#include<conio.h>

using namespace std;

void additionOperator()
{
	int N1;
	int N2;
	cout<<"Enter first number: ";
	cin>>N1;
	cout<<"Enter second number: ";
	cin>>N2;
	cout<<"Result: "<<N1+N2<<endl;
}

void subtractionOperator()
{
	
	int N1;
	int N2;
	
	cout<<"Enter first number: ";
	cin>>N1;
	cout<<"Enter second number: ";
	cin>>N2;
	cout<<"Result: "<<N1-N2<<endl;
}

void multiplicationOperator()
{

	int N1;
	int N2;

	cout<<"Enter first number: ";
	cin>>N1;
	cout<<"Enter second number: ";
	cin>>N2;
	cout<<"Result: "<<N1*N2<<endl;
}

void divisionOperator()
{
	
	double N1;
	double N2;
	
	cout<<"Enter first number: ";
	cin>>N1;
	cout<<"Enter second number: ";
	cin>>N2;
	cout<<"Result: "<<N1/N2<<endl;
}

void modulusOperator()
{

	int N1;
	int N2;
	
	cout<<"Enter first number: ";
	cin>>N1;
	cout<<"Enter second number: ";
	cin>>N2;
	cout<<"Result: "<<N1%N2<<endl;
}

main()
{
	
	int choice;
	
	menu:
	cout<<"CALCULATOR MENU: "<<endl;
	cout<<"1.) Add"<<endl;
	cout<<"2.) Subtract"<<endl;
	cout<<"3.) Multiply"<<endl;
	cout<<"4.) Divide"<<endl;
	cout<<"5.) Modulus"<<endl;
	cout<<endl;
	cout<<"Choose operation: ";
	cin>>choice;
	
	repeat:
	switch(choice)
	{
		case 1:
			additionOperator();
			break;
		case 2:
			subtractionOperator();
			break;
		case 3:
			multiplicationOperator();
			break;
		case 4:
			divisionOperator();
			break;
		case 5:
			modulusOperator();
			break;
		default:
			cout<<"Enter a valid operation."<<endl;	
	}
	
	char yn;
	cout<<"Do you wish to continue with the Operation? (Y/N): ";
	cin>>yn;
	cout<<endl;
	if(yn == 'Y' || yn == 'y')
	{
		goto repeat;
	}
	else
		goto menu;
}


