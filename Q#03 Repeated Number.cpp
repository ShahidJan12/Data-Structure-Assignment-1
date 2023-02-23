#include<iostream>
using namespace std;
int main()
{
	int number,arr[5];
	cout<<"enters the ten numbers"<<endl;
	for(int i=0; i<5; i++)//   STEP 1(INPUT)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}

	for(int i=0; i<5; i++)//   STEP 2(OUTPUT)
	{
		cout<<arr[i]<<"\t";

	
    }
    
	cout<<"\n enter the number you want to check for repeatition  : "<<endl;
cin>>number;
int count=0;
for(int i=0; i<5; i++)// STEP 3(CONDITION)
{
	if(number==arr[i])
	{
		count++;
	}
	
}
cout<<"The number Repeatition Is :"<<count<<endl;
	
return 0;	
};
