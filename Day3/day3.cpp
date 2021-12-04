#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> readFromFile();
void puzzle_one();
void puzzle_two();

int main()
{
   puzzle_one();

    return 0;
}

std::vector<std::string> readFromFile()
{
    std::vector<std::string> readLine;
    std::ifstream fin;
    std::string line;

    bool empty = false;

    fin.open("power_consumption.txt");
    if(!(fin.is_open()))
    {
        std::cout << "Can't open file!";
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
                readLine.push_back(line);
            }
            
        }
    }
    fin.close();

    return readLine;
}

void puzzle_one()
{
    std::vector<std::string> list = readFromFile();
    int arr_list[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int count;

    for(int num = 0; num < list.size(); num++)
    {
        std::string line = list[num];
        ++count;
        for(int num = 0; num < 12; num++)
        {
            if(line[num] == '1')
            {
                arr_list[num] += 1;
            }
        }
        
    }
    std::string gamma = "", epsilon = "";
    for(int i = 0; i < 12; i++)
        {
            if(arr_list[i] > (count /2))
            {
                gamma += "1";
                epsilon += "0";
            }
            else
            {
                gamma += "0";
                epsilon += "1";
            }
        }

    
    int gammaToInt = stoi(gamma, 0, 2);
    int epsilonToInt = stoi(epsilon, 0, 2);
    std::cout << gammaToInt << " " << epsilonToInt << std::endl;
    std::cout << gammaToInt * epsilonToInt << std::endl;

    system("pause");

}

void puzzle_two()
{
    
}


