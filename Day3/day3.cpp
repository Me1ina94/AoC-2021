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
    int g_one = 0, g_two = 0, g_three = 0, g_four = 0, g_five = 0, 
        g_six = 0, g_seven = 0, g_eight = 0, g_nine= 0, g_ten = 0, 
        g_eleven = 0, g_twelve = 0;
    int count1;

    for(int num = 0; num < list.size(); num++)
    {
        std::string line = list[num];
        ++count1;
        if(line[0] == '1')
        {
            ++g_one;
        }
        if(line[1] == '1')
        {
            ++g_two;
        }
        if(line[2] == '1')
        {
            ++g_three;
        }
        if(line[3] == '1')
        {
            ++g_four;
        }
        if(line[4] == '1')
        {
            ++g_five;
        }
        if(line[5] == '1')
        {
            ++g_six;
        }
        if(line[6] == '1')
        {
            ++g_seven;
        }
        if(line[7] == '1')
        {
            ++g_eight;
        }
        if(line[8] == '1')
        {
            ++g_nine;
        }
        if(line[9] == '1')
        {
            ++g_ten;
        }
        if(line[10] == '1')
        {
            ++g_eleven;
        }
        if(line[11] == '1')
        {
            ++g_twelve;
        }
        
    }
    std::string gamma = "", epsilon = "";
    if(g_one > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_two > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_three > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_four > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_five > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_six > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_seven > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_eight > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_nine > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_ten > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_eleven > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }

    if(g_twelve > (count1 / 2))
    {
        gamma += "1";
        epsilon += "0";
    }
    else
    {
        gamma += "0";
        epsilon += "1";
    }
    std::cout << gamma << " " << epsilon << std::endl;
    int gammaToInt = stoi(gamma, 0, 2);
    int epsilonToInt = stoi(epsilon, 0, 2);
    std::cout << gammaToInt << " " << epsilonToInt << std::endl;
    std::cout << gammaToInt * epsilonToInt << std::endl;

    system("pause");

}

void puzzle_two()
{
    
}


