#include <iostream>
using namespace std;
int main()
{
    int option;
    cout << "1. To Check Prime Number. \n2. Find range for Specific Prime Number. " << endl;
    cout << "Select your option: ";
    cin >> option;
    switch (option) // Using switch case to seprate 2 conditions.
    {
    case 1:      // In this case we just check wheather the given number is prime or not.
    {
        int number;
        cout << "Enter a number to check if it is Prime number or not: ";
        cin >> number;   // Taking number fromthe user to check weather the given number is correct or not.
        bool check = true;
        int a;
        for (a = 2; a < number; a++)   // Starting from 2 because in 1/1 always = 1
        {
            if (number % a == 0)    // Puting condition if number modoulus = 0 then print....
            {
                check = false;
            }

        }
        if (check)
        {
            cout << "\n Given number " <<number << "is Prime Number." << endl;
        }
        else
        {
            cout << "\n Given number " << number <<  "is not a Prime Number." << endl;
        }
        break;
    }
    case 2:
        int minimum;
        cout << "Enter minimum number where to you start to find prime numbers: "; // If modulus not =0 print....
        cin >> minimum;

        int maximum;
        cout << "\n Enter maximum number range where you end: ";
        cin >> maximum; // Taking range where the series of prime number stop.
        int b, c;   // Declare before the loop
        for (int c = minimum; c <= maximum; c++)  // Using nested for loops to find the prime number.
        {
            bool check = true;
            for (int b = 2; b < c; b++)
            {
                if (c % b == 0)  // putting conditions to find prime number from the given condition
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                cout << c << " ";
            }

        }
    }
}
