#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*void readData(string filename)
{
    // Code to read data from the file
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl; // Process the line (for demonstration, we just print it
        
    }
    file.close();
}*/

class FileReader {

private:
    string filename;

public:
    FileReader(string fname) 
    {
        filename = fname;
    }
    void readData()
    {
        ifstream infile(filename);
        if (!infile.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return;
    }
    string line;
    while (getline(infile, line))
    {
        cout << line << endl; // Process the line (for demonstration, we just print it
    }
    infile.close();
}

};
  

int main(){
    string filename = "data.txt"; // Replace with your actual file name
    /*readData(filename);*/
    FileReader reader(filename);
    reader.readData();

    return 0;


}