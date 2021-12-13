#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("sample.txt",ios::out | ios::binary);

    if (file.is_open())
    {
        string tmp = "this is text about nothing";

        file << tmp;

        cout<<file.tellp()<<endl;

        file.seekp(0, ios::beg);

        file <<"T";
    }
    else
        cout<<"the file couldn't be opened"<<endl;

    return 0;
}
