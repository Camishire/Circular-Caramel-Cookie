#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int s;
    cin >> s;

    double long min = 1;
    double long max = 10000000000;
    double long radius = 1000;

    for (int i = 0; i < 100; i++) {
        double long mid = (min + max) / 2.;
        double long NoOfSquares = 0;
        double long CollNumb = 1;
        while (CollNumb * CollNumb <= mid) {
            NoOfSquares += floor(sqrt(mid - CollNumb * CollNumb));
            CollNumb++;
        }
        NoOfSquares *= 4;

        if (NoOfSquares > s) {
            radius = sqrt(mid);
            max = mid - 1;
        }
        else min = mid + 1;

    }

    cout << fixed << setprecision(10) << radius;

    return 0;
}