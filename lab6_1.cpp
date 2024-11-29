#include<iostream>
using namespace std;

int main(){
    int number = 1, even = 0, odd = 0;
while(number != 0){
    cout << "Enter an integer: ";
    cin >> number;
    if(number%2 == 0){
        even++;
    }
    if(number%2 == 1){
        odd++;
    }
}
if(number == 0){
    cout << "#Even numbers = " << even-1 << "\n";
    cout << "#Odd numbers = " << odd;
}
    return 0;
}
