#include <iostream> 
#include <string> 
using namespace std;

unsigned int SimpleHash(const string& input){
    unsigned int hash = 0;
    for (char c : input){
        hash += static_cast<unsigned int>(c);
    }
    return hash;
}

int main(){
    string input = "Programar es algo cool";
    unsigned int hashValue = SimpleHash(input);
    cout << "datos de entrada: " << input << endl; 
    cout << "valor hash: " << hashValue << endl; 

    return 0;
}