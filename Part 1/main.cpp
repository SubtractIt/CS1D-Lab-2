// Danny Cowles and Adit Mohindra
// Description: Hello World in C++
//============================================================
#include <iostream>
#include <string>
#include "hello1function.cpp"
#include "hello2function.cpp"

using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
    
    string name1="your name1";
    hello1Function(name1);
    string name2="your name2";
    hello2Function(name2);

    return 0;
}
