#include <iostream>
#include <string>

void translate(const std::string &);
int letterToCode(char);
int morseToCode(char);
void codeToMorse(int);
void codeToLetter(int);

int main()
{
    std::string string;
    getline(std::cin,string);
    translate(string);
    std::cout << std::endl;    
}

void translate(const std::string &sentence)
{
    int code = 1;
    std::locale loc;
    
    if(std::isalpha(sentence[0],loc))
    {
        for(int i = 0; i < sentence.length(); i++)
        {
            code = letterToCode(std::tolower(sentence[i],loc));
            //std::cout << "coded up\n";
            codeToMorse(code);
            std::cout << " ";
        }  
    }else{
        int character = 0;
        int primes[] = {2,3,5,7,11,13,17,19,23};
        for(int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] == ' '){
                codeToLetter(code);
                code = 1;
                character = 0;
                continue;
            }
            if(sentence[i] == '/'){
                codeToLetter(code);
                code = 1;
                character = 0;
                std::cout << " ";
                continue;
            }
            if(sentence[i] == '.'){
                code *= primes[(2*character)];
                //std::cout << "code: " << code << std::endl;
            }else{code *= primes[(2*character)+1];}
            
            
            
            character += 1;
            
        } 
        codeToLetter(code);
        
    }
}

void codeToLetter(int code){
    if(code==2*7)
        std::cout << "a";
    else if(code==3*5*11*17)
        std::cout << "b";
    else if(code==3*5*13*17)
        std::cout << "c";
    else if(code==3*5*11)
        std::cout << "d";
    else if(code==2)
        std::cout << "e";
    else if(code==2*5*13*17)
        std::cout << "f";
    else if(code==3*7*11)
        std::cout << "g";
    else if(code==2*5*11*17)
        std::cout << "h";
    else if(code==2*5)
        std::cout << "i";
    else if(code==2*7*13*19)
        std::cout << "j";
    else if(code==3*5*13)
        std::cout << "k";
    else if(code==2*7*11*17)
        std::cout << "l";
    else if(code==3*7)
        std::cout << "m";
    else if(code==3*5)
        std::cout << "n";
    else if(code==3*7*13)
        std::cout << "o";
    else if(code==2*7*13*17)
        std::cout << "p";
    else if(code==3*7*11*19)
        std::cout << "q";
    else if(code==2*7*11)
        std::cout << "r";
    else if(code==2*5*11)
        std::cout << "s";
    else if(code==3)
        std::cout << "t";
    else if(code==2*5*13)
        std::cout << "u";
    else if(code==2*5*11*19)
        std::cout << "v";
    else if(code==2*7*13)
        std::cout << "w";
    else if(code==3*5*11*19)
        std::cout << "x";
    else if(code==3*5*13*19)
        std::cout << "y";
    else if(code==3*7*11*17)
        std::cout << "z";
    else{std::cout << "?";}
}

int letterToCode(char letter)
{
    if(letter==' ')
        return 0;
    else if(letter=='a')
        return 2*7;
    else if(letter=='b')
        return 3*5*11*17;
    else if(letter=='c')
        return 3*5*13*17;
    else if(letter=='d')
        return 3*5*11;
    else if(letter=='e')
        return 2;
    else if(letter=='f')
        return 2*5*13*17;
    else if(letter=='g')
        return 3*7*11;
    else if(letter=='h')
        return 2*5*11*17;
    else if(letter=='i')
        return 2*5;
    else if(letter=='j')
        return 2*7*13*19;
    else if(letter=='k')
        return 3*5*13;
    else if(letter=='l')
        return 2*7*11*17;
    else if(letter=='m')
        return 3*7;
    else if(letter=='n')
        return 3*5;
    else if(letter=='o')
        return 3*7*13;
    else if(letter=='p')
        return 2*7*13*17;
    else if(letter=='q')
        return 3*7*11*19;
    else if(letter=='r')
        return 2*7*11;
    else if(letter=='s')
        return 2*5*11;
    else if(letter=='t')
        return 3;
    else if(letter=='u')
        return 2*5*13;
    else if(letter=='v')
        return 2*5*11*19;
    else if(letter=='w')
        return 2*7*13;
    else if(letter=='x')
        return 3*5*11*19;
    else if(letter=='y')
        return 3*5*13*19;
    else if(letter=='z')
        return 3*7*11*17;
    else return 23;
}

void codeToMorse(int code)
{
    int primes[]={2,5,11,17,23};
    
    int currentNumber = 1;
    
    if(code==0){std::cout << "/ "; return;}
    if(code==23){std::cout << "? "; return;}
    
    //std::cout << "code: " << code << std::endl;
    
    for(int i = 0; i < 9; i++)
    {
        currentNumber *= primes[i];
        if(currentNumber > code)
            return;
        //std::cout << "You know it boi ";
        if(code%primes[i]==0)
        {
            std::cout << ".";
        }else{std::cout << "-";}
        
    }
}