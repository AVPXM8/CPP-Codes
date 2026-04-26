#include<iostream>
using namespace std;

class Student{
	// private data members 
	public:
	int rollNo;
	string name;
	string inClass;
	int age;
	int nos;
	// attribuite and beahviour of the class
	void study(){
		cout<<" Studying "<<endl;
		
	}
	void sleep(){
		cout<< " the student is sleeping "<<endl;
	}
	
};
int main(){
	Student obj;
	obj.study();
	obj.name="vivek ";
	cout<<obj.name;
}