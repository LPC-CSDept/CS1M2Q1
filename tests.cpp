// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Ex1 makeRecord() ", "[example]")
{
	string filename;
	int lnum, wnum;
	char mfu;

	filename = "textfile0.dat";
	lnum = getNumLines(filename);
	cout << "The number of lines: " << lnum << endl;
	wnum = getNumWords(filename);
	cout << "The number of words: " << wnum << endl;
	mfu = getMFU(filename);
	cout << "The most frequently used character: " << mfu << endl;

	INFO("The number of lines should be 1");
	REQUIRE(lnum == 1);
	INFO("The number of words should be 7");
	REQUIRE(wnum == 7);
	INFO("The MFU should b  z");
	REQUIRE(mfu == 'z');

	filename = "textfile1.dat";
	lnum = getNumLines(filename);
	cout << "The number of lines: " << lnum << endl;
	wnum = getNumWords(filename);
	cout << "The number of words: " << wnum << endl;
	mfu = getMFU(filename);
	cout << "The most frequently used character: " << mfu << endl;
	INFO("The number of lines should be 11");
	REQUIRE(lnum == 11);
	INFO("The number of words should be 980");
	REQUIRE(wnum == 980);
	INFO("The MFU should b  o");
	REQUIRE(mfu == 'e');

	filename = "textfile2.dat";
	lnum = getNumLines(filename);
	cout << "The number of lines: " << lnum << endl;
	wnum = getNumWords(filename);
	cout << "The number of words: " << wnum << endl;
	mfu = getMFU(filename);
	cout << "The most frequently used character: " << mfu << endl;
	INFO("The number of lines should be 5");
	REQUIRE(lnum == 5);
	INFO("The number of words should be 566");
	REQUIRE(wnum == 566);
	INFO("The MFU should b  e");
	REQUIRE(mfu == 'e');
}
