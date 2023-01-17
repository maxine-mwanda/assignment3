#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream myfile ("NOTES.txt");
    if (myfile.is_open())
    {
        for(int i=1;i<=100;i++)
        myfile<<i<<endl;
    cout<<"Data successfully written in file\n";
    myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}