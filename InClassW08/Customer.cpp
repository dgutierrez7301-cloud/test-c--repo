#include <iostream>
#include <string>
using namespace std;




class Customer
{
private:
    int customerID;
    string Lastname;
    string Firstname;
    double creditLimit;
public:
    Customer()
    {
        customerID = 0;
        Lastname = "Unknown";
        Firstname = "Unknown";
        creditLimit = 0.0;
    }

    void setCustomerID(int id) { customerID = id; }
    void setLastname(string lname)  
    {
        Lastname = lname;
    }
    void setFirstname(string fname) 
     {
        Firstname = fname;
     }

    void setCreditLimit(double limit)
    {
        if (limit < 0.0)
        {
            cout << "Credit limit cannot be negative. Setting to $0.00.\n";
            creditLimit = 0.0;
        }
        else if (limit <= 10000.00)
        {
            creditLimit = limit;
        }
        else
        {
            creditLimit = 10000.00;
        }
    }

    void display()
    {
        cout << "Customer Information:\n";
        cout << "Customer ID: " << customerID << endl;
        cout << "Last Name: " << Lastname << endl;
        cout << "First Name: " << Firstname << endl;
        cout << "Credit Limit: $" << creditLimit << endl;
    }
};

int main()
{
    Customer customer1;
    customer1.setCustomerID(12345);
    customer1.setLastname("Smith");
    customer1.setFirstname("John");
    customer1.setCreditLimit(5000.00);
    customer1.display();

    return 0;
}