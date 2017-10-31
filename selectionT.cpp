//A program to implement selection sort using template
#include<iostream>
#define MAX 20
using namespace std;
//Para passed is the array 
template <class T>
void sort(T arr[], int n)
{
	int i=0,j,min = 0,temp=0;
	
	
	//considering the index value 
	for(i = 0 ; i < n ; i++)
	{
		min = i;	
		for (int j = i+1; j < n; j++)
		{
			/* code */
			if(arr[min] > arr[j])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	cout<<"The sorted array is: "<<endl;
	//print
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int arrInt[MAX];
	float arrF[MAX];
	int ch,n=0;
	char status;
	do{
		cout<<"***MENU***"<<endl;
		cout<<"1.Sorting a Interger array: "<<endl;
		cout<<"2.Sorting a Float array: "<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Enter you choice:  "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the size of array: "<<endl;
				cin>>n;
				for (int i = 0; i < n; ++i)
				{
					/* code */
					cin>>arrInt[i];
				}
				sort<int>(arrInt,n);
			break;

			case 2:
				cout<<"Enter the size of array: "<<endl;
				cin>>n;
				for (int i = 0; i < n; ++i)
				{
					/* code */
					cin>>arrF[i];
				}
				cout<<"TEST: "<<endl;
				for (int i = 0; i < n; ++i)
				{
					/* code */
					cout<<arrF[i]<<" ";
				}
				sort<float>(arrF,n);
			break;

			default:
				cout<<"wrong choice !";
		}
		cout<<"do you want to continue ?[Y/N]"<<endl;
		cin>>status;
	}while(status == 'y' || status == 'Y');
	return 0;
}