#include <iostream>
using namespace std;

class Logger
{
public:
    Logger()
    {
        cout << "Logger object created." << endl;
    }

    ~Logger()
    {
        cout << "Logger object destroyed." << endl;
    }

    void logMessage(const string &message)
    {
        cout << "Log: " << message << endl;
    }
};

int main()
{
    Logger log;
    log.logMessage("This is a log message.");
}
