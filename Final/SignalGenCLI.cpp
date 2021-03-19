#include "library/cxxopts/include/cxxopts.hpp"
#include <iostream>
#include <exception>
#include <string>
#include <initializer_list>
using namespace std;

cxxopts::ParseResult parseArgs(int argc, char *argv[])
{
    cxxopts::Options options("SignalGeneratorCLI.exe", 
                             "Controls a signal generator from the command line\nCommands:\nnew - create a new cycle with id\nstep - create an output cycle step for parent cycle\nrun - run the cycle at id");
    
    options.add_options()
        ("command", "Command to run", cxxopts::value<string>())
        ("id", "[new] [run] id of the cycle", cxxopts::value<string>())
        ("parent", "[step] id of the parent cycle for a step", cxxopts::value<string>())
        ("type", "[step] type of output step", cxxopts::value<string>())
        ("cond", "[step] type of condition to end the output step", cxxopts::value<string>())
        ("thresh", "[step] threshold to break the condition for the output step", cxxopts::value<int>())
        ("h,help", "Print help")
        ;
    options.parse_positional({"command"});

    cxxopts::ParseResult result = options.parse(argc, argv);
    if(result.count("help"))
    {
        cout << options.help() << endl;
    }
    return result;
}

bool isCommandValid(cxxopts::ParseResult parsed)
{
    string cmd = parsed["command"].as<string>();
    bool id = (parsed.count("id") == 1);
    bool parent = (parsed.count("parent") == 1);
    bool type = (parsed.count("type") == 1);
    bool cond = (parsed.count("cond") == 1);
    bool thresh = (parsed.count("thresh") == 1);

    if(cmd == "new" || cmd == "run")
    {
        return (id && !parent && !type && !cond && !thresh);
    }
    else if (cmd == "step")
    {
        return (!id && parent && type && cond && thresh);
    }
    else
    {
        return false;
    }

}

void runCommand(cxxopts::ParseResult parsed)
{
    string cmd = parsed["command"].as<string>();
    cout << "Running command: " << cmd << endl;
    if(cmd == "new" || cmd == "run")
    {
        cout << "id " << parsed["id"].as<string>() << endl;
    }
    else
    {
        cout << "parent " << parsed["parent"].as<string>() << endl;
        cout << "type " << parsed["type"].as<string>() << endl;
        cout << "cond " << parsed["cond"].as<string>() << endl;
        cout << "thresh " << parsed["thresh"].as<string>() << endl;
    }
}

int main(int argc, char *argv[])
{
    cxxopts::ParseResult parsed;
    try
    {
        parsed = parseArgs(argc, argv);
        
        if(parsed.count("help"))
        {
            return 0;
        }
        else if(parsed.count("command"))
        {
            if(isCommandValid(parsed))
            {
                runCommand(parsed);
            }
            else
            {
                throw std::invalid_argument("Invalid Command");
            }
        }
        else
        {
            cerr << "No command provided" << endl;
        }
    }
    catch(std::exception &e)
    {
        cerr << e.what();
        return 1;
    }

    return 0;
}