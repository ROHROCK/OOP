#include<deque>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()

{
	deque<int> dq;
	deque<int>::iterator p;
	char cc;
	
	int val,ch;
	do
	{	
		cout<<"****** MENU ******";
		cout<<"\n1.Enter element at front\n2.Enter element at rear\n3.Delete element at front\n4.Delete element at rear\n5.Display front element\n6.Display rear element\n7.Display element of deque\n";
	
		cout<<"Enter choice : ";
		cin>>ch;

		switch(ch)
		{
		case 1: 
		cout<<"Enter the element to be inserted :";
		cin>>val;
		dq.push_front(val);

		cout<<"Element inserted at front is  :"<<dq.front();
		break;
		
		case 2:
		cout<<"Enter the element to be inserted :";
		cin>>val;
		dq.push_back(val);

		cout<<"Element inserted at end is  :"<<dq.back();
		break;
		

		case 3:
		cout<<"Enter the element to be deleted from front: "<<dq.front();
		dq.pop_front();
		break;
		
		case 4:
		cout<<"Enter the element to be deleted from rear: "<<dq.back();
		dq.pop_back();
		break;

		case 5:
		cout<<"Element at front are  :"<<dq.front();
		break;
		
		case 6:
		cout<<"Element at rear are  :"<<dq.back();
		break;

		case 7:
		if(dq.empty()==1)
		cout<<"\nDEQUE IS EMPTY .....";
		else
		{
		cout<<"\n\n Displying the element of DEQUE......\n";
		for(p=dq.begin();p<dq.end();p++) //custom loop to use the iterator to traverse the DQ using (P)
		cout<<" "<<*p;
		
		}
		break;
		}
		cout<<"\n\nContinue to menu: ";
		cin>>cc;
		}while(cc='y');
		
		
	}

