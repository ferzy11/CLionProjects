//COP3014 Assignment 4
//Author: Fernando Zhu Yu
//Date: June 12, 2018
//
//A code that calculates if the number input by the user is perfect or not.
//

#include <iostream>
using namespace std;

int main() {
int num;

    while (num > 1)                                                                                // 1 is not a perfect number so it is used as a sentinel
    {
        int div = 2, sum = 0;
        cout << "\n\n[Enter a number]\n[Press 1 to exit]\n\n";
        cin >> num;

        if (num > 1)                                                                                // use an if to prevent the code from running everything before exiting if a 1 is input

        {
            sum = sum + 1;                                                                              //add 1 to sum to start div from 2 since all num are always divisible by 1
            cout << "1";

                for (div; div < num; div++) // divisor (div) start at 2 since 1 is not a perfect number, if divisor is less than num, then go in loop. After, n increment)

                    {
                        if (num % div == 0)                                                         // if the division yields no remainder, then add that number to the sum
                        {
                            sum = sum + div;
                            cout << "+" << div;                                                     // cout the div that was just used into the console
                        }
                    }


                    if (sum == num)                                                        // if the sum of all divisors is == to the number input, then it is a perfect number

                        {
                            cout << " = " << sum;
                            cout << " is a perfect number" << endl;

                        }

                        else {                                                                      // otherwise, it is not a perfect number
                        cout <<  " != " << num;
                        cout << " is not a perfect number" << endl;

                    }

    }
    }

}