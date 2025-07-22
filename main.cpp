#include <iostream>

std::string getQuantityPhrase(int numbApple)
{
    if (numbApple < 0)
        return "negative";
    else if (numbApple == 0)
        return "no";
    else if (numbApple == 1)
        return "one";
    else if (numbApple == 2)
        return "a couple of";
    else if (numbApple == 3)
        return "a few";
    else if (numbApple > 3)
        return "many";
    return 0;
}

std::string getApplesPluralized(int numbApple)
{
    return (numbApple == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}