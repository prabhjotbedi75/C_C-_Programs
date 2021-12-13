#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("sample.txt",ios::in | ios::binary);
    if(file.is_open())
    {
        string buffer;

        file.seekg(0,ios::end);

        streampos sizeOfFile = file.tellg();
        file.seekg(0,ios::beg);
        cout<<"The size of the file is "<<sizeOfFile<<"bytes"<<endl;
        do
        {
        file >> buffer;
        cout << buffer << endl;
        }while(!file.eof());


        if ((file.rdstate() ^ ifstream::eofbit) == 0)
        {
         file.clear();
         cout<<file.tellg()<<endl;

          file >> buffer;

         cout << buffer<<endl;

      // displays last element because reading pointer is at the end

    }

    }
    else
    {
    cout<<"the file wasnt opened properly"<<endl;
    }
    return 0;
}
