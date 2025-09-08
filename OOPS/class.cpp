#include<iostream>
using namespace std;
class Car{
 public:
    string name;
    string model;
    int manufacturing_year;
private:
    float price;



};

int main(){
    Car c1;
    cout<<"Enter the name of the car  followed by model and manufacturing year & price"<<endl;
    cin>>c1.name;
    cin>>c1.model;
    cin>>c1.manufacturing_year;
    
    cout<<"The car "<<c1.name<<" has model no "<<c1.model<< " manufactured in "<<c1.manufacturing_year<<"having the price "<<"nhi batana tha to private kar diya"<<endl;

    return 0;
}