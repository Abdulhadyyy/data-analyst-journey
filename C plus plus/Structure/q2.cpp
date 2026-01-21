#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int employeeID;
    string employeeName;
};

Employee createEmployee() {
    Employee e;
    
    cout <<"Enter Employee ID: ";
    cin >> e.employeeID;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.employeeName);

    return e;
}

int main() {
    Employee emp;
    
    emp = createEmployee();

    cout <<"\n--- Employee Details ---\n";
    cout <<"ID: " << emp.employeeID << endl;
    cout <<"Name: " << emp.employeeName << endl;
    return 0;
}