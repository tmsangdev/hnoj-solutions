#include <iostream>
#include <fstream>
using namespace std;

char getPosition(long long jumps)
{
    // Tính vị trí của robot sau N lần nhảy
    long long position = (jumps * (jumps + 1)) / 2;
    // Vị trí của robot sau N lần nhảy là position % 26, vì vị trí của ô lặp lại sau mỗi 26 ô (tương ứng với 26 ký tự từ A đến Z)
    return 'A' + position % 26;
}

int main()
{
    ifstream infile("DKT.INP");
    ofstream outfile("DKT.OUT");

    long long N;
    infile >> N;

    outfile << getPosition(N);

    infile.close();
    outfile.close();

    return 0;
}
