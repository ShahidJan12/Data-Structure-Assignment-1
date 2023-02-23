#include<iostream>
using namespace std;
int main()
{
	int Qnumber;
	
	cout<<"enter the Question Number you want to  Check/Run(1-9)  : ";
	cin>>Qnumber;
	switch(Qnumber)
	{
	case 1 :
	{
	cout<<"Program That will display minimum number out of an array of five numbers : "<<endl;
	int arr[5];
	cout<<"enters the five numbers :"<<endl;
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
    int	min=arr[0];
	for(int i=0; i<5; i++)
	{
	
	if(min>arr[i])
	{
	min=arr[i];
		
	}
    }
    cout<<"minimum value is : "<<min;	
			
	break;
    }
	case 2 :
	
	{
	cout<<"Program That will display maximum number out of an array of five numbers : "<<endl;
	int arr[5];
	cout<<"enters the five numbers :"<<endl;
	for(int i=0; i<5; i++)
	{
	cout<<"the element in "<<i+1<<" : ";
	cin>>arr[i];
	}
	for(int i=0; i<10; i++)
	{
	cout<<arr[i]<<"\t";

	
    }
    int	max=arr[0];
	for(int i=0; i<5; i++)
	{
	
	if(max<arr[i])
	{
	max=arr[i];
		
	}
	
	
    }
    cout<<"maximum value is : "<<max;	
	 
    return 0;
	break;
	}
	case 3 :
	{
	cout<<"Program That will display the number repetition out of an array : "<<endl;
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
	cout<<"\n enter the number you want to check for repeatition  : "<<endl;
    cin>>number;
    int count=0;
    for(int i=0; i<5; i++)
    {
	if(number==arr[i])
	{
	count++;
	}
	
    }
    cout<<"The number Repeatition Is :"<<count<<endl;
	
    return 0;
    break;
    }
	case 4:
	{
	cout<<"Program That will Locate  a number's index out of an array : "<<endl;
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
    cout<<"enter the number you want to locate : "<<endl;
    cin>>number;
	for(int i=0; i<5; i++)
	{
	
	if(number==arr[i])
	{
	cout<<"the number is located at index number :"<<i;
		
	}
	
    }
	
	return 0;
	}
	break;
	case 5 :
	{
	cout<<"Program That will display the list of odd numbers out of an array : "<<endl;
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
    cout<<"the list of odd number is :";
     
    for(int i=0; i<size; i++)
    {
    if(arr[i]%2!=0)
    	
	{
		
    cout<<arr[i]<<"\t";
    }
	
	}
	
	return 0;
	break;
	}
	case 6 :
	{
	cout<<"Program That will display the list of even numbers out of an array : "<<endl;
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
	break;
	}
	case 7 :
		{
			cout<<"Program That will display the sum of total numbers out of an array : "<<endl;									
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
	break;
    }
	case 8:
	{
	cout<<"Program That will display the  numbers in reverse order out of an array : "<<endl;	
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
    for(int i=1; i<size; i++)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    cout<<"the array in reverse ordered is as: ";
    
    for( int i=size-1; i>0; i--)
    {
    cout<<arr[i]<<"\t";
  	
	}
    return 0;
	break;
	}
	case 9:
	{
	cout<<"Program That will display the unique  numbers out of an array : "<<endl;				
	int arr[100], size, isUnique;
    int i, j, k;
 
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    for(i=0; i<size; i++)
    {
    isUnique = 1;
 
    for(j=i+1; j<size; j++)
    {
 
 
    if(arr[i]==arr[j])
    {
    for(k=j; k<size-1; k++)
    {
    arr[k] = arr[k+1];
    }
 
    size--;
    j--;
    isUnique = 0;
    }
    }
 
        
    if(isUnique != 1)
    {
    for(j=i; j<size-1; j++)
    {
    arr[j] = arr[j+1];
    }
    size--;
    i--;
    }
    }
    cout<<"All unique elements in the array are: ";
    for(i=0; i<size; i++)
    {
    cout<<arr[i]<<"\t";
    }
    return 0;
						
	break;
	}
	default:
	cout<<"your Question is not in the list : ";	
	}	
		
}
	
