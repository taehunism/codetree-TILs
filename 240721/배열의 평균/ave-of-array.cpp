#include <iostream>
using namespace std;
double arr[10][10];
double result[10][10];
int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);
    double sum = 0;
    for(int i = 0; i<2; i++) {
        for (int j = 0; j<4; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<2; i++) {
        for (int j = 0; j<4; j++) {
            result[1][i] += arr[i][j]; 
        }
        cout << result[1][i]/4 << " ";
    }
    cout << '\n';
    for(int j = 0; j<4; j++) {
        for (int i = 0; i<2; i++) {
            result[2][j] += arr[i][j]; 

        }
        cout << result[2][j]/2 << " ";
    }
    cout << '\n';
    for(int i = 0; i<2; i++) {
        for (int j = 0; j<4; j++) {
            sum = sum + arr[i][j];
        }
    }
    cout << sum/8;


    return 0;
}