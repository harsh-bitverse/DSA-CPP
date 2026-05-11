// Inorder to take an input and get an ouput --> <iostream>, to use math functions --> <math.h>, to use strings --> <string>
#include <bits/stdc++.h>
using namespace std;

// *If-else: Grading system*
// int main(){
//     int mark;
//     cin >> mark;

//     if (80 <= mark <= 100) {
//         cout << "A";
//     }
//     else if (mark >= 60){
//         cout << "B";
//     }
//     else if (mark >= 50){
//         cout << "C";
//     }
//     else if (mark >= 45){
//         cout << "D";
//     }
//     else if (mark >= 25){
//         cout << "E";
//     }
//     else{
//         cout << "F";
//     }
//     return 0;
// }

// *Nested If-Else*
// int main(){
//     int age;
//     cin >> age;

//     if (age < 18){
//         cout << "You're not eligible for the job";
//     }
//     else if(age <= 57){
//         cout << "You're eligible for the job";
//         if(age >= 55){
//             cout << ", but retirement soon";
//         }
//     }
//     else if(age > 57){
//         cout << "retirement time";
//     }
//     return 0;
// }

// *Switch* --> input day number varying between 1-7 and print corresponding day: Monday for 1, Tuesday for 2, etc

// int main(){
//     int day;
//     cin >> day;

//     switch(day){
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "Invalid";
//     }
//     return 0;
// }

// *Arrays --> 5 integer inputs*
// 1D Array

// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     arr[3] += 10;
//     cout << arr[3];
//     return 0;
// }

// *2D Array*

// int main(){
//     int arr[3][5];
//     cin >> arr[0][1];
//     arr[0][1] += 10;
//     cout << arr[0][1];
//     return 0;
// }

// *Strings*

// int main(){
//     string s = "Harshith";
//     int len = s.size();
//     s[len - 1] = 'z';
//     cout << s[len - 1] << s;
//     return 0;
// }

// *Loops : For loop*

// int main(){
//     for (int i = 1; i <= 5; i++){
//         cout << "Harshith" << endl;
//     }
//     return 0;
// }

// *While loop*

// int main(){
//     int i = 1;
//     while (i <= 5){
//         cout << "Harshith" << endl;
//         i++;
//     }
//     return 0;
// }

// *Do while loop*

// int main(){
//     int i = 2;
//     do {
//         cout << "Harshith" << endl;
//         i++;
//     } while (i >= 3 && i <= 5);
//     return 0;
// }

// *Functions*
// To increase readability, modularise code, use same code multiple times --> void, return, paraeterised, non-parameterised

// void printName(string name){
//     cout << "Hey " << name << "!" << endl;
// }

// int main(){
//     string name, name2;
//     cin >> name >> name2;
//     printName(name);
//     printName(name2);

//     return 0;
// } --> Parameterised, void, non parameterised

// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     cout << sum(num1, num2);
//     return 0;
// }

// *Inbuilt functions* : here max is inbuilt --> shown how it works by rewriting the function

// int maxx(int num1, int num2){
//     if (num1 > num2) return num1;
//     else return num2;
//     return num1; 
//     // always write return for functions that returns in such a way that it should return for all kind of possible outputs, like here if num1 = num2, then it would return num1 which was the only case not covered in previous if-else cases
// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;

//     cout << maxx(num1, num2);
// }

// *Pass by value* --> passing a copy of num here rather than the original

// void doSomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main(){
//     int num;
//     cin >> num;
//     doSomething(num);
//     cout << num;
//     return 0;
// }

// *Pass by reference* --> passing the original

// void doSomething(int &num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main(){
//     int num;
//     cin >> num;
//     doSomething(num);
//     cout << num;
//     return 0;
// }

// *Arrays always go with reference*

void doSomething(int arr[], int n){
    arr[4] += 100;
    cout << arr[4] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for (int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << arr[4];
}