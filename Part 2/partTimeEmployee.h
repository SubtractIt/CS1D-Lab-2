#include "personType.h"

/*! 
 *  \brief This is a partTimeEmployee class.
 *  \author Danny Cowles
 *  \author Adit Mohindra
 *  \date   1/24/22
 */
class partTimeEmployee: public personType
{
public:
    /**
     * @brief Output the first name, last name, and the wages in the form
     * 
     */
    void print();
    //Function to output the first name, last name, and
    //the wages in the form:
    //firstName lastName wages are $$$$.$$

    /**
     * @brief calculate and return the wages
     * 
     * @return double 
     */
    double calculatePay();
    //Function to calculate and return the wages

    /**
     * @brief Set the first name, last name, payRate, and hoursWorked 
     * 
     * @param first 
     * @param last 
     * @param rate 
     * @param hours 
     */
    void setNameRateHours(string first, string last,
    double rate, double hours);
    //Function to set the first name, last name, payRate,
    //and hoursWorked according to the parameters.
    //The parameters first and last are passed to the
    //base class. payRate = pay; hoursWorked = hours;

    /**
     * @brief Construct a new part Time Employee object (alternate constructor)
     * 
     * @param first 
     * @param last 
     * @param rate 
     * @param hours 
     */
    partTimeEmployee(string first, string last,
    double rate, double hours);
    //Constructor with parameters
    //Set the first name, last name, payRate, and
    //hoursWorked according to the parameters.
    //Parameters first and last are passed to the
    //base class. payRate = pay; hoursWorked = hours;

    /**
     * @brief Construct a new part Time Employee object (default constructor)
     * 
     */
    partTimeEmployee();
    //Default constructor
    //Set the first name, last name, payRate, and
    //hoursWorked to the default values.
    //The first name and last name are initialized to an empty
    //string by the default constructor of the base class.
    //payRate = 0; hoursWorked = 0;

    private:
    double payRate;    /**< double stores the pay rate */
    double hoursWorked; /**< double store the hours worked */
};
