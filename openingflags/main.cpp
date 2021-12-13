#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("sample.txt",ios::out | ios::app);

    if(file.is_open())
    {
      file<<"lol life\n";
      file<<"lol life\n";
    }
    else
    {
    cout<<"the file hasnt been opened properly";
    }
    return 0;
}
