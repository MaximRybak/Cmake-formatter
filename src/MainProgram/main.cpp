#include <iostream>
#include <experimental/filesystem>
#include <experimental/string_view>
#include <thread>
using namespace std;
namespace fs = std::experimental::filesystem;

int main()
{
    std::thread th([](){ cout << "Test" << endl; });
    th.join();

    cout << "Hello World!" << endl;
    return 0;
}
