#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,sum=0;//sum ko zero ke equal rakha ha garbage value say bachne keliye
	cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<size; i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"\n the  numbers in array: ";
    for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    for(int i=0; i<size; i++)
    {
    	sum=sum+arr[i];
    	
	}
	cout<<"the sum of given numbers in Array is : "<<sum;
	return 0;
}
