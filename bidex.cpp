#include <iostream>
#include <sstream>

void getSquares(int N, int M, int* &arr, int &size) {
    // taken the length which is small and used to get the size of output.
    // using std::vector as output is also a good solution.
    size = ((N > M ? N : M)/2 + 2);

    // allocate the array with size
    arr = new int[size];

    // used to set the position
    int count = 0;

    // check for iteration till 0
    while (N > 0 && M > 0) {
        if (N > M) {
            arr[count] = (M);
            N -= M;
        } else {
            arr[count] = (N);
            M -= N;
        }
        count++;
    }
}

void TestGetSquares()
{
    int N = 11;
    int M = 5;
    int size = 0;
    int *arr = 0;

    std::stringstream ostr;
    std::string expectedoutput("5x5 5x5 1x1 1x1 1x1 1x1 1x1 ");
    getSquares(N, M, arr, size);

    // just for printing.
    for (int i = 0; i < size; i++) {
        ostr << arr[i] << "x" << arr[i] << " ";
    }
    std::cout << ((ostr.str() == expectedoutput )? "Passed" : "Failed") << std::endl;
    std::cout << ostr.str() << " <> " << expectedoutput << std::endl;
}

int main() {
    TestGetSquares();
    return 0;
}
