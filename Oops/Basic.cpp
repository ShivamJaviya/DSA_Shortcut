#include <bits/stdc++.h>
using namespace std;

class person {
    int age;
    string name;

public:

    static int weight; // Corrected the typo from wigth to weight

    person() {
        cout << "Default Constructor" << endl;
    }

    person(int age, string name) {
        this->age = age;
        this->name = name;
        cout << "Parameterized Constructor" << endl;
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }

    // Copy constructor
    person(const person &p) {
        age = p.age;
        name = p.name;
        cout << "Copy Constructor" << endl;
    }

    void setage(int age) {
        this->age = age;
    }

    void setname(string namee) {
        this->name = namee;
    }

    int getage() {
        return age;
    }

    string getname() {
        return name;
    }

    ~person() {
        cout << "Destructor" << endl;
    }
};

// Initialization of the static member
int person::weight = 60;

int main() {
    person p1;
    p1.setage(15);
    p1.setname("Shivam");

    cout << p1.getage() << endl;
    cout << p1.getname() << endl;

    person* p2 = new person;
    p2->setage(30);
    p2->setname("Boki");
    cout << p2->getage() << endl;
    cout << p2->getname() << endl;

    person* p3 = new person;

    // Corrected initialization
    person p4(21, "JayantiBhai");

    // Using the copy constructor
    person p5(p4);
    cout << p5.getage() << " " << p5.getname() << endl;

    // Accessing the static member correctly
    cout<<p1.weight<<endl;

    // Cleanup dynamically allocated memory
    delete p2;
    delete p3;

    return 0;
}
