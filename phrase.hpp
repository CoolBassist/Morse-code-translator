//
//  phrase.hpp
//  Morsecode translator
//
//  Created by Joe Errey on 24/11/2018.
//  Copyright © 2018 Joe Errey. All rights reserved.
//

#ifndef phrase_hpp
#define phrase_hpp

#include <stdio.h>
#include <string>

class Phrase
{
public:
    void setPhrase(std::string new_phrase);
    std::string translate();
    
private:
    std::string phrase;
    bool isMorse(char letter);
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    std::string morse[26] = {".-", "---.", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
};

#endif /* phrase_hpp */
