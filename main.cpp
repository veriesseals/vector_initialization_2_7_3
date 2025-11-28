// Vector initialization
// A vector can be declared with an initial number of elements by specifying the number of elements within parentheses following the vector name. Ex: vector<int> gameScores(4); declares a vector gameScores with 4 integer elements.

// A vector can also be initialized by specifying the initial values in braces {} separated by commas. Ex: vector<int> carSales = {5, 7, 11}; creates a vector of three integer elements initialized with values 5, 7, and 11. Such vector declaration and initialization does not require specifying the vector size, because the vector's size is automatically set to the number of elements within the braces.

#include <iostream>
#include <vector> // Must include or error may be thrown

using namespace std; // Must namespace std or error may be thrown

int main() {
    // Declare a vector with 3 integer elements
    // ---------------------------------------------
    vector<int> itemCounts(3); // Vector with 3 integer elements initialized to 0

    // Set values using the at() method
    // ---------------------------------------------
    itemCounts.at(2) = 17; // Set first element to 17

    // Output the values
    // ---------------------------------------------
    cout << "Item counts: " << itemCounts.at(0) << endl;
    cout << "Item counts: " << itemCounts.at(1) << endl;
    cout << "Item counts: " << itemCounts.at(2) << endl;

    return 0;
}

