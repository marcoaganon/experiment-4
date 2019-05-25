#include<iostream>
#include<conio.h>

using namespace std;
main()
{
	int arraySize;
	cout<<"Bubble Sorting..."<<endl;
	cout<<"Enter array size: ";
	cin>>arraySize;
	cout<<"Enter the "<<arraySize<<" elements"<<endl;
	int elements[arraySize];
	
	for(int x = 0; x < arraySize; x++)
	{
		cin>>elements[x];
	}

	cout<<"Your data: ";
	for(int x = 0; x < arraySize; x++)
	{
		cout<<elements[x]<<", ";
	}
	cout<<endl;
	
	int numHolder;
	for(int i = 0; i < arraySize; i++)
	{
		for(int j = i + 1; j < arraySize; j++)
		{
			if(elements[i] > elements[j])
			{
				numHolder = elements[i];
				elements[i] = elements[j];
				elements[j] = numHolder;
			}
		}
	}

	cout<<"After using bubble sort method"<<endl;
	cout<<"Sorted data: ";
	for(int x = 0; x < arraySize; x++){
		cout<<elements[x]<<", ";
	}
}
