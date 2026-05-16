// pre-storing and fetching
// max of 1e6 sized int array can be declared inside int main while globally its of 1e7
// max of 1e7 sized bool array can be declared inside int main while globally its of 1e8

#include<bits/stdc++.h>
using namespace std;

// using hash

int numHash(){
        int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr){
        cin >> it;
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
    return 0;
}

char charHash(){
    string s;
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--){
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 'z';
}

// using map --> more benefiicial since we dont have to declare a size like hash where unnecessarily numbers are stored
// which we dont want. Map stores only those numbers or chars which it discovers in array or string, rather than 
// storing all such big numbers or all 256 chars

int numMap(){ // map stores all the keys in sorted order
    // map always takes logN (in all three cases: average, best and worst cases) where N is number of elements of map, for storing and also for fetching
    // so we use unorganised map --> anyways we don't need sorting here since we're just storing the mapped
    // values of certain numbers of characters storing just their frequencies

    int n;
    cin >> n;
    int arr[n];
    // just change map --> unordered_map
    // since unordered in best and average cases: takes O(1) while in worst takes O(N) which is too rare
    // if the TC is taking worst case, only then switch back to map
    // In unordered map: we have restrictions on taking the keys as pair<int, int>; it is limited only to int, char, etc
    unordered_map<int, int> mpp; // do recomputation along in here itself 
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // pre compute

    // map<int, int> mpp;
    // for (int i = 0; i < n; i++){
    //     mpp[arr[i]]++;
    // }

    int q;
    cin >> q;
    while (q--){
        int num;
        cin >> num;

        //fetch
        cout << mpp[num] << " "; // if asked about number that doesn't exist in map, then it automaticaly returns 0
    }

    return 0;
}

// Hashing : Division method (linked list) --> to understand the collisions case which if happens in unordered map (which is rare)
// that makes it take O(N) TC

int main (){
    numMap();

    return 0;
}