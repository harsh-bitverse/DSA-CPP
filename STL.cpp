// STL is Standard Template Library containing all pre-defined algorithms, containers, functions, iterators which can be directly incorporated into the code.


#include <bits/stdc++.h>
using namespace std;


// Containers:

void explainPair(){ // part of utility library
    pair<int, int> p1 = {1, 3}; // Any data type can be stored.
    cout << p1.first << " " << p1.second;

    pair<int, pair<int, int> > p2 = {1, {3, 4}}; // Nested property of pair
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    pair<int, int> arr[4] = {{1,2}, {3, 4}, {5, 6}}; // Just like how int arr[] would work, likewise instead of 'int', use 'pair <int, int>' as data type now.
    cout << arr[3].second; // Here last element of array is initialised with {0,0}
}

// Vectors: these are dynamic in size --> arrays are of fixed size, can't add or reduce number of elements from it unlike vectors

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // Generally emplace_back is faster than push_back ---> Reason?

    vector<pair<int, int> > vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); // Don't have to add elements putting into {} for emplace_back, it assumes that it is pair (or whatever the data type given)

    vector<int> v2(5, 100);
    vector<int> v3(v2); // copies v2 elements into v3

    // way 1 to access elements: same as that of array
    cout << v3[0] << endl;

    // way 2 to access elements: using an iterator
    vector<int> :: iterator it = v2.begin();
    it += 5; // self assigned 0 after 5 - 100s in v2
    cout << *(it) << endl; // use * to access element through address

    vector<int> :: iterator it1 = v3.end(); // DOESN'T POINT TO LAST ELEMENT --> POINTS TO MEMORY ADDRESS RIGHT NEXT TO LAST ELEMENT'S ADDRESS
    cout << *(it1) << endl; // garbage value
    it--; // it -= 1 --> to access last element, must reduce it by one
    cout << *(it1) << endl; // do not use same 'it' variable inside same scope

    // cout << v3.at(5) << endl; // same as v3[5] --> throws run-time exception if the index doesn't exist
    // v.rend() and v.rbegin() --> never used

    cout << v3.back(); // now it accesses last element

    // way 1 to print elements in v3
    for (auto it2 = v3.begin(); it2 != v3.end(); it2++){ // auto here is vector<int> :: iterator
        cout << *(it2) << endl;
    }

    // way 2 to print elements in v3
    for (auto it3: v3){
        cout << it3 << endl;
    }

    // erasing elements
    auto it4 = v3.erase(v3.begin()+ 1); // here, both v3.begin()+ 1 and v3.erase(v3.begin()+ 1), returns an iterator 
    // to delete a set of elements 
    v3.erase(v3.begin() + 1, v3.begin() + 3); // [start, end)
    
    vector<int> v4(2, 100); // {100, 100}
    v4.insert(v4.begin(), 300); // {300, 100, 100}
    v4.insert(v4.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    vector<int> copy(4, 50); // {50, 50, 50, 50}
    v4.insert(v4.begin(), copy.begin(), copy.begin() + 2); // {50, 50, 300, 10, 10, 100, 100}
    cout << v4.size() << endl;
    v4.pop_back();

    v3.swap(v4); //v3 is now old v4 and vice versa
    v4.clear(); // v4 is now an empty vector

    cout << v4.empty(); // returns True or False whether v4 is empty or not
}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(1); // in vector, insert is expensive while push_front here is cheap in terms of TC
    ls.emplace_front(3);
    cout << *(ls.begin());
    // rest functions same as vectors --> begin, end, clear, insert, size, swap
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2);
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3 ,4, 1, 2}
    dq.pop_back();
    dq.pop_front();
    dq.back(); // returns last element
    dq.front(); // return first element
    // rest functions same as vectors --> begin, end, clear, insert, size, swap
}

// NO INDEXING IN STACK AND QUEUE

void explainStack(){ // LIFO : Last in first out --> push, pop, top--> every operation in stack, happens at O(1) TC
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}
    cout << st.top() << endl; // prints 5
    st.pop(); // removes 5 that is LAST IN FIRST OUT
    cout << st.size() << endl << st.empty(); // prints 4, false
    stack<int> st1, st2;
    st2.swap(st1); 
}

void explainQueue(){ // FIFO : First in first out --> push, pop, back --> O(1) all operations
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // 4 --> 9
    cout << q.back() << endl; // prints 9
    q.pop(); // deletes 1 --> {2, 9}
    cout << q.front(); // prints 2
    // size, swap, empty same as stack
}

void explainPQ(){ // data is not stored in a linear fashion --> inside, a tree is maintained
    // maximum will be at the top --> max heap
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10
    pq.pop(); // removes 10
    // again, pop push and top

    // for minimum to be at the top that is to reverse the order --> min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); // {5}
    pq1.push(2); // {2, 5}
    pq1.push(8); // {2, 5, 8}
    pq1.emplace(10); // {2, 5, 8, 10}

    cout << pq1.top(); // prints 2
    pq1.pop(); // removes 2

    // TC : push and pop happens in log(n); top in O(1)
}

