#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    vector<string> names;
    ifstream ifs("./trian.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "Failed to open file.\n";
    } else {
        string s;
        while (getline(ifs, s)) {
            names.push_back(s);
        }
        ifs.close();
    }
    ifs.close();

    for(int i=0;i<names.size();i++){
        cout << names[i] << endl; 
    }
    cout << endl;
    return 0;
}