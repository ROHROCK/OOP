//A program to implement operator overloading for complex number
#include<iostream>
#include<stdlib.h>

using namespace std;

class complex{
	int real , imaginary;
public:
	complex()
	{
		real = 0;
		imaginary = 0;
	}
	complex operator+(complex x)
	{
		complex result;
		result.real = x.real + real;
		result.imaginary = x.imaginary + imaginary;
		return result;
	}
	complex operator*(complex x)
	{
		//code to multiply the complex numbers
		complex result;
		result.real = (real*x.real)-(real*x.imaginary);
		result.imaginary = (imaginary*x.real)+(imaginary*x.imaginary);
		return result;
	}

	friend istream& operator>>(istream& input , complex &c)
	{
		cout<<"Enter the real number: "<<endl;
		input>>c.real;
		cout<<"Enter the imaginary number: "<<endl;
		input>>c.imaginary;
		return input;
	}

	friend ostream& operator<<(ostream &output , complex &c)
	{
		output<<c.real<<"+";
		output<<c.imaginary<<"i"<<endl;
		return output; 
	}
};

int main()
{
	complex num1 , num2,result;
	int ch ;
	char status;
	do{
		cout<<"***MENU***"<<endl;
		cout<<"1.To accept the two complex numbers"<<endl;
		cout<<"2.To display the entered complex numbers"<<endl;
		cout<<"3.To add the complex numbers"<<endl;
		cout<<"4.To multiply the complex numbers"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"**********"<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cin>>num1;
				cin>>num2;
			break;

			case 2:
				cout<<num1;
				cout<<num2;
			break;

			case 3:
				result = num1+num2;
				cout<<result;
			break;

			case 4:
				result = num1*num2;
				cout<<result;
			break;

			case 5:
				exit(EXIT_SUCCESS);
			break;
		}
		cout<<"Do you want to continue ? (Y/N)"<<endl;
		cin>>status;
	}while(status == 'y' || status == 'Y');
	return 0;
}