void explainSet(){
    // stores in sorted (lowest to highest) order and all unqiue elements --> not linearly stored, again a tree
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {2}
    st.insert(2); // doesn't store
    st.emplace(5); // {1, 2, 5}
    st.insert(3); // {1, 2, 3, 5}
    // begin, end, size, empty and swap

    auto it = st.find(3); // iterator pointing to 3 with address
    auto it = st.find(6); // element isnt in set, so returns address of set.end() that is address of element right after the last element of the set
    st.erase(3); // erases 3 --> takes log(n) TC --> can give element's iterator too st.erase(st.find(3))
    int cnt = st.count(1); // st.count always returns 0 or 1

    st.erase(st.find(2), st.find(4)); // erases 2 and 3 of {1, 2, 3, 4, 5} --> {1, 4, 5}

    auto it1 = st.lower_bound(4); // it returns an iterator pointing out to first occurance of 4 --> lower_bound(a, a+n, 4) , a is first element and n is size
    auto it1 = st.lower_bound(3); // since 3 doesn't exist, it returns iterator that is immediate next bigger element to 3 that is 4
    auto it2 = st.upper_bound(3); // it returns it pointing to next bigger element of 3 that is 4 (YES!! Even if the element didn't exist)
    auto it2 = st.upper_bound(5); // returns it pointing to next bigger element than 5 that is at next address of 5 (out of the set)
    // lower_bound --> used to find first occurance; upper_bound --> find last occurance
    // every operation happens in log(n)
}

void explainMultiset(){
    // stores in sorted manner but stores many occurances rather than set which stores unique occurances
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1, 1, 1}
    ms.erase(1); // erases all 1's as we are giving element as input to erase

    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.erase(ms.find(1)); // erases only first occurance 1 as we are giving iterator to erase --> {1, 2, 3}

    ms.erase(ms.find(1), next(ms.find(1), 2)); // {3} --> erases 1, 2
}

void explainUset(){
    // stores unique occurances, but not sorted --> random order
    unordered_set<int> us;
    // except lower_bound and upper_bound, rest all functions work well --> better complexity of O(1) in most cases than set
}

void explainMap(){
    map<int, int> mpp; // <int, int> is key, value pair --> like dictionary of python; keys all unique
    map<int, pair<int, int>> mpp1; // vice verse pair as key and int as value

    mpp[1] = 2; // {{1 : 2}}
    mpp.emplace(3, 5); // {{1, 2} {3, 5}}
    mpp.insert({2, 3}); // {{1, 2} {2, 3} {3, 5}} --> internally sorts w.r.t keys

    mpp1[2] = {1, 2};

    for (auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    // to print value
    cout << mpp[1] << endl; 
    cout << mpp[5] << endl; // there is no key 5, so returns null or 0

    auto it = mpp.find(3);
    cout << (*it).second; // not *(it).second as it will be intrepreted as *((it).second) as . has higher precedence than *

    auto it1 = mpp.find(5); // 5 doesnt exist, so points out of the bound, that is next to last element of the map
    auto it2 = mpp.lower_bound(2); // it works for upper_bound too

    // erase, swap, size, empty work same
}

void explainMultimap(){
    // same as map, but stores duplicate keys too but everything is sorted
    // only mpp[key] cannot be used here
}

void explainUnorderedmap(){
    // same as map, stores unique keys but unordered
    // map always O(log(n)) while unordered almost in all cases works in O(1) with worst case of O(n)
}

// ---done with containers--- //
// Algorithms

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

void explainAlgos(){
    // FOR SORTING

    // sort(a, a+n); sort(a+2, a+4); also works to sort only a part of container
    // sort(v.begin(), v.end()); where v is any container except map (majorly, vectors and arrays)
    // sort(a, a+n, greater<int>); sorts in descending order

    // sorting in my way --> example below
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = sizeof(arr)/sizeof(arr[0]); // sizeof(arr) gives total bites, arr[0] gives bites per element, thus number of elements = total bites/bites per element
    // sort according to second element
    // if second element is same, sort accoridng to first element but in decreasing order

    sort(arr, arr + n, comp); // comp --> self return comparator above
    // sort internally dereferences those addresses and passes ACTUAL elements into comp

    // FOR NUMBER OF 1's IN NUM

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num1 = 17326436;
    int cnt = __builtin_popcountll(num1);

    // FOR PERMUTATIONS

    string s = "123";
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // say if s was "321" --> then prints only 321, 312, thats it.
    // thus always start to print permutations from sorted string

    // FOR MAX ELEMENT
    
    // int maxx = *max_element(a, a+n);
}

int main(){
    explainMultiset();
    return 0;
}