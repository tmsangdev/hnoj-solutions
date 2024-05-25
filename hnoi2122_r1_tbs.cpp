#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("TBS.INP");
    ofstream outfile("TBS.OUT");

    double A, B, C, D;

    infile >> A >> B >> C >> D;

    double product = A * B * C * D;

    if (product > 0)
    {
        outfile << 1;
    }
    else if (product < 0)
    {
        outfile << -1;
    }
    else
    {
        outfile << 0;
    }

    infile.close();
    outfile.close();

    return 0;
}
