#include "engine.h"

Engine::Engine(engine_strengh t, int p)
{
    set_price(p);
    set_engine_strength(t);
}

void Engine::set_engine_strength(engine_strengh a)
{
    strength = a;
}

void Engine::set_price(int a)
{
    price = a;
}

int Engine::get_price() const 
{
    return price;
}
