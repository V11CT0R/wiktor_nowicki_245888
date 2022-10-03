#include <iostream>

using namespace std;
int add(int a, int b) {
    return a + b;
}
string link(string a, string b) {
    return a + b;
}
float new_function(int a, int b, int c){
    return a*b*c;
}
int main() {
    std::cout << new_function(4,2,2)<< link("Wiktor","Nowicki") << "Hello, World!" << add(4,2) << std::endl;
    return 0;
}
