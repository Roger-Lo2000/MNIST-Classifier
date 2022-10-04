#include "print.h"
#include <iostream>
// 1d float vector
void print(std::vector<float> x){ 
  for(int i=0;i<x.size();i++){
		std::cout << x[i] << " ";
  }
	std::cout << std::endl;
} 
// 1d int vector
void print(std::vector<int> x){
  for(int i=0;i<x.size();i++){
		std::cout << x[i] << " ";
  }
	std::cout << std::endl;
}
// 2d float vector
void print(std::vector<std::vector<float>> x){
  for(int i=0;i<x.size();i++){
    for(int j=0;j<x[i].size();j++){
		  std::cout << x[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
// 2d int vector
void print(std::vector<std::vector<int>> x){
  for(int i=0;i<x.size();i++){
		for(int j=0;j<x[i].size();j++){
		  std::cout << x[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

