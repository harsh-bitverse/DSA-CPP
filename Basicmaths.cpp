#include <bits/stdc++.h>
using namespace std;

// Extracting the digits of a given number
int printNcount_digits(int n){
    // way 1

    // int count = 0;
    // while (n > 0){
    //     int digit = n % 10;
    //     cout << digit << endl;
    //     count += 1;
    //     n = n / 10;
    // }

    // way 2

    int count = int(log10(n) + 1);
    return count; // this is only to count, not to pritn digits

    // Time complexity is O(log10(n)) 
    // whenever there is division --> say division is by i, then TC is O(logi(n))
}

int reverseNumber(int n){
    int rev = 0;
    int n1 = n;

    while (n > 0){
        int digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;
    }

    // checking whether it is palindrome
    cout << boolalpha << (rev == n1) << endl; // to get true or false instead of 0 or 1 when compared
    // precedence order : (); unary ++ -- !; * / %; + -; << >>; < <= > >=; == !=; &&; `; =
    return rev;
}

int armstrongNum(int n){
    int n1 = n;
    int total = 0;
    int count = int(log10(n) + 1);
    while (n > 0){
        int digit = n % 10;
        total += pow(digit, count);
        n = n / 10;
    }

    cout << boolalpha << (total == n1) << endl;
    return total;
}

int main(){
    int n;
    cin >> n;
    cout << armstrongNum(n);
    return 0;
}