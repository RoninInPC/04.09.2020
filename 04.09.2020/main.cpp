#include<string>
#include<iostream>
#include <algorithm>
#include<fstream>  
#include"StringFunctions.hpp"
int main() {
	std::fstream fout;
	int count = 0;
	std::string s;
	fout.open("input.txt");
	while (getline(fout, s)) {
		count++;
	}
	fout.close();
	std::string* One = new std::string[count];
	count = 0;
	fout.open("input.txt");
	while (getline(fout, One[count])) {
		count++;
	}
	fout.close();
	output(One, count);
	One = DeleteParityString(One, &count);
	output(One, count);
	std::sort(One,One + count);
	output(One, count);
	return 0;
}