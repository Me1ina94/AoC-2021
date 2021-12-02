

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


std::vector<int> readFromFile();

int main()
{
    std::vector<int> lines = readFromFile();
    int count = 0;
    for(auto itr = lines.begin() + 1; itr != lines.end(); itr++)
    {
        if(*itr > *(itr - 1))
        {
            ++count;
        }
    }
    std::cout << count;
    system("pause");

    

    return 0;
}

std::vector<int> readFromFile()
{
    std::vector<int> readLine;
    std::ifstream fin;
    std::string line;
    bool empty = false;

    fin.open("input.txt");
    if(!(fin.is_open()))
    {
        std::cout << "Cant open file!";
    }
    else
    {
        while(!fin.eof())
        {
            std::getline(fin, line, '\n');
            if(line == "")
            {
                empty = true;
            }

            if(!empty)
            {
                readLine.push_back(stoi(line));
            }
        }
    }
    fin.close();
    return readLine;

}