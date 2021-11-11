#include "mechanic.h"

using namespace std;


Mechanic::Mechanic(string name)    
{                             
    set_name(name);
    set_money(0);
}

void Mechanic::set_name(string& name)    
{                                               
    this->name = name;
}

string Mechanic::get_name() const     
{
    return name;
}
void Mechanic::set_money(int m)    
{                                               
    this->money = m;
}

int Mechanic::get_money() const     
{
    return money;
}