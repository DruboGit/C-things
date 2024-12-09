#include <iostream>
#include <string>

std::string toConvert;
std::string converted;

int main()
{
    std::getline(std::cin >> std::ws, toConvert);
    for (int i = 0; i < std::size(toConvert); i++) {
        switch (std::tolower(toConvert[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
            case 'å':
            case 'ä':
            case 'ö':
            case ' ':
                converted += toConvert[i];
                break;
            default:
                converted += toConvert[i];
                converted += "o";
                converted += toConvert[i];
                break;
        }
    };
    std::cout << converted;
    //std::cout.write(converted, std::size(converted);
}
