#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int main()
{
    //Current time and date
    time_t now = time(0);

    //Convert to string form
    char* dt = ctime(&now);

    cout << dt << endl;
    getchar();
    return 0;
}