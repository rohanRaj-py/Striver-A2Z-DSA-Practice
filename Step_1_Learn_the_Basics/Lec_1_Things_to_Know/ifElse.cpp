// Problem: Student Grade
// Step: 1 - Learn the Basics
// Lecture: 1 
// Platform: TakeUForward (A2Z DSA Sheet)
// Difficulty: Easy
//
// Description:
// Prints grade based on marks obtained by the student.
//
// Example:
// Input: 75
// Output: Grade B
//
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if (marks >= 90) cout << "Grade A";
        else if (marks >= 70) cout << "Grade B";
        else if (marks >= 50) cout << "Grade C";
        else if (marks >= 35) cout << "Grade D";
        else cout << "Fail";
    }
};
