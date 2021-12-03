#include <iostream>
#include <vector>
#include <string>
#include <fstream>

struct Position
{
    std::string change;
    int steps;
};

std::vector<Position>readFromFile();
void puzzle_one();
void puzzle_two();

int main()
{
   puzzle_two();

    return 0;
}

std::vector<Position> readFromFile()
{
    std::vector<Position> readLine;
    std::ifstream fin;
    std::string line, num;
    bool empty = false;

    fin.open("instructions.txt");
    if(!(fin.is_open()))
    {
        std::cout << "Cant open file!";
    }
    else
    {
        while(!fin.eof())
        {
            std::getline(fin, line, ' ');
            std::getline(fin, num, '\n');

            if(line == "")
            {
                empty = true;
            }

            if(!empty)
            {
                Position position;
                position.change = line;
                position.steps = stoi(num);
                readLine.push_back(position);
            }
        }
    }
    fin.close();
    return readLine;
}

void puzzle_one()
{
    int horizontal = 0, depth = 0, finalPosition = 0;
    std::vector<Position> moving = readFromFile();
    for(int num = 0; num < moving.size(); num++)
    {
        if(moving[num].change == "forward")
        {
            horizontal += moving[num].steps;
        }
        else if(moving[num].change == "down")
        {
            depth += moving[num].steps;
        }
        else if(moving[num].change == "up")
        {
            depth -= moving[num].steps;
        }
    }
    finalPosition = horizontal * depth;
    std::cout << finalPosition << std::endl;
    system("pause");
}

void puzzle_two()
{
    int horizontal = 0, depth = 0, finalPosition = 0, aim = 0;
    std::vector<Position> moving = readFromFile();
    for(int num = 0; num < moving.size(); num++)
    {
        if(moving[num].change == "forward")
        {
            horizontal += moving[num].steps;
            depth += moving[num].steps * aim;
        }
        else if(moving[num].change == "down")
        {
            aim += moving[num].steps;
        }
        else if(moving[num].change == "up")
        {
            aim -= moving[num].steps;
        }
    }
    finalPosition = horizontal * depth;
    std::cout << finalPosition << std::endl;
    system("pause");
}


