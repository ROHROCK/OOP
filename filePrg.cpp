#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int roll;
	char name[10];
	float next;

	cout<<"File Handling";
	ofstream fout("\\root\Desktop\Programs\Files");
	cout<<"Enter roll number: "<<endl;
	cin>>roll;
	fout<<roll<<" ";
	cout<<"Enter Name: ";
	cin>>name;
	fout<<name<<" ";
	fout.close();

	ifstream fin("\\root\Desktop\Programs\Files");
	fin>>roll;
	fin>>name;

	cout<<"***This is the output from the file ! : "<<endl;
	cout<<roll;
	cout<<name;

	return 0;
}
