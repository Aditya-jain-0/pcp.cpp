#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string st = "Hello there";
    // // Opening files using constructor and writing it
    // ofstream out("sample60.txt"); //write operation
    // out<<st;
    string st2;
    ifstream in("sample60b.txt"); //ReadOperation
    getline(in,st2); //if we want the whole line
    // in>>st2;
    cout<<st2;
    return 0;
}