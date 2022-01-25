#ifndef H_PersonType 
/*! \file define.h
    \brief testing defines
    
    This is to test the documentation of defines.
*/
 
/*!
  \def H_PersonType
  Defines PersonType.h
*/
 
/*! 
   \brief Def personType \a x.
*/
#define H_PersonType 
 
#include <string> 
 
using namespace std; 
 
 /* personType class */
 /*! \class personType.h ""
 *  \brief This serves as the base class personType.
 *
 */
class personType 
{ 
public: 
    void print() const; 
   //Function to output the first name and last name 
   //in the form firstName lastName 
 
    void setName(string first, string last); 
   //Function to set firstName and lastName according to 
    //the parameters 
   //Post: firstName = first; lastName = last; 
 
    void getName(string& first, string& last); 
   //Function to return firstName and lastName via the parameters 
   //Post: first = firstName; last = lastName; 
  
   personType(string first, string last); 
   //Constructor with parameters 
   //Set firstName and lastName according to the parameters 
   //Post: firstName = first; lastName = last; 
 
    personType(); 
     //Default constructor; 
     //Intialize firstName and lastName to empty string 
     //Post: firstName = ""; lastName = ""; 
 
private: 
    string firstName; /** <store the first name */
    string lastName;  /** <store the last name */ 
}; 


#endif 