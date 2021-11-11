#ifndef ENGINE_H
#define ENGINE_H

enum engine_strengh {weak = 1 , medium , powerfull}; 

class Engine
{
    public:

        Engine(engine_strengh a, int p); 

        void set_engine_strength(engine_strengh a);   
         

        void set_price(int);   
        int get_price() const;    


    private:
        engine_strengh strength;
        int price;  
};

#endif 