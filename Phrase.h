//
//  Phrase.h
//  Morsecode translator
//
//  Created by Joe Errey on 24/11/2018. Updated on 29/10/2021
//

#ifndef Phrase_h
#define Phrase_h

#include <iostream>
#include <string>

class Phrase
{
public:
    void setPhrase(std::string);
    std::string translate();
    Phrase();
    Phrase(std::string);

private:
    std::string phrase;
    char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    std::string morse[26] = { ".-", "---.", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
};

#endif /* phrase_hpp */
