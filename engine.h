#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
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
        map <int, string> num_reference; /* = {
            {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"},
            {6, "six"}, {7, "seven"}, {8, "eight"}, {9 ,"nine"}, {10, "ten"},
            {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"},
            {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"},
            {30, "thirty"}, {40, "forty"}, {50, "fifty"}, {60, "sixty"}, {70, "seventy"},
            {80, "eighty"}, {90, "ninety"}, {100, "hundred"}
        }; */
        map <string, int> word_reference; /* = {
            {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
            {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10},
            {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14}, {"fifteen", 15  },
            {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20},
            {"thirty", 30}, {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy",70},
            {"eighty", 80}, {"ninety", 90}, {"hundred", 100}
        };*/
    private:


};

#endif // ENGINE_H
