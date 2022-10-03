#include <iostream>

using namespace std;
int add(int a, int b) {
    return a + b;
}
string link(string a, string b) {
    return a + b;
}
int main() {
    std::cout << link("Wiktor","Nowicki") << "Hello, World!" << add(4,2) << std::endl;
    return 0;
}
