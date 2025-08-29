#include <iostream> 
using namespace std;

// Copy of x
void passByValue(int x)
{
    x = 10;
}

// Direct reference to x
void passByReference(int& x)
{
    x = 12;
}

// Pointer to x (passed in as &x)
void passByPointer(int* x)
{
    *x = 1924;
}

int main()
{
    cout << "Too bad that didn't kill me." << endl;
    cout << "Well, anyway first we are going to talk about REFERENCE vs. VALUE: " << endl;

    // Pass by Value
    cout << "Pass by Value should not show a modified value, so expect 666: " << endl;
    int x = 666;
    passByValue(x);
    cout << "Well the answer is " << x << endl;

    // Pass by Reference
    cout << "Pass by Reference should modify the value, so expect 12: " << endl;
    passByReference(x);
    cout << "Well the answer is " << x << endl;

    // Pass by Pointer
    cout << "Pass by Pointer should also modify the value, so expect 1924: " << endl;
    // In this context, & signifies passing the actual address of x, i.e. a pointer to x
    passByPointer(&x);
    cout << "Well the answer is " << x << endl;

    cout << "When I go will my loved ones miss me?" << endl;
    cout << "Well the answer is NO!" << endl;

    return 0;
}