
#include "Detector.h"
#include <iostream>
int main(){

    sls::Detector det;
    std::cout << "Number of modules " << det.size() << '\n';
    std::cout << "hostname: " << det.getHostname() << '\n';

}