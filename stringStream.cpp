#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector<int> result;
    int temp;
    char ch;
    while(ss>>temp){
        result.push_back(temp);
        ss>>ch;
    }
    return result;
}

int main() {
    string str = "23,5,56";
    // cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
/*
>> extracts formatted data
<< inserts formatted data
ex:- stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
*/