#include <iostream>
#include "../include/User.h"

using namespace std;

int main(int argc, char const *argv[]) {
    User me("Omar Aflak");
    cout << me.getName() << endl;
    return 0;
}
