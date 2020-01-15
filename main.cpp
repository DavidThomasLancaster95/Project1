#include <iostream>
#include <string>
#include <fstream>
#include <vector> // used in both main and tokenizer
#include <ctype.h> // used in the tokenizer
#include "CheapToken.h"
#include "ScannerMachine.h"


int main(int argc, char* argv[1]) {


	ScannerMachine scannerMachine;


	scannerMachine.tokenize(argv[1]);
	scannerMachine.printTokens();
	return 0;
}