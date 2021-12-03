

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


std::vector<int> readFromFile();
void puzzle_one();
void puzzle_two();

int main()
{
   puzzle_two();

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

void puzzle_one()
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
    std::cout << count << std::endl;
    system("pause");
}

void puzzle_two()
{
    int numOne, numTwo, count = 0;
    std::vector<int> lines = readFromFile();
    
    for(auto itr = lines.begin() + 3; itr != lines.end(); ++itr)
    {
        numTwo = *itr + *(itr -1) + *(itr -2);
        numOne = *(itr - 1) + *(itr - 2) + *(itr - 3);
        if(numTwo > numOne)
        {
            ++count;
        }
    }

    std::cout << count << std::endl;
    system("pause");
}


