//
//  main.cpp
//  Morsecode translator
//
//  Created by Joe Errey on 24/11/2018.
//  Copyright © 2018 Joe Errey. All rights reserved.
//

#include "phrase.hpp"
#include <iostream>

int main() {
    
    Phrase phrase;
    phrase.setPhrase("hello I am joe ehhe i");
    std::cout << phrase.translate() << std::endl;
    return 0;
}
