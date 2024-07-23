#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream hout("sample60.txt");
    string name;
    cout << "enter content for the new file " << endl;
    cin >> name;
    hout << name;
    hout.close();

    string content;
    ifstream hin("sample60.txt");
    getline(hin,content);
    cout<<"content of the file is "<<endl;
    cout<<content;
    return 0;
}