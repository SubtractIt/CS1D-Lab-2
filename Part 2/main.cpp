#include <iostream> 
 
#include "personType.h" 
#include "partTimeEmployee.h" 
 
using namespace std; 

/*!
 *  \author Danny Cowles
 *  \author Adit Mohindra
 *  \date   1/24/22
 */

int main() 
{ 
    personType newPerson; 
    partTimeEmployee newEmployee("John","Smith",7.50,56); 
    partTimeEmployee employee; 
    newEmployee.print(); 
    employee.setNameRateHours("Rachel", "Moore",9.75, 45); 
    employee.print(); 
 
 return 0; 
} 
 