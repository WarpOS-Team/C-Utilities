#include <iostream>
#include <cstdlib>

    using namespace std;

    int main() {

        int number = 0;
        
        for( ; ; ) {
            if(getchar()) {
            number++;
            std::cout << number << endl;  
            }
        }
    }