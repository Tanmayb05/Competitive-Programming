// C++ implementation to read
// file word by word
#include <iostream>
#include <fstream>
using namespace std;

// driver code
int main()
{
    string filename("text_input.txt");
    int number;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '" << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (input_file >> number) {
        cout << number << endl;
        
    }
    cout << endl;
    input_file.close();

	return 0;
}
