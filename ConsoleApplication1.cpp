#include <fstream>
#include <string>
#include <iostream>

bool hasTriple(const std::string& filename)
{
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line))
    {
        for (size_t i = 0; i < line.size() - 2; ++i)
        {
            if (line[i] == 'O' && line[i + 1] == 'G' && line[i + 2] == 'O')
            {
                return true;
            }
            if (line[i] == 'A' && line[i + 1] == 'G' && line[i + 2] == 'A')
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    std::string filename = "t.txt";    
    bool result = hasTriple(filename);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}
