#include <vector>
using std::vector;
using std::string;
class LinearLayer{
    public:
        vector<vector<float>> weight;
        vector<float> prediction;
        int input_dim = 784;
        int output_dim = 10;
        string activation = "softmax";

        LinearLayer();
        LinearLayer(int in_dim, int out_dim, string act);
        void init();
        void forward(vector<float> input);
        void backward();
        void step();
};