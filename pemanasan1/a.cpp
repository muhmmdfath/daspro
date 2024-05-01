#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<int> extract(string input){
    istringstream iss(input);
    vector<int> numbers;
    int number;

    while(iss >> number){
        numbers.push_back(number);
    }

    cout << numbers[0] << numbers[1];
    return numbers;
}

int main(){
    int a, b, c, d;
    string t, u;

    cin >> t;
    cin >> u;

    auto v = extract(t);
    auto w = extract(u);
    a = v[0];
    b = v[1];
    c = w[0];
    d = w[1];

    double x, y;
    x = a / b;
    y = c / d;

    string hasil = x == y ? "sama" : x > y ? "lebih besar" : "lebih kecil";
    cout << hasil; 
}