#include<iostream>
using namespace std;
class BinarySearch
{
	private:
		int array[100];
		int N;
	
	public:
	BinarySearch(int a[],int n)
	{
		for(int i=0;i<n;i++)
		{
			array[i]=a[i];
		}
		
		N=n;
	 } 
	 
	 int binary(int arr[],int p, int q, int N)
	 {
	 	
	 	if(q>p)
	 	{
		 int mid=(p+q)/2;
		 if(arr[mid]==N)
		 {
		 	cout<<"Element found at place "<<(mid+1)<<endl;
		 	return 1;
		 }
		 
		 else if(arr[mid]>N)
		 {
		 	binary(arr,p,mid-1,N);
		 }

		 else
		 {
		 	binary(arr,mid+1,q,N);
		 }
		}
		
		else
		{
			if(p==q && arr[p]==N)
			{
				cout<<"found at place "<<(p+1)<<endl;
				return 1;
			}
			else
			{
				cout<<"Not found"<<endl;
				return 0;
			}
		}
		
	 }
	 
	 void searchFor(int n)
	 {
	 	int p=0,q=N-1;
	 	binary(array,p,q,n);
	 }
	 
};


int main()
{
	int a[7]={1,2,3,4,5,6,8};
	BinarySearch obj(a,7);
	obj.searchFor(8);
	
}
