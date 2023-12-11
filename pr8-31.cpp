// This program uses an array of objects.
// The objects are instances of the Circle class.
#include <iostream>
#include <iomanip>
#include "Circle.h"  // Circle class declaration file
using namespace std;

const int NUM_CIRCLES = 4;  // Number of Circle objects to be created and processed

// Function prototype
void bubbleSort(Circle[], int);

int main() {
    Circle circle[NUM_CIRCLES];  // Define an array of Circle objects

    // Use a loop to initialize the radius of each object
    for (int index = 0; index < NUM_CIRCLES; index++) {
            double radius;
            cout << "Enter the radius for circle " << (index + 1) << ": ";
            cin >> radius;
            circle[index].setRadius(radius);
    }
    
    // Sort the circles based on their areas
    bubbleSort(circle, NUM_CIRCLES);

    // Use a loop to get and print out the area of each object
    cout << fixed << showpoint << setprecision(2);
    cout << "\nHere are the areas of the " << NUM_CIRCLES << " circles.\n";
    for (int index = 0; index < NUM_CIRCLES; index++) {
        cout << "circle " << (index + 1) << setw(8) << circle[index].findArea() << endl;
    }

    return 0;
}

// The bubbleSort function sorts an array of Circle objects based on their area
 void bubbleSort(Circle array[], int size) {
     bool swap;
     Circle temp;

     do {
         swap = false;
         for (int count = 0; count < (size - 1); count++) {
             if (array[count].findArea() > array[count + 1].findArea()) {
                 temp = array[count];
                 array[count] = array[count + 1];
                 array[count + 1] = temp;
                 swap = true;
             }
         }
     } while (swap);
 }
/*
void bubbleSort(Circle array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j].findArea() > array[j + 1].findArea()) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

 */
