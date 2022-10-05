#include <iostream>
#include "../include/print.h"
#include "../include/model.h"
#include "../include/dataLoader.h"
#include <windows.h>
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;

int main(){
    DataLoader dataLoader(10,"./train.txt"); 
    LinearLayer model(784,10,"softmax");

    dataLoader.init();
    model.init();
    // dataLoader.split();
    vector<vector<vector<float>>> data = dataLoader.split();
    for(int i=0;i<data.size();i++){
        for(int j=0;j<data[i].size();j++){
            for(int k=0;k<data[i][j].size();k++){
                // cout << "ddsadas" << k << endl;
                if(k % 28 == 0)
                    cout << endl;
                cout << data[i][j][k] << " ";
            }
            cout << endl;
            Sleep(500);
        }
        cout << "next batch" << endl;
        Sleep(1000);
    }
    // vector<float> intput = dataLoader.getitem(); //wait to be completed
    // model.forward(input);
    // print(model.prediction);


    return 0;
}