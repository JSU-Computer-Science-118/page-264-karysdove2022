//  KARYS DOVE J00964062
//  chapter4pg264
//
//  DUE NOVEMBER 9, 2022

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;

    cout<< "Enter positive integer between 1 & 1000. n: ";
    cin>> n;
    
    if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31)  {
        cout<< "\n" << n << " is prime. \n";
    }
    else {
        cout<< "\n" << n << " is not prime. \n";
    }
    
    if (n % 2 == 0) {
        cout<<"Divisible by:"<< 2<< " \n";
    }
    
    if (n % 3 == 0) {
        cout<<"Divisible by:"<< 3<< " \n";
    }
    
    if (n % 5 == 0) {
        cout<<"Divisible by:"<< 5<< " \n";
    }
    
    if (n % 7 == 0) {
        cout<<"Divisible by:"<< 7<< " \n";
    }
    
    if (n % 11 == 0) {
        cout<<"Divisible by:"<< 11<< " \n";
    }
    
    if (n % 13 == 0) {
        cout<<"Divisible by:"<< 13<< " \n";
    }
    
    if (n % 17 == 0) {
        cout<<"Divisible by:"<< 17<< " \n";
    }
    
    if (n % 19 == 0) {
        cout<<"Divisible by:"<< 19<< " \n";
    }
    
    if (n % 23 == 0) {
        cout<<"Divisible by:"<< 23<< " \n";
    }
    
    if (n % 29 == 0) {
        cout<<"Divisible by:"<< 29<< " \n";
    }
    
    if (n % 31 == 0) {
        cout<<"Divisible by:"<< 31<< " \n";
    }
    
    return 0;
}
