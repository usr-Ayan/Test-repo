// write hello
#include <iostream>
using namespace std;

int doSomething() {
    return 42;
}
int doSomethingElse() {
    return 24;
}

int main() {
    cout << "Hello, World!" << endl;
    doSomething();
    doSomethingElse();
    return 0;
}