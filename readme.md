# MNIST-Classifier
## Classify MNIST data using Fully-Connected neural network
1. Use convetToJPG.cpp to convert mnist data into image format.
2. Use model.cpp to create a model. 
3. Use dataLoader.cpp to loader MNIST data.
## requirements: 
- Mingw 12.1.0
- opencv 4.5.5
## Usage
```
git clone https://github.com/Roger-Lo2000/MNIST-Classifier.git
cd MNIST-Classifier.git
make
```
## to do
complete dataloader to load data with batch_size
compute forward pass with batch_size
finish backward pass