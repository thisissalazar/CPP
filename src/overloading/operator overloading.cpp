    /*Synax for overloading

    class className {
    ... .. ...
    public
       returnType operator symbol (arguments) {
           ... .. ...
       } 
    ... .. ...

    Here,
};
    'returnType' is the return type of the function.
    'operator' is a keyword.
    'symbol' is the operator we want to overload. Like: +, <, -, ++, etc.
    'arguments' is the arguments passed to the function.

To overload an operator a special function is used called 'operator'    
*/    
// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}
