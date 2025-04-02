#include <iostream>
using namespace std;

class Demo {
    int num;
public:
    Demo() {  // Constructor
        num = 10;
        cout << "Constructor called, num = " << num << endl;
    }
};

int main() {
    Demo obj;
    return 0;
}
