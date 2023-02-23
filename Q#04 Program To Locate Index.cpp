#include<iostream>
using namespace std;
int main()
{
	int number,arr[5];
	cout<<"enters the five numbers"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
    }
    cout<<endl;
cout<<"enter the number you want to Check in array : "<<endl;
cin>>number;
	for(int i=0; i<5; i++)
	{
	if(number==arr[i])
	{
		cout<<"the number is located at index number"<<i;
	}
    }
	else
	{
		cout<<"number is not in the list : ";
	
	}	
    }
	return 0;	
};
