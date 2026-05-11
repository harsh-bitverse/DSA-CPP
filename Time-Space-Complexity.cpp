// *Time Complexity* --> Rate at which the time taken increases with respect to input size --> Big O notation (upper bound)
// 3 rules:
// 1. Compute --> Worst case scenario
// 2. Avoid constants
// 3. Avoid lower values
#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if (marks < 25) cout << "D";
    else if (marks < 45) cout << "C";
    else if (marks < 65) cout << "B";
    else cout << "A";
}

// *Space complexity* --> Auxiliary space (space taken to solve the problem) + Input space (space taken to store the input)
// for example --> arr[N] has O(N) as space complexity
// if a and b are input, c = a + b --> a and b are input space, c is auxiliary space --> O(3) --> should not change the data, do not manipulate the data

// Note: if in the coding round, the time limit is given as 1s or 2s --> time complexity should be roughly around O(10^8) or O(2 * 10^8) respectively
