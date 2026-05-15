// Recursion : function calling itself until a specified condition is met

// stack overflow : when recursion runs infinitely

#include <bits/stdc++.h>
using namespace std;
// TC and SC are O(n) --> SC is O(n) since computer uses stack space sized of n

void printBacktrack(int cnt, int n){
    if (cnt < 1) return;
    printBacktrack(cnt - 1, n);
    cout << cnt << endl;
}

void printBacktrack2(int cnt, int n){
    if (cnt > n) return;
    cnt++;
    printBacktrack2(cnt, n);
    cout << cnt << endl;
}

// reversing and array
// method 1 --> using two pointers
void reverseArray(int l, int r, int a[]){
    if (l >= r) return;
    swap(a[l], a[r]);
    reverseArray(l+1, r-1, a);
}

// method 2 --> using one pointer
void reverseArray2(int i, int n, int a[]){
    if (i >= n/2) return;
    swap(a[i], a[n-i-1]);
    reverseArray2(i+1, n, a);
}

// Palindrome
bool checkPalindrome(int i, string s, int n){
    if (i >= n/2) return true;
    if (s[i] != s[n-i-1]) return false;
    return checkPalindrome(i+1, s, n);
}

// Multiple recursion --> Fibonacci sequence --> TC : O(2^n), SC : O(n) since for a given n, it only stores n levels (SC is current recursive depth, not total recursive depth)

int main(){
    // reverse array:
    // int a[5] = {1, 2, 3, 4, 5};
    // reverseArray2(0, 5, a);
    // for (auto it : a){
    //     cout << it << endl; // here it is not iterator, it is value itself. But it is iterator in case of for (auto it : v.begin(); it != v.end(), it++)
    // }

    // palindrome:
    string s = "MADAM";
    cout << boolalpha << checkPalindrome(0, s, 5);
    return 0;
}