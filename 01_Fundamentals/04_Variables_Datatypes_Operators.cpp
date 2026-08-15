/* VARIABLES IN C++

Variables are containers used to store values/data.

Common Data Types:
    1. int
    2. float
    3. char
    4. double
    5. bool

*/

# include <iostream>
using namespace std;
int main() {

    // =========================
    // INTEGER (int)
    // =========================

    int a;
    cout << "Enter an integer number: ";
    cin >> a;
    cout << "\nThe value of a is: " << a << endl;
    cout << "Size of a: " << sizeof(a) << " bytes" << endl; // sizeof() tells the memory occupied by the variable in bytes


    // =========================
    // CHARACTER (char)
    // =========================

    char b;
    cout << "\nEnter a character: ";
    cin >> b;
    cout << "\nThe character is: " << b << endl;


    // =========================
    // TYPE CASTING
    // =========================

    cout << "ASCII value of " <<b<<" is "<<(int)b << endl;    //American Standard Code for Information Interchange
     
    /*  ASCII value of A-Z is  65-90
        ASCII value of a-z is  97-122
        
    */
   


    return 0;
}