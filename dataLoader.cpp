#include <iostream>
#include "dataLoader.h"
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <array>
#include <vector>
#include <sstream>
#include <fstream>
using namespace cv;
using namespace std;

DataLoader::DataLoader(int bat_si, string d){
    batch_size = bat_si;
    dir = d;
}
void DataLoader::init(){
    vector<string> files;
    ifstream ifs(dir, ios::in);
    if (!ifs.is_open()) {
        cout << "Failed to open file.\n";
    } else {
        string s;
        while (getline(ifs, s)) {
            files.push_back(s);
        }
        ifs.close();
    }
    ifs.close();

    array<float,784> tmp;
    for(int b=0;b<files.size();b++){
        Mat img = imread(files[b],IMREAD_GRAYSCALE);
        for(int i=0;i<img.rows;i++){
            for(int j=0;j<img.cols;j++){
                tmp[28*i+j] = float(img.at<uchar>(i,j));
            }
        }
        data.push_back(tmp);
    }
}
vector<vector<vector<float>>> DataLoader::split(){
    vector<vector<vector<float>>> split_data;
    std::random_shuffle(data.begin(), data.end());

    for(int i=0;i<data.size()/batch_size;i++){
        vector<vector<float>> tmp_batch;
        for(int j=0;j<batch_size;j++){
            vector<float> tmp_val;
            for(int k=0;k<data[batch_size*i+j].size();k++){
                tmp_val.push_back(data[batch_size*i+j][k]);
            }
            tmp_batch.push_back(tmp_val);
        }
        split_data.push_back(tmp_batch);
    }
    return split_data;
}

// vector<float> DataLoader::getitem(){

// }
