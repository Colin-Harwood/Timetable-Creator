#include "functions.h"
#include "module_data.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << allModules[0].name << std::endl;
    cout << allModules[0].lectures[0][1].startTime << std::endl;

    return 0;
}