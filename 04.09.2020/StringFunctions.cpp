#include<string>
#include<iostream>
bool StringParity(std::string One, std::string Two) {
	if (Two.length() == One.length()) {
		for (int i = 0; i < One.length(); i++) {
			if (One[i] != Two[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}
std::string* DeleteParityString(std::string* One, int* Size) {
	for (int i = 0; i < *Size-1; i++) {
		for (int j = i + 1; j < *Size; j++) {
			if (StringParity(One[i], One[j])) {
				for (int k = j; k < *Size - 1; k++) {
					One[k] = One[k + 1];
				}
				(*Size)--;
			}
		}
	}
	return One;
}
void output(std::string* One, int Size) {
	for (int i = 0; i < Size; i++) {
		std::cout << One[i] << "\n";
	}
	std::cout << "\n";
}
bool LexicographicRegisterContrast(std::string First, std::string Second) {

	for (int i = 0; i < Second.length(); i++) {
		if ((int)First[i] > (int)Second[i]) {
			return true;
		}
		else
		{
			if (First[i] < Second[i]) {
				return true;
			}
		}
	}
	return false;
}