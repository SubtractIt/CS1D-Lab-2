#ifndef H_PersonType 
#define H_PersonType 
 
#include <string> 
 
using namespace std; 
/*! 
 *  \brief This serves as the base class personType.
 *  \author Danny Cowles
 *  \author Adit Mohindra
 *  \date   1/24/22
 */
class personType 
{ 
public: 
   /**
    * @brief Output the name of the person
    * 
    */
    void print() const; 
   //Function to output the first name and last name 
   //in the form firstName lastName 
 
    /**
     * @brief Set the Name object
     * 
     * @param first 
     * @param last 
     */
    void setName(string first, string last); 
   //Function to set firstName and lastName according to 
    //the parameters 
   //Post: firstName = first; lastName = last; 
 
    /**
     * @brief Get the Name object
     * 
     * @param first 
     * @param last 
     */
    void getName(string& first, string& last); 
   //Function to return firstName and lastName via the parameters 
   //Post: first = firstName; last = lastName; 
  
  /**
   * @brief Construct a new person Type object
   * 
   * @param first 
   * @param last 
   */
   personType(string first, string last); 
   //Constructor with parameters 
   //Set firstName and lastName according to the parameters 
   //Post: firstName = first; lastName = last; 
 
   /**
    * @brief Construct a new person Type object
    * 
    */
    personType(); 
     //Default constructor; 
     //Intialize firstName and lastName to empty string 
     //Post: firstName = ""; lastName = ""; 
 
private: 
    
    string firstName; /**<stores the first name of a person. */
    string lastName;  /**<stores the last name of a person. */ 
}; 
#endif 