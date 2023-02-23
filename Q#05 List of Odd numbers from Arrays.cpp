#include<iostream>
using namespace std;
int main()
{
	int arr[100],size;
	cout<<"Enter size of array: ";
    cin>>size;//size odf array

    cout<<"Enter elements in array: "<<endl;//input
    for(int i=0; i<size; i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"\n the  total numbers in array: ";
    for(int i=0; i<size; i++)//output
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    cout<<"the list of even number is :";
     
    for(int i=0; i<size; i++)//same
    {
    	if(arr[i]%2!=0)
    	
		{
		
    	cout<<arr[i]<<"\t";
        }
	
	}
	
	return 0;
}
