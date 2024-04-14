//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <cmath> 
bool check_prime(int num) {
    if (num <= 1) return false;
    if (num % 2 == 0) return num == 2; 
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    std::cout << "Enter an integer to see its prime factors: ";
    int num;
    std::cin >> num;
    for (int i = 2; i <= num; ++i) { 
        if (num % i == 0 && check_prime(i)) {
            std::cout << i << "\t";
        }
    }
    return 0; 
}

