// Patterns : 22 problems
#include <bits/stdc++.h>
using namespace std;

void p1(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void p2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void p3(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void p4(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void p5(int n){
    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

void p6(int n){
    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void p7(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n - 1; j++){
            if ((j > 2*i + 1) && (j < 2*i + 3)){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}

// stopped at 7th problem

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        p7(n);
    }
    return 0;
}