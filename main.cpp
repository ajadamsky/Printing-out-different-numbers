#include <iostream>
using namespace std;


int main() {
    int i;
    int reverse = 0;

    for (i = 1; i < 11; i++) {
        std::cout << i << " "; // printing out first 10 numbers
    }

    cout << endl;

    for (i = 1; i < 21; i++)

        if (i % 2 == 0) {
            std::cout << i << " "; // printing out even numbers from 1 to 20
        }

    cout << endl;

    for (i = 1; i < 21; i++)

        if (i % 2 == 1) {
            std::cout << i << " "; // printing out odd numbers from 1 to 20
        }

    cout << endl;

    for (i = 1; i < 51; i++)

        if (i % 3 == 1) {
            std::cout << i << " "; // printing out every 3rd number from 1 to 50
        }

    cout << endl;



    while(i != 0) {

        reverse = reverse * 10 + (i % 10);
        i = i / 10;

    }
    for (i = 1; i < 41; i++)

        if (i % 4 == 1) {
            std::cout << reverse << " "; // printing out every 4th number in reverse order from 1 to 40. Needs fixing on reversing
        }

    cout << endl;

    for (int i = 2; i < 100; i++)
    {
        bool prime = true;

        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime) cout << i << " "; // printing out prime numbers from 1 to 100
    }

    return 0;

}
