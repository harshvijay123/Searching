#include<iostream>
using namespace std;


int linearSearch(int array[],int n,int N)
{
	for(int i=0;i<n;i++)
	{
		if(array[i]==N)
		{
			return i; 
		}
	}
	
	return -1;
}
int main()
{
	int arr[5]={1,6,7,11,5};
	int N=11;
	int i=linearSearch(arr,5,N);
	if(i==-1)
	{
		cout<<"Not found"<<endl;
	}
	
	else
	{
	    cout<<"found at index "<<i<<endl;
	}
	
	return 1;
}
