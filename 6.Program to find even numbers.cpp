//Write a program to find even numbers in an array list...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nEven numbers are : "<<endl;	
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)	
		{
		cout<<arr[i]<<"\t";
	}
	}
	return 0;	
}