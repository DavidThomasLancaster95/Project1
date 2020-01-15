#ifndef CHEAPTOKEN_H
#define CHEAPTOKEN_H

#include <iostream>
#include <string>

//git comment made from CS computer
class CheapToken {
private:
	std::string actualData;
	std::string tokenType;
	int lineNumber;
public:
	CheapToken(std::string actualDatax, std::string tokenTypex, int lineNumberx) {
		actualData = actualDatax;
		tokenType = tokenTypex;
		lineNumber = lineNumberx;
	}
	void toString() {
		std::cout << "(" << CheapToken::tokenType << ",\"" << CheapToken::actualData << "\",";
		std::cout << CheapToken::lineNumber << ")\n";
	}
};

#endif
