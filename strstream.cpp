#include <sstream>
#include <string>
#include <cstdio>
#include <iostream>

int main(void) {
    std::stringstream ss;
    int i = 42;
    double d = 105.24;

    ss << i << " " << d;

    // Convert to string or char array
    std::string s = ss.str();
    char buf[50];
    sprintf(buf, ss.str().c_str());
    std::cout << buf;
}
