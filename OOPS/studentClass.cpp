#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string inClass;
    int age;

public:
    Student(int roll, string n, string c, int a) 
        : rollNo(roll), name(n), inClass(c), age(a) {}

    void setName(string n) { name = n; }
    string getName() const { return name; }

    void study() {
        cout << name << " is studying." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};

int main() {
    Student obj(101, "Vivek", "12th", 18);
    obj.study();
    obj.setName("Vivek Kumar");
    cout << "Student Name: " << obj.getName() << endl;
    return 0;
}