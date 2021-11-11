#ifndef MECHANIC_H
#define MECHANIC_H

#include <iostream>
#include <string>


class Mechanic
{
    public:

        Mechanic(std::string ="user"); 

        void set_name(std::string &);   
        std::string get_name() const;    

        void set_money(int);   
        int get_money() const;    


    private:
        std::string name;  
        int money;  
};

#endif 