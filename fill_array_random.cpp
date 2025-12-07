/* Algorithm Challenge & Problem Solving
 * 23 - Fill Array with Random Numbers (1 to 100)
 *
 * This program fills an array with random numbers in the range [1, 100].
 * The user specifies how many elements the array should contain (up to 100),
 * and the program generates and prints the random values.
 *
 * This challenge demonstrates:
 *   - Generating random numbers within a specific range
 *   - Filling and processing arrays
 *   - Basic use of loops and modular functions
 *   - Handling fixed-size arrays efficiently
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fills an array with random numbers between 1 and 100
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "Enter number of elements:\n";
    cin >> arrLength;

    // Fill array with random values
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Prints all elements of the array
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL)); // Initialize random seed

    int arr[100], arrLength;

    // Fill array with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "Array Elements: ";
    PrintArray(arr, arrLength);

    return 0;
}
