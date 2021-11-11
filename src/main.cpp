#include <iostream>
#include "mechanic.h"
#include "engine.h"

using namespace std;

int main()
{
    Mechanic a("saleh");
    cout <<a.get_name()<< endl;
    Engine c(static_cast<engine_strengh>(1), 50);
    cout << c.get_price() << endl;
    return 0;
}