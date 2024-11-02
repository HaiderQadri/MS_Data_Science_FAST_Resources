# include<iostream>
using namespace std;

class Employee {
    private:
        int id;
        int salary;

    public:
        // default constructor 
        Employee() {
            id = 0;
            salary = 0; 
        }

        // constructor
        Employee(int id, int salary) {
            this -> id = id;
            this -> salary = salary;
        } 

        // setter member functions
        void setId(int id){
            this -> id = id;
        }

        void setSalary(int salary) {
            this -> salary = salary;
        }

        // getter member functios
        int getID() const {
            return id;
        }

        int getSalary() const {
            return salary;
        }

        // overloading plus(+) operator as a member function
        Employee operator+ (const Employee &other) const {
            Employee result;
            result.id = this -> id;
            result.salary = this -> salary + other.salary;
            return result;
        }
};

// main functions
    int main() {

    Employee e1(1, 1000);
    Employee e2(2, 2000);
    Employee e3 = e1 + e2;
    
    cout << e3.getID() << endl;
    cout << e3.getSalary() << endl;

    return 0;
}