#include "main.hpp"

int main()
{
        string filename;
        int lnum, wnum;
        char mfu;

        filename = "t0.dat";
        lnum = getNumLines(filename);
        cout << "The number of lines: " << lnum << endl;
        lnum = getNumWords(filename);
        cout << "The number of words: " << lnum << endl;
        mfu = getMFU(filename);
        cout << "the most frequently used character: " << mfu << endl;

        filename = "textfile0.dat";
        lnum = getNumLines(filename);
        cout << "The number of lines: " << lnum << endl;
        lnum = getNumWords(filename);
        cout << "The number of words: " << lnum << endl;
        mfu = getMFU(filename);
        cout << "The most frequently used character: " << mfu << endl;

        filename = "textfile1.dat";
        lnum = getNumLines(filename);
        cout << "The number of lines: " << lnum << endl;
        lnum = getNumWords(filename);
        cout << "The number of words: " << lnum << endl;
        mfu = getMFU(filename);
        cout << "The most frequently used character: " << mfu << endl;

        filename = "textfile2.dat";
        lnum = getNumLines(filename);
        cout << "The number of lines: " << lnum << endl;
        lnum = getNumWords(filename);
        cout << "The number of words: " << lnum << endl;
        mfu = getMFU(filename);
        cout << "The most frequently used character: " << mfu << endl;
}