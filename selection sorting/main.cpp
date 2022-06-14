#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int number;
	int index;
	cout<<"quanti numeri vuoi: ";
	cin>>number;
	cout<<endl;
	int arr[number];
	for(int x=0;x<number;x++)
	{
		cout<<"write the "<<x+1<<" number: ";
		cin>>arr[x];
	}
	
	for(int i=0;i<number-1;i++)
	{
		int min=arr[i];
		for(int c=i+1;c<number;c++)
		{

			if(arr[c]<min)
			{
				min=arr[c];
				index=c;		
			}
			
		}
		
		int num= arr[i];
		arr[i]=arr[index];
		arr[index]=num;		
	}
	
	for(int p=0;p<number;p++)
	{
		cout<<arr[p]<<"  ";
	}
	return 0;
}
