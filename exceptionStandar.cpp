#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    cout << "Awal Program" << endl;
    try
    {
        
    }
    catch(exception& e)
    {
        cout << e.what() << endl;
    }
    
};