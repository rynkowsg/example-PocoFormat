//
// Created by Grzegorz Rynkowski on 21/10/2016.
//

#include <cstdio>

#include <iostream>

#include <Poco/Format.h>

int main()
{
    printf("[updateProgressBar] %.0f%% %.0f%% %.0f%%\n", 1.11, 2.22, 3.33);
    std::cout << Poco::format("[updateProgressBar] %.0f%% %.0f%% %.0f%%", 1.11, 2.22, 3.33) << std::endl;
    return 0;
}
