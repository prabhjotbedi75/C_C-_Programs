#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("sample.txt",ios::in);
    if(file.is_open())
    {
        string buffer;
        do
        {
        file >> buffer;
        cout << buffer << endl;
        }while(!file.eof());

        cout << (file.rdstate() ^ ifstream::eofbit) << endl;
        if((file.rdstate() ^ ifstream::eofbit) == 0)
        {
         file.clear();
         //set indicator of place in file to some other place
         // some other operations on file
        cout << file.rdstate();
    }
    else
    {
    cout<<"the file wasnt opened properly"<<endl;
    }
    return 0;
}
