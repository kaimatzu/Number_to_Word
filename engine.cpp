#include "engine.h"
using namespace std;

engine::engine() {
    int tempint;
    string tempstring;
    ifstream mapInit ("numdata");
    while(mapInit >> tempint >> tempstring) {
        num_reference.insert(make_pair(tempint, tempstring));
        word_reference.insert(make_pair(tempstring, tempint));
    }
}

engine::~engine() { }

void engine::debugline(){
    //cout << num_reference[1] << endl;
    cout << "Debug" << endl;
    //cout << num_to_name(2) << endl;
    //cout << name_to_num("two") << endl;
}

string engine::num_to_name(int input){
    string output;
    int temp = input;
    for (int i = 100; i >= 1; i /= 10) {
        if (temp/100 > 0) {
            output.append(num_reference[temp/i] + " ");
            output.append(num_reference[100] + " ");
        }
        output.append(num_reference[(temp/i) * i]);
        if ( temp < 20 && temp > 10) {output.erase(output.begin() + output.size() - 3, output.end()); output.append(num_reference[temp]); break;}
        if (temp < 100 && temp > 10 && temp % 10 != 0) {output.append("-");}
        temp -= (temp/i) * i;
    }
    return output;
} // ^^ UNOPTIMIZED AS FUCK ^^

int engine::name_to_num(string input){
    int output = 0;
    string temp = input;
    vector<string> tempstrarr;
    vector<int> tempintarr;
    istringstream iss(temp);
    for(string temp; iss >> temp;)
        tempstrarr.push_back(temp);
    for (auto x : tempstrarr)
        tempintarr.push_back(word_reference[x]);
    for (auto x : tempintarr) {
        if (x == 100) {
            output *= x;
            continue;
        }
        output += x;
    }
    return output;
} // Hey, that's pretty goooood!
