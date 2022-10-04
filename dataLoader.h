#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <array>
#include <vector>
using std::string;
using std::array;
using std::vector;
class DataLoader{
    public:
        int batch_size;
        string dir;
        vector<array<float,784>> data;
        DataLoader(int bat_si, string d);
        // DataLoader();
        void init();
        vector<vector<vector<float>>> split();
        void getitem();

};