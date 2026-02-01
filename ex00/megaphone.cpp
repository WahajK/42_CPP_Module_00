#include <iostream>
#include <cctype>

int main(int ac, char *av[])
{
    int i;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if (islower(av[i][j]))
                std::cout << static_cast<char> (std::toupper(av[i][j]));
            else
				std::cout << av[i][j];
        }
    }
    std::cout << std::endl;
}