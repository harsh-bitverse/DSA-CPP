// Selection sort: select the minimum and swap it

#include <bits/stdc++.h>
using namespace std;

// Selection sort

void selection_sort(int arr[], int n){
    // for best, worst, average cases : TC is O(N^2)
    for (int i = 0; i <= n - 2; i++){
        int mini = i;
        for (int j = i; j <= n - 1; j++){
            if (arr[j] < arr[mini]) mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}


// Bubble sort

void bubble_sort(int arr[], int n){
    // for worst and average : TC is O(N^2)
    // but for best case (that is when teh array is already sorted) --> after optimisation with "if !didSwap"
    // we get O(N) that is checked by whether the first two elements are sorted already (which is an assumption
    // that rest of the array are sorted if the first two are sorted)
    for (int i = n - 1; i >= 0; i--){
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        if (!didSwap) break;
    }
}

// Insertion sort

void insertion_sort(int arr[], int n){
    // for worst and average cases : TC is O(N^2)
    // for best case it's O(N) --> without the need for any if conditions
    for (int i = 0; i < n; i++){
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1]){
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j--;
        }
    }
}

// Merge sort --> In worst case : TC is O(N*logN) and SC is O(N) as at a particular step, temp sized of N is created

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while ((left <= mid) && (right <= high)){
        if (arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high){
    if (low >= high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n;
    cin >> n;
    // below commented for loop is for first 3 types of sorting

    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }

    // below for loop is for merge sort
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    mS(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}