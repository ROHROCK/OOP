#include<iostream>
#include<stdlib.h>

using namespace std;

class cppArray
{
	int arr[100];
	int size;

public:
	cppArray()
	{
		for (int i = 0; i < 100; ++i)
		{
			arr[i] = 0;
		}
	}
	void range()
	{
		cout<<"The range is: "<<arr[0]<<" and "<<arr[size-1]<<endl;
	}
	void get()
	{
		cout<<"Enter the size of array: "<<endl;
		cin>>size;

		for (int i = 0; i < size; ++i)
		{
			cin>>arr[size];
		}
	}

	void operator=(cppArray c)
	{
		c.size = size;
		for (int i = 0; i < size; ++i)
		{
			c.arr[i] = arr[i];
		}
	}

	void display()
	{
		for (int i = 0; i < size; ++i)
			cout<<arr[i];
	}

	int sizeOfArray()
	{
		return size;
	}
};

int main()
{
	int ch;
	char status;
	cppArray obj1 , obj2;
	do{
		cout<<"****************MENU**************"<<endl;
		cout<<"1.To Enter the data into the array"<<endl;
		cout<<"2.To check the range of array: "<<endl;
		cout<<"3.To assign the array: "<<endl;
		cout<<"4.To display the size of the array"<<endl;
		cout<<"5.Display the array"<<endl;
		cout<<"6.Exit"<<endl;
		cout<<"**********************************"<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj1.get();
			break;

			case 2:
				obj1.range();
			break;

			case 3:
				obj2 = obj1;
				cout<<"Contents of obj1 : "<<endl;
				obj1.display();
				cout<<"Contents of obj2 : "<<endl;
				obj2.display();
			break;
			 case 4:
				cout<<"The size of array is: "<<obj1.sizeOfArray();

			case 5:
				obj1.display();
			break;

			case 6:
				exit(EXIT_SUCCESS);
			break;

			default:
				cout<<"Entered choice is invalid !"<<endl;  
		}
		cout<<"Do you want to continue ? [Y/N]"<<endl;
		cin>>status;
	}while(status == 'y' || status == 'Y');
	return 0;
}