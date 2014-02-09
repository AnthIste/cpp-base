#include <iostream>
#include "adventure/adventure.h"

using namespace std;
using namespace adventure;

int main()
{
    cout << "Hello world, were going on an adventure!" << endl;

    Adventure* adventure = new Adventure();
    adventure->PrintSomething();
    delete adventure;

    return 0;
}
