#include <bits/stdc++.h>
using namespace std;

class human {
private:
    int age;

protected:
    // Protected members (if any) can be added here
    int height;

public:
    
    int weight;
    string name;
};

class student : protected human {
protected:
    int rollnumber;

public:
    void setheight(int height) {
        this->height = height;
    }

    void getheight() {
        cout << height << endl;
    }
};

int main() {
    human h1;
    student s1;
    s1.setheight(180); // Set height to 180
    s1.getheight();    // Get and print the height'
    

    return 0;
}
