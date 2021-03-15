#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <Windows.h>
//#include <iterator>
#include <string>
#include <map>
//#include <set>
//#include <algorithm>
#include <typeinfo>

using namespace std;

class engine
{
    public:
        engine();
        virtual ~engine();
        void debugline();
        string num_to_name(int input);
        int name_to_num(string input);
    protected:
        map <int, string> num_reference;
        map <string, int> word_reference;
    private:


};

#endif // ENGINE_H
