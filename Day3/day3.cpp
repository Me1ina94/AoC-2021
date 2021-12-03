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
    int one = 0, two = 0, three = 0, four = 0, five = 0, 
        six = 0, seven = 0, eight = 0, nine= 0, ten = 0, 
        eleven = 0, twelve = 0;
    int count1;

    for(int num = 0; num < list.size(); num++)
    {
        std::string line = list[num];
        ++count1;
        if(line[0] == '1')
        {
            ++one;
        }
        if(line[1] == '1')
        {
            ++two;
        }
        if(line[2] == '1')
        {
            ++three;
        }
        if(line[3] == '1')
        {
            ++four;
        }
        if(line[4] == '1')
        {
            ++five;
        }
        if(line[5] == '1')
        {
            ++six;
        }
        if(line[6] == '1')
        {
            ++seven;
        }
        if(line[7] == '1')
        {
            ++eight;
        }
        if(line[8] == '1')
        {
            ++nine;
        }
        if(line[9] == '1')
        {
            ++ten;
        }
        if(line[10] == '1')
        {
            ++eleven;
        }
        if(line[11] == '1')
        {
            ++twelve;
        }
        
    }
    std::string gamma = "", epsilon = "";
    if(one > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(two > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(three > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(four > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(five > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(six > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(seven > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(eight > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(nine > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(ten > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(eleven > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(twelve > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
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


