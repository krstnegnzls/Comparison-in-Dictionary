#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    
    cout<<"enter a word: ";
    cin>>a;
    
    if (a=="abacus"){
        cout<<"invented by a chinese thousands of years ago.";
    } else if (a=="napier"){
        cout<<"invented by john napier.";
    } else if (a=="pascaline"){
        cout<<"invented by blaise pascal.";
    } else if (a=="leibniz wheel"){
        cout<<"invented by leibniz using a flutted drum.";
    } else if (a=="analytical engine"){
        cout<<"invented by charles babbage.";
    } else {
        cout<<"no word found.";
    }
    return 0;
}