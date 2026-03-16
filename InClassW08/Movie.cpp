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
    void setLastname(const string& last) { Lastname = last; }
    void setFirstname(const string& first) { Firstname = first; }
    void setCreditLimit(double limit) { creditLimit = limit; }

    void display() const
    {
        cout << "Customer Information:/n";
        cout << "Customer ID: " << customerID << endl;
        cout << "Last Name: " << Lastname << endl;
        cout << "First Name: " << Firstname << endl;
        cout << "Credit Limit: $" << creditLimit << endl;
    }
};

class Movie 


{

private:
        string title;
        int year;
        string director;
public:
   Movie()
   {
        title = "Unknown";
        year = 0;
        director = "Unknown";

    }


    void display() const
    {
        cout << "Movie Information:/n";
        cout << "Title: " << title << endl;
        cout << "Year: " << year << endl;
        cout << "Director: " << director << endl;
    }
    void setTitle(const string& t) { title = t; }
    void setYear(int y) { year = y; }
    void setDirector(const string& d) { director = d; }

};

int main ()
{
    Customer customer1;
    customer1.setCustomerID(12345);
    customer1.setLastname("Smith");         
    customer1.setFirstname("John");
    customer1.setCreditLimit(5000.00);
    customer1.display();




    Movie myFavoriteMovie;
    
    myFavoriteMovie.setTitle("Inception");
    myFavoriteMovie.setYear(2010);
    myFavoriteMovie.setDirector("Christopher Nolan");
    myFavoriteMovie.display();


    return 0;
}

