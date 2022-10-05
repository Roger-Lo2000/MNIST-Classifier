#include <iostream>
#include <vector>
#include <random>
#include <cmath>
#include <algorithm>
#include "../include/print.h"
#include "../include/model.h"
// using std::cout;
// using std::endl;
// using std::cerr;
using std::vector;
using std::string;


LinearLayer::LinearLayer() = default;
LinearLayer::LinearLayer(int in_dim, int out_dim, string act){
    input_dim = in_dim;
    output_dim = out_dim;
    activation = act;
}
void LinearLayer::init(){
    vector<float> tmp;
    for(int i=0;i<output_dim;i++){
        for(int j=0;j<input_dim;j++){
            tmp.push_back(rand() / float(RAND_MAX));            
        }
        weight.push_back(tmp);
        tmp.clear();
    }
} 

// flatten input connect to weights with number of input_dim * output_dim and followed by a softmax function
void LinearLayer::forward(vector<float> input){
    float tmp = 0;
    for(int i=0;i<output_dim;i++){
        for(int j=0;j<input_dim;j++){
            tmp += input[j] * weight[i][j];
        }
        // cout << tmp << endl;
        prediction.push_back(tmp);
        tmp = 0;
    }

    float total = 0;
    float max = *max_element(std::begin(prediction),std::end(prediction));

    for(int i =0;i<prediction.size();i++){
        prediction[i] = exp(prediction[i] - max); // to make sure exp(x) do not overflow
        // cout << prediction[i] << endl;
        total += prediction[i];
    }
    for(int i =0;i<prediction.size();i++){
        prediction[i] = prediction[i] / total;
    }
}

// compute gradient of each weights
void LinearLayer::backward(){

}
// update weight
void LinearLayer::step(){

}
