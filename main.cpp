#include "engine.h"
using namespace std;

int main()
{
    cout << "Enter input: ";
    engine debug;
    string x;
    getline(cin, x);

    cout << debug.name_to_num(x) << endl;
    system("pause");
}
