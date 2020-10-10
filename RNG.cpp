#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 7; i++)
    {
        cout << "Shitpost: " << rand() << endl;
    }
    return 0;
}