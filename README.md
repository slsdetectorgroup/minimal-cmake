# minimal-cmake
Minimal integration example for slsDetectorPackage


```
#Assuming slsDetectorPackage is installed in ~/sls/install/
#Assuming detector is already setup using config file

git clone https://github.com/slsdetectorgroup/minimal-cmake.git
mkdir build && cd build
cmake ../minimal-cmake/ -DCMAKE_PREFIX_PATH=~/sls/install/
make
./example

```