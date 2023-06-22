//Constructors are used to initialize the data members of  new objects.
// They have same names as class and they provide data for objects
//In short, Consructors are special members for classes which are invoked at the time of object creation.
#include <iostream>
using namespace std;

class praveen
{
    int ID;
    int salary;

public:
    praveen(int id, char sal) // Declaring a parameterized constructor.
    {
        ID = id;
        salary = sal;
    }
    /*praveen() //Declaration of a default constructor.
    {
        ID = 1;
        salary = 50;
    }*/
    praveen(praveen &obj)
    {
        salary=obj.salary;
    }
    int display()
    {
        cout << "User status: \n ID:" << ID << "\nSalary:" << salary << endl;
    }
};

int main()
{
    // praveen a;//Initializing a constructor (not parameterized)
    praveen a(1, 5);//Parameterized constructor
    praveen b(a);
    a.display();
    b.display();
    //tho ID will throw garbage value because there's no default constructor invoked nor there's any value provided (GIGO)
    return 0;
}
