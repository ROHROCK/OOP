#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

template<class T> 
class vector
{
	int size;
public:
	T *v; //storing the address of the first array index 
	vector(int m);
	void create(T *a);
	void modify(int k);
	void multiply(int k);
	void display();
};

//constructor of vector to create a vector of dynamic size
template<class T>
vector<T> :: vector(int m)
{
	size = m;
	v = new T[m];
	for (int i = 0; i < size; ++i)
		v[i] = 0;

}

//to create a vector 
template<class T>
void vector<T>::create(T *a)
{
	for (int i = 0; i < size; ++i)
	{
		cin>>a[i]; //accept the value and store it in a[i] then ... 
		v[i] = a[i]; // pass the value to vector
	}
}
template<class T>
void vector<T>::modify(int elementTobeModified) //index value
{
	int f = 0;
	//v[k]+= 10;
	for (int i = 0; i < size; ++i)
	{
		if (v[i] == elementTobeModified)
		{
			f = 1;
			v[i] += 10; //elemennt found and modified !
			break;
		}
		
	}

	if(f == 0)
		cout<<"The element is not found in the vector !"<<endl;
}

template<class T>
void vector<T>::multiply(int k)
{
	for (int i = 0; i < size; ++i)
	{
		/* code */
		v[i] *= k;
	}
}

template<class T>
void vector<T>::display()
{
	cout<<"\n(";
	for (int i = 0; i < size; ++i)
	{
		/* code */
		cout<<v[i]<<",";
	}
	cout<<")"<<endl;
}

int main()
{
	 vector <float> v1(5); v1.display();
	 vector<int> v2(5); 
	 int i,s,j;

	 cout<<"Enter the float element vector"<<endl; 
	 v1.create(v1.v);
	 cout<<"Enter the integer element vector"<<endl;
	 v2.create(v2.v);

	 cout<<"Enter the element u want to modify in float vector: "<<endl;
	 cin>>i;
	 v1.modify(i);
	 v1.display();

	 cout<<"Enter the element you want to modify in integer vector: "<<endl;
	 cin>>j;
	 v2.modify(j);
	 v2.display();

	 cout<<"Enter the scalar value for both the vectors: "<<endl;
	 cin>>s;

	 v1.multiply(s);
	 v2.multiply(s);

	 cout<<"The new float vector after the multiplication: ";
	 v1.display();
	 cout<<"The new integer vector after the multiplication: ";
	 v2.display();

	 return 0;
}
