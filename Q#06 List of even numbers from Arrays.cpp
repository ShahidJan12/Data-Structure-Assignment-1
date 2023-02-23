#include<iostream>
using namespace std;
int main()
{
	int arr[100],size;
	cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<size; i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"\n the  total numbers in array: ";
    for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    cout<<"the list of even number is :";
     
    for(int i=0; i<size; i++)
    {
    	if(arr[i]%2==0)
    	
		{
		
    	cout<<arr[i]<<"\t";
        }
	
	}
	
	return 0;
}
