#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0,m=0;
    cin >> n >> m;
    int arr1[n][m] = {};
    int arr2[n][m] = {};
    int result[n][m] = {};
    for (int i = 0; i<n; i++) {
        for (int j = 0 ; j<m; j++) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0 ; j<m; j++) {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0 ; j<m; j++) {
            if (arr1[i][j] != arr2[i][j]) {
                result[i][j] = 1;
            }
            cout << result[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}