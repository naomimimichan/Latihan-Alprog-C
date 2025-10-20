/*
Using Bubble Sort method in an analogy of "cars on a highway"
Start time: 4:25 PM
End time: 4:57 PM
*/

#include <iostream>
using namespace std;

// Sourced from Quora, one example of a bubble sort is the behavior of cars on a long two-lane road
// The rules are: Each time one car passes another, the positions are swapped. The decision to pass is local.

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int &number, int cars[]) {
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - 1; j++) { // Why is j < number - 1? Because the last element in an array does not have anything else to compare to (it is the last element, anything on its right side is an empty number)
            if (cars[j] > cars[j + 1])
                swap (cars[j], cars[j + 1]);
            // Why is variable 'i' not used? Variable 'i' is only written in the 'for' function because it is only used to count how many comparisons need to be done
        }
    }

    for (int i = 0; i < number; i++) {
        if (i < number - 1) {
            cout << cars[i] << ", ";
        } else
            cout << cars[i];
    }
}

int main() {
    // int number is to state the value of cars
    int number;
    cin >> number;

    int cars[number];

    // Used to data the cars' speed
    for (int i = 0; i < number; i++) {
        cin >> cars[i];
    }

    bubbleSort(number, cars);

    return 0;
}