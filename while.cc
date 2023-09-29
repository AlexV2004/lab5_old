// Don't forget to include the header block
// more information on keyword const on pages 95 - 97
// For if else format look at page 77

/*
 *        File: git-lab-program.cc
 *      Author: Alex Vano
 *        Date: 9/29/2023
 * Description: Creating a while loop for low and high temperatures
 */

#include<iostream> 
#include<cstdlib>

using namespace std;

int main()
{
    int temp;
    int high;
    int low;
    cout << "Enter temperatures: " << endl;
    cin >> temp;
    high = temp;
    low = temp;
    while (temp != -100) {
        cin >> temp;
        if (temp > high)
            high = temp;
        if (temp < low && temp != -100)
            low = temp;
    }
    cout << "Highest Temperature: " << high << endl;
    cout << "Lowest Temperature: " << low << endl;
}