#include <iostream>
#include <string>
#include <locale>

int letterToMorse(char);
void translate(const std::string &);
void decode(int code);

int main()
{
    std::string string;
    getline(std::cin,string);
    translate(string);
}

int letterToMorse(char letter)
{
    if(letter==' ')
        return 0;
    else if(letter=='a')
        return 2*3;
    else if(letter=='b')
        return 3*5*11*17;
    else if(letter=='c')
        return 3*5*7*11;
    else if(letter=='d')
        return 3*5*11;
    else if(letter=='e')
        return 2;
    else if(letter=='f')
        return 2*5*7*11;
    else if(letter=='g')
        return 3*7*11;
    else if(letter=='h')
        return 2*5*11*17;
    else if(letter=='i')
        return 2*5;
    else if(letter=='j')
        return 2*3*7*13;
    else if(letter=='k')
        return 3*5*7;
    else if(letter=='l')
        return 2*3*5*11;
    else if(letter=='m')
        return 3*7;
    else if(letter=='n')
        return 3*5;
    else if(letter=='o')
        return 3*7*13;
    else if(letter=='p')
        return 2*3*7*11;
    else if(letter=='q')
        return 3*7*11*13;
    else if(letter=='r')
        return 2*3*5;
    else if(letter=='s')
        return 2*5*11;
    else if(letter=='t')
        return 3;
    else if(letter=='u')
        return 2*5*7;
    else if(letter=='v')
        return 2*5*11*13;
    else if(letter=='w')
        return 2*3*7;
    else if(letter=='x')
        return 3*5*11*13;
    else if(letter=='y')
        return 3*5*7*13;
    else if(letter=='z')
        return 3*7*11*17;
    else return 19;
}

void decode(int code)
{
    int primes[] = {2,3,5,7,11,13,17,19};
    if(code == 0) {std::cout << "/ ";return;}
    if(code == 19) {std::cout << "? ";return;}
    for(int i = 0; i < 8; i++)
    {
        if(code % primes[i] == 0)
        {
            if(i % 2 == 0 || i == 0)
            {
                std::cout << ".";
            }else{
                std::cout << "-";
            }
        }
    }
    std::cout << " ";
}

void translate(const std::string &sentence)
{
    std::locale loc;
    
        
    
    int code;
    for(int i = 0; i < sentence.length(); i++)
    {
        code = letterToMorse(std::tolower(sentence[i],loc));
        decode(code);
    }
}