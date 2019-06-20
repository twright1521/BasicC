#include <iostream>
#include <string>

int main()
{
	const int elementAndValue = 2;
	const int totalElements = 3;

	std::string elements[ totalElements ][ elementAndValue ] = { { "H", "1.008" }, { "He", "4.003" }, { "Li", "6.941" } };

	std::string input = "";

	std::cout << "Name: ";
	std::getline( std::cin, input );

	for( int i = 0; i < totalElements; ++i )
	{
		if( input == elements[ i ][ 0 ] )
			std::cout << input << " has an atomic mass of: " << elements[ i ][ 1 ] << '\n';
	}

	return 0;
}
