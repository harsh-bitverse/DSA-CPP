#include<bits/stdc++.h>
using namespace std;

// Largest element in an array
int largestElement(vector<int> &a, int n){
    // TC : O(N)
    int largest = a[0];
    for (int i = 0; i < n; i++){
        if (largest < a[i]) largest = a[i];
    }
    return largest;
}

// Second largest element in an array
int secondLargestElement(vector<int> &a, int n){
    // TC : O(N)
    int largest = a[0];
    int sLargest = INT_MIN;
    for (int i = 1; i < n; i++){
        if(a[i] > largest){
            sLargest = largest;
            largest = a[i];
        }
        else if((a[i] < largest) && (a[i] > sLargest)) sLargest = a[i];
    }
    return sLargest;
}

// Second smallest element in an array
int secondSmallestElement(vector<int> &a, int n){
    int smallest = a[0];
    int sSmallest = INT_MAX;
    for (int i = 1; i < n; i++){
        if (a[i] < smallest){
            sSmallest = smallest;
            smallest = a[i];
        }
        else if((a[i] > smallest) && (a[i] < sSmallest)) sSmallest = a[i];
    }
    return sSmallest;
}

// Check if the array is sorted
bool checkArray(vector<int> a, int n){
    for (int i = 1; i < n; i++){
        if (a[i - 1] > a[i]) return false;
    }
    return true;
}

// Remove duplicates from a sorted array
int removeDuplicates(vector<int> &a, int n){
    // Two-pointer --> TC : O(N)
    int k = 0;
    for (int i = 1; i < n; i++){
        if (a[i] != a[k]){
            k++;
            a[k] = a[i];
        }
    }
    return k+1;
}

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }

    // cout << largestElement(a, n);
    // cout << secondLargestElement(a, n);
    // cout << secondSmallestElement(a, n);
    // cout << boolalpha << checkArray(a, n);
    cout << removeDuplicates(a, n);
    return 0;
}