// Pointers, Refs, Copies

#include <iostream>

using namespace std;

int main() {
    // Variable declaration
    int var = 20;
    
    // Pointer declaration and initialization
    int *ptr = &var;
    
    // Reference declaration and initialization
    int &ref = var;
    
    // Displaying variable, pointer, and reference values
    cout << "Value of var: " << var << endl; // Original value
    cout << "Value via ptr: " << *ptr << endl; // Accessing value via pointer
    cout << "Value via ref: " << ref << endl; // Accessing value via reference

    // Modifying the value of var using ptr
    *ptr = 30;
    cout << "\nAfter modifying var using ptr:" << endl;
    cout << "Value of var: " << var << endl;
    cout << "Value via ref: " << ref << endl; // Should also change

    // Modifying the value of var using ref
    ref = 40;
    cout << "\nAfter modifying var using ref:" << endl;
    cout << "Value of var: " << var << endl;
    cout << "Value via ptr: " << *ptr << endl; // Should also change
    
    // Copying
    int copiedVar = var; // Deep Copy (creates a whole new copy)
    cout << "\nAfter copying var to copiedVar:" << endl;
    cout << "Value of copiedVar: " << copiedVar << endl;

    // Modifying var after copying
    var = 50;
    cout << "\nAfter modifying var post-copy:" << endl;
    cout << "Value of var: " << var << endl;
    cout << "Value of copiedVar (unchanged): " << copiedVar << endl; // Remains unchanged since it was a Deep Copy

    return 0;
}
