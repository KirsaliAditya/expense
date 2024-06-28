#pragma once
#include <vector>
#include <string>
#include <string_view>

using namespace std;

class InputArguments
{
    public : 
        InputArguments() = default;
        InputArguments(const InputArguments&) = default;

        InputArguments(string_view input);

        InputArguments& operator=(const InputArguments&) = default; 

    private : 
        vector<string> arguments;

}