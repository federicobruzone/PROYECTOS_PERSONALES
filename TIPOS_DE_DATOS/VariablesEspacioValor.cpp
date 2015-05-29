#include <iostream>
#include <iomanip>
#include <limits.h>
#include <float.h>

int main (){
	using std::cout;
	using std::cin;
	using std::setw;
	using std::setfill;
	
	cout << "+" << setfill('-') << setw(39) << "+\n" << setfill(' ');
	cout << "|" << setw(19) << std::left << "TIPO DE DATO" << setw(18) << "ESPACIO EN MEMORIA" << "|\n";
	cout << "+" << setfill('=') << setw(37) << "" << "+\n";
	cout << "|" << setw(12) << setfill(' ') << std::right << "bool:" << setw(17) << ""<< setw(2) << std::right << sizeof(bool) << " bytes" << "|\n";
	cout << "|" << setw(12) << "char:" << setw(17) << "" << setw(2) << std::right << sizeof(char) << " bytes" << "|\n";
	cout << "|" << setw(12) << "wchar_t:" << setw(17) << "" << setw(2) << std::right << sizeof(wchar_t) << " bytes" << "|\n";
	cout << "|" << setw(12) << "char16_t:" << setw(17) << "" << setw(2) << std::right << sizeof(char16_t) << " bytes" << "|\n";
	cout << "|" << setw(12) << "char32_t:" << setw(17) << "" << setw(2) << std::right << sizeof(char32_t) << " bytes" << "|\n";
	cout << "|" << setw(12) << "short:" << setw(17) << "" << setw(2) << std::right << sizeof(short) << " bytes" << "|\n";
	cout << "|" << setw(12) << "int:" << setw(17) << "" << setw(2) << std::right << sizeof(int) << " bytes" << "|\n";
	cout << "|" << setw(12) << "long:" << setw(17) << "" << setw(2) << std::right << sizeof(long) << " bytes" << "|\n";
	cout << "|" << setw(12) << "long long:" << setw(17) << "" << setw(2) << std::right << sizeof(long long) << " bytes" << "|\n";
	cout << "|" << setw(12) << "float:" << setw(17) << "" << setw(2) << std::right << sizeof(float) << " bytes" << "|\n";
	cout << "|" << setw(12) << "double:" << setw(17) << "" << setw(2) << std::right << sizeof(double) << " bytes" << "|\n";
	cout << "|" << setw(12) << "long double:" << setw(17) << "" << setw(2) << std::right << sizeof(long double) << " bytes" << "|\n";
	cout << "+" << setfill('-') << setw(39) << "+\n";

	cout << "+" << setfill('-') << setw(65) << "+\n" << setfill(' ');
	cout << "|" << setw(19) << std::left << "TIPO DE DATO" << setw(22) << std::right << "VALOR MAXIMO" << setw(22) << "VALOR MINIMO" << "|\n";
	cout << "+" << setfill('=') << setw(63) << "" << "+\n";
	cout << "|" << setw(12) << setfill(' ') << "bool:" << setw(7) << "" << setw(22) << "true" << setw(22) << "false" << "|\n";
	cout << "|" << setw(12) << "char:" << setw(7) << "" << setw(22) << CHAR_MAX << setw(22) << CHAR_MIN << "|\n";
	cout << "|" << setw(12) << "short:" << setw(7) << "" << setw(22) << SHRT_MAX << setw(22) << SHRT_MIN << "|\n";
	cout << "|" << setw(12) << "int:" << setw(7) << "" << setw(22) << INT_MAX << setw(22) << INT_MIN << "|\n";
	cout << "|" << setw(12) << "long:" << setw(7) << "" << setw(22) << LONG_MAX << setw(22) << LONG_MIN << "|\n";
	cout << "|" << setw(12) << "long long:" << setw(7) << "" << setw(22) << LLONG_MAX << setw(22) << LLONG_MIN << "|\n";
	cout << "|" << setw(12) << "float:" << setw(7) << "" << setw(22) << FLT_MAX << setw(22) << FLT_MIN << "|\n";
	cout << "|" << setw(12) << "double:" << setw(7) << "" << setw(22) << DBL_MAX << setw(22) << DBL_MIN << "|\n";
	cout << "|" << setw(12) << "long double:" << setw(7) << "" << setw(22) << LDBL_MAX << setw(22) << LDBL_MIN << "|\n";
	cout << "+" << setfill('-') << setw(65) << "+\n";
	
	cin.get();
}
