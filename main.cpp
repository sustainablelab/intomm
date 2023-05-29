#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;
    if (argc == 1)
    {
        cout << "Expecting one or more args for inches" << endl;
        cout << "Example: mg_intomm 0.005 0.01 0.02" << endl;
    }
    if (argc > 1)
    {
        for(int i=1; i<argc; i++)
        {
            char* end;
            auto inches = strtof(argv[i], &end);
            if (inches == 0)
            {
                printf("Error: <*.*> \"%s\" is INVALID input <*.*> Expecting a NON-ZERO NUMBER.\n", argv[i]);
            }
            else
            {
                printf("inches: %6.3f\tmm: %8.6f\n", strtof(argv[i], &end), strtof(argv[i], &end)*25.4);
            }
        }
    }
    return 0;
}
