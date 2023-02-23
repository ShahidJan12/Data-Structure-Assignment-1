#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"enters the five numbers :"<<endl;
	for(int i=0; i<5; i++)//   STEP 1(INPUT)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)//   STEP 2(OUTPUT)
	{
		cout<<arr[i]<<"\t";

	
    }
    cout<<endl;
int	min=arr[0];
	for(int i=0; i<5; i++)// STEP 3(CONDITION)
	{
	
	if(min>arr[i])
	{
		min=arr[i];
		
	}
}
    cout<<"minimum value is : "<<min;	
	
return 0;	
};
