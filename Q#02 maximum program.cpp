#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"enters the five numbers :"<<endl;
	for(int i=0; i<5; i++)//   STEP 1(INPUT)
	{
		cout<<"the element in "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0; i<10; i++)//   STEP 2(OUTPUT)
	{
		cout<<arr[i]<<"\t";

	
    }
int	max=arr[0];
	for(int i=0; i<5; i++)// STEP 3(CONDITION)
	{
	
	if(max<arr[i])
	{
		max=arr[i];
		
	}
	
	
    }
    cout<<"maximum value is : "<<max;	
	 
    return 0;	
};
