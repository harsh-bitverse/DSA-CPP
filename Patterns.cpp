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
    int d = (2*n - 1)/2;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n - 1; j++){
            if ((j >= d - i) && (j <= d + i)){
                cout << "* ";
            }
            else if(j > d + i){
                break;
            }
            else cout << "  ";
        }
        cout << endl;
    }
}

void p8(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n - 1; j++){
            if ((j >= i) && (j <= 2*n - 2 - i)){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}

void p9(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << "  ";
        }
        for (int j = n - i - 1; j < n + i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << "  ";
        }
        for (int j = i; j < 2*n - i - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void p10(int n){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void p11(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << ((i - j) % 2 == 0) << " ";
        }
        cout << endl;
    }
}

void p12(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << i + 1 << " ";
        }
        for (int j = i + 1; j < 2*n - i - 1; j++){
            cout << "  ";
        }
        for (int j = 2*n - i - 1; j < 2*n; j++){
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void p13(int n){
    int count = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}

void p14(int n){
    for (int i = 0; i < n; i++){
        int count = 'A';
        for (int j = 0; j < i + 1; j++){
            cout << char(count) << " ";
            count += 1;
        }
        cout << endl;
    }
}

void p15(int n){
    for (int i = 0; i < n; i++){
        int count = 'A';
        for (int j = n - i - 1; j >= 0; j--){
            cout << char(count) << " ";
            count += 1;
        }
        cout << endl;
    }
}

void p16(int n){
    int count = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << char(count) << " ";
        }
        count += 1;
        cout << endl;
    }
}

void p17(int n){
    int d = (2*n - 1)/2;
    for (int i = 0; i < n; i++){
        int count = 'A';
        for (int j = 0; j < n - 1 - i; j++){
            cout << "  ";
        }
        for (int j = n - 1 - i; j < d + 1; j++){
            cout << char(count) << " ";
            count += 1;
        }
        count -= 2;
        for (int j = 0; j < i; j++){
            cout << char(count) << " ";
            count -= 1;
        }
        cout << endl;
    }
}

void p18(int n){
    int count = 'E';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << char(count) << " ";
            count += 1;
        }
        count = count - i - 2;
        cout << endl;
    }
}

void p19(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }
        for (int j = n - i; j < n + i; j++){
            cout << "  ";
        }
        for (int j = n + i; j < 2*n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        for (int j = i + 1; j < 2*n - i - 1; j++){
            cout << "  ";
        }
        for (int j = 2*n - i - 1; j < 2*n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void p20(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }
        for (int j = i + 1; j < 2*n - i - 1; j++){
            cout << "  ";
        }
        for (int j = 2*n - i - 1; j < 2*n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << "* ";
        }
        for (int j = n - i - 1; j < n + i + 1; j++){
            cout << "  ";
        }
        for (int j = n + i + 1; j < 2*n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void p21(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i == 0 | j == 0) | (i == n - 1 | j == n - 1)){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}

void p22(int n){
    int size = 2 * n - 1;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int minDist = min(min(top, bottom),
                              min(left, right));

            cout << n - minDist << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        p22(n);
    }
    return 0;
}