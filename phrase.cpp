//
//  phrase.cpp
//  Morsecode translator
//
//  Created by Joe Errey on 24/11/2018.
//  Copyright © 2018 Joe Errey. All rights reserved.
//

#include "phrase.hpp"
#include <iostream>
#include <string>

void Phrase::setPhrase(std::string new_phrase)
{
    std::transform(new_phrase.begin(), new_phrase.end(), new_phrase.begin(), ::tolower);
    phrase = new_phrase;
}

bool Phrase::isMorse(char character)
{
    return (!isalpha(character));
}

std::string Phrase::translate()
{
    std::string output = "";
    
    if(isMorse(phrase[0]))
    {
        //TODO: do morse to alpha
    }else{
        for(int i = 0; i < phrase.size(); i++)
        {
            if(phrase[i] == ' ')
            {
                output += "/ ";
                continue;
            }
            
            for(int j = 0; j < 26; j++)
            {
                if(phrase[i] == alpha[j])
                {
                    output += morse[j] + " ";
                    break;
                }
            }
        }
    }
    
    return output;
}