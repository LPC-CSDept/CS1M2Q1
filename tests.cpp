// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include "catch.hpp"
#include "Q92.hpp"

TEST_CASE("Ex1 makeRecord() ", "[example]")
{
	Names names[MAXSIZE];
	int numRecords, cnt;

	numRecords = makeRecord(names);
	cout << "Total " << numRecords << " records have been made\n";
	INFO("The number of Records should be 4080");
	REQUIRE(numRecords == 4080);

	cnt = printRecord(names, numRecords, "CA");
	cout << "Total " << cnt << " records are printed \n";
	INFO("The number of Records should be 80");
	REQUIRE(cnt == 80);

	cnt = findNames(names, numRecords, "NY", 2018);
	cout << "Total " << cnt << " records are found\n";

	INFO("The number of Records in NY 2018 should be 10");
	REQUIRE(cnt == 10);

	cnt = findNames(names, numRecords, "CA", 2011);
	cout << "Total " << cnt << " records are found\n";

	INFO("The number of Records in NY 2018 should be 10");
	REQUIRE(cnt == 10);
}