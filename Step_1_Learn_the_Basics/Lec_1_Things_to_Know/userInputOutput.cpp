/**
 * Problem: Input Output
 * Step: 1 - Learn the Basics
 * Lecture: 1 - Things to Know in C++
 * Difficulty: Easy
 * Platform: TakeUForward (A2Z DSA Sheet)
 *
 * Problem Statement:
 *   Write a function printNumber() that takes an integer input from the user
 *   and prints it to the screen.
 *
 * Example:
 *   Input: 7
 *   Output: 7
 *
 * Complexity Analysis:
 *   Time Complexity: O(1)
 *   Space Complexity: O(1)
 */

class Solution {
public:
    void printNumber() {
        int num;
        cin >> num;   // Take input from user
        cout << num;  // Print the number
    }
};

// Explanation:
// The function reads an integer using 'cin' and prints it using 'cout'.
// This problem helps in understanding basic input/output in C++.
