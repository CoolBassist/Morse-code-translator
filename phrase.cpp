//
//  Phrase.cpp
//  Morsecode translator
//
//  Created by Joe Errey on 24/11/2018. Updated on 29/10/2021
//

#include "phrase.hpp"
#include <iostream>
#include <algorithm>
#include <string>

Phrase::Phrase() {}

Phrase::Phrase(std::string phrase)
{
    setPhrase(phrase);
}

void Phrase::setPhrase(std::string phrase)
{
    std::transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);
    this->phrase = phrase;
    std::cout << "Phrase set." << std::endl;
}

std::string Phrase::translate()
{
    std::string output = "";

    if (isalpha(phrase[0])) //  If the first character is an alpha character.
        for (char c : phrase)
            output += (c==' ') ? "/ " : morse[c - 'a'] + " ";
    else {
        //TODO: do morse to alpha
    }

    return output;
}