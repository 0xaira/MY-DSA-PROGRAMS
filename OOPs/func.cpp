#include<iostream>
using namespace std;
#include<bits/stdc++.h>
// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }

class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}