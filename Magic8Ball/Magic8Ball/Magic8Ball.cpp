#include <iostream>
#include <thread>
#include <chrono>

std::string input;
std::string yes[] = {
    "It is certain",
    "It is decidedly so",
    "Without a doubt",
    "Yes definitely",
    "You may rely on it",
    "As I see it, yes",
    "Most likely",
    "Outlook good",
    "Yes",
    "Signs point to yes"
};
std::string maybe[] = {
    "Reply hazy, try again",
    "Ask again later",
    "Better not tell you now",
    "Cannot predict now",
    "Concentrate and ask again"
};
std::string no[] = {
    "Don't count on it",
    "My reply is no",
    "My sources say no",
    "Outlook not so good",
    "Very doubtful"
};

int main()
{
    std::srand(std::time(nullptr));
    int answer1 = std::rand() % 4;
    std::cout << "What would you like to ask the almighty magic 8 ball?\n";
    std::cin >> input;
    std::cout << "The almighty 8 ball says";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << ".";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << ".\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    int Answer;
    switch (answer1) {
        case 0:
        case 1:
            Answer = std::rand() % std::size(yes);
            std::cout << yes[Answer];
            break;
        case 2:
            Answer = std::rand() % std::size(maybe);
            std::cout << maybe[Answer];
            break;
        case 3:
            Answer = std::rand() % std::size(no);
            std::cout << no[Answer];
            break;
    }
}
