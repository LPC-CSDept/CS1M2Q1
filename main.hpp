#include <iostream>
#include <fstream>

using namespace std;

int getNumLines(string);
int getNumWords(string);
char getMFU(string);

int getNumLines(string filename)
{
    ifstream ifs;
    int cnt = 0;

    ifs.open(filename);
    if (!ifs)
    {
        cerr << "File open error\n";
        exit(0);
    }
    // ##################################################
    //  Code your program here
    // ##################################################

    return cnt;
}
int getNumWords(string filename)
{
    ifstream ifs;
    int cnt = 0;

    ifs.open(filename);
    if (!ifs)
    {
        cerr << "File open error\n";
        exit(0);
    }
    // ##################################################
    //  Code your program here
    // ##################################################

    return cnt;
}

char getMFU(string filename)
{
    ifstream ifs;
    char mfu;

    ifs.open(filename);
    if (!ifs)
    {
        cerr << "File open error\n";
        exit(0);
    }
    // ##################################################
    //  Code your program here
    // ##################################################

    return mfu;
}