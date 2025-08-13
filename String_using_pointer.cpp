// Name: Arman Majhi
// PRN: 24070123022
//Batch: EnTc A1
//Experiment: 9D

#include <iostream>
using namespace std;

int main() {
    char str[] = "Hi! How are you";
    char *pStr = str;
    
    while(*pStr != '\0'){
        cout << *pStr;
        pStr++;
    }

    return 0;

} 

/*
OUTPUT -->

Hi! How are you

=== Code Execution Successful ===
*/
