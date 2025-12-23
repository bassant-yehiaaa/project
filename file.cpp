#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

    const char* envAppName = getenv("APP_NAME");

    string appName = envAppName ? envAppName : "DefaultApp";

    cout << "APP_NAME: " << appName << endl;

    return 0;
}